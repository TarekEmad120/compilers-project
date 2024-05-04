#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"
#include <errno.h>

char *types[10] = {"int", "float", "char",  "short", "long", "constint","constfloat","constchar","constshort","constlong"};

struct SymbolData {
    int type;
    bool intialized;
    bool used;
    int scope;
    char *name;
    char *value;
    bool modified;
    bool isfunc;
    int argcount;
    int *argtypes;
};

/*-----------------------------------------------------------------------linked list-----------------------------------------------------------------------*/
struct SymbolNode {
    int symbolid;
    struct SymbolData *data;
    struct SymbolNode *next;
};
SymbolNode *head = NULL;


struct SymbolData *initalizesymboldata(int type, char *name, int scope,bool used,bool initialized,bool isfunc,int argcount,int *argtypes) {
    struct SymbolData *data = (struct SymbolData *)malloc(sizeof(struct SymbolData));
    data->type = type;
    data->name = name;
    data->scope = scope;
    data->used = used;
    data->intialized = initialized;
    data->isfunc = isfunc;
    data->argcount = argcount;
    data->argtypes = argtypes;
    return data;


}

void createnode (struct SymbolData*data,int symbolid){
    struct SymbolNode *newnode = (struct SymbolNode *)malloc(sizeof(struct SymbolNode));
    newnode->symbolid = symbolid;
    newnode->data = data;
    newnode->next = head;
    head = newnode;

}

struct SymbolData* get (int symbolid){
    struct SymbolNode *temp = head;
    while (temp != NULL){
        if (temp->symbolid == symbolid){
            return temp->data;
        }
        temp = temp->next;
    }
    return NULL;

}

void setused(int symbolid){
    SymbolData *data = get(symbolid);
    if (data != NULL){
        data->used = true;
    }
}

void setinitialized(int symbolid){
    SymbolData *data = get(symbolid);
    if (data != NULL){
        data->intialized = true;
    }

}

int countnodes(){
    int count = 0;
    struct SymbolNode *temp = head;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

bool isempty(){
    if (head == NULL){
        return true;
    }
}

SymbolNode * getsymbolAndScope (char *name, int scope){
    struct SymbolNode *temp = head;
    while (temp != NULL){
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}


bool checkidentifiername (char* name){
    struct SymbolNode *temp = head;
    while (temp != NULL){
        if (strcmp(temp->data->name, name) == 0){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int getsymboltype(char *name){
    struct SymbolNode *temp = head;
    while (temp != NULL){
        if (strcmp(temp->data->name, name) == 0){
            return temp->data->type;
        }
        temp = temp->next;
    }
    return -1;
}

void setfunction(int argcount, int *argtypes, SymbolData *data){
    data->isfunc = true;
    data->argcount = argcount;
    data->argtypes = (int *)malloc(sizeof(int) * argcount);// allocate memory for the argtypes
    for (int i = 0; i < argcount; i++){
        data->argtypes[i] = argtypes[i];
    }
}

int checkargs(int argcount, int *argtypes, char*name ,int scope){
    struct SymbolNode *temp = getsymbolAndScope(name, scope);
    if (temp != NULL){
        if (temp->data->argcount == argcount){
            for (int i = 0; i < argcount; i++){
                if (temp->data->argtypes[i] != argtypes[i]){
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;

}

void endscope(int scope){
    struct SymbolNode *temp = head;
    while (temp != NULL){
        if (temp->data->scope == scope){
            temp->data->scope = -1;
        }
        else{
            temp = temp->next;
        }
    }
}

void destroy(){
    struct SymbolNode *temp = head;
    while (temp != NULL){
        struct SymbolNode *temp2 = temp;
        temp = temp->next;
        free(temp2->data);
        free(temp2);
    }
}

//print in file symboltable.txt
void printSymbolTable(){
    FILE *file = fopen("symboltable.txt", "w");
    if (file == NULL){
        printf("Error opening file\n");
        return;
    }
    struct SymbolNode *temp = head;
    while (temp != NULL){
        fprintf(file, "Name: %s\n", temp->data->name);
        fprintf(file, "Type: %s\n", types[temp->data->type]);
        fprintf(file, "Scope: %d\n", temp->data->scope);
        fprintf(file, "Used: %s\n", temp->data->used ? "true" : "false");
        fprintf(file, "Initialized: %s\n", temp->data->intialized ? "true" : "false");
        fprintf(file, "Is Function: %s\n", temp->data->isfunc ? "true" : "false");
        if (temp->data->isfunc){
            fprintf(file, "Arg Count: %d\n", temp->data->argcount);
            fprintf(file, "Arg Types: ");
            for (int i = 0; i < temp->data->argcount; i++){
                fprintf(file, "%s ", types[temp->data->argtypes[i]]);
            }
            fprintf(file, "\n");
        }
        fprintf(file, "\n");
        temp = temp->next;
    }
    fclose(file);
}