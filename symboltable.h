#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define INTTYPE 0
#define FLOATTYPE 1
#define CHARTYPE 2
#define BOOLTYPE 3
#define STRINGTYPE 4
#define CONSTINTTYPE 5
#define CONSTFLOATTYPE 6
#define CONSTCHARTYPE 7


char *types[8] = {"int", "float", "char","bool","string" , "constint", "constfloat", "constchar"};

struct SymbolData
{
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

struct SymbolNode
{
    int symbolid;
    struct SymbolData *data;
    struct SymbolNode *next;
};
struct SymbolNode *head = NULL;

struct SymbolData *initalizesymboldata(int type, char *name,char* value ,int scope, bool used, bool initialized, bool isfunc, int argcount, int *argtypes)
{
    struct SymbolData *data = (struct SymbolData *)malloc(sizeof(struct SymbolData));
    data->type = type;
    data->name = name;
    data->value = value;
    data->scope = scope;
    data->used = used;
    data->intialized = initialized;
    data->isfunc = isfunc;
    data->argcount = argcount;
    data->argtypes = argtypes;
    return data;
}

void createnode(struct SymbolData *data, int symbolid)
{
    struct SymbolNode *newnode = (struct SymbolNode *)malloc(sizeof(struct SymbolNode));
    newnode->symbolid = symbolid;
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

int countnodes()
{
    int count = 0;
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// void myFunction()
// {

//     struct SymbolData *ptr = initalizesymboldata(5, "String", 1, true, true, true, 2, &count);
//     createnode(ptr, count++);
//     printf("COUNTTTTTTTTTTTTTTTTTTTTT of NOde %d\n", countnodes());
// }

void printSymbolTable()
{
    FILE *file = fopen("symboltable.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        fprintf(file, "Name: %s\n", temp->data->name);
        printf("name is finished\n");
        fprintf(file, "Type: %s\n", types[temp->data->type]);
        printf("type is finished\n");
        fprintf(file, "Value: %s\n", temp->data->value);
        printf("value is finished\n");
        fprintf(file, "Scope: %d\n", temp->data->scope);
        printf("scope is finished\n");
        fprintf(file, "Used: %s\n", temp->data->used ? "true" : "false");
        printf("used is finished\n");
        fprintf(file, "Initialized: %s\n", temp->data->intialized ? "true" : "false");
        printf("initialized is finished\n");
        fprintf(file, "Is Function: %s\n", temp->data->isfunc ? "true" : "false");
        printf("isfunc is finished\n");
        if (temp->data->isfunc)
        {
            fprintf(file, "Arg Count: %d\n", temp->data->argcount);
            printf("argcount is finished\n");
            fprintf(file, "Arg Types: ");
            printf("argtypes1 is finished\n");
            for (int i = 0; i < temp->data->argcount; i++)
            {
                fprintf(file, "%s ", types[temp->data->argtypes[i]]);
            }
            fprintf(file, "\n");
            printf("argtypes2 is finished\n");
        }
        fprintf(file, "\n");
        temp = temp->next;
    }
    fclose(file);
}
bool isempty()
{
    if (head == NULL)
    {
        return true;
    }
}

struct SymbolNode *getsymbolAndScope(char *name, int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

bool checkidentifiername(char *name)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
bool checkidentifiernameAndScope(char *name, int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int getsymboltype(char *name)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0)
        {
            return temp->data->type;
        }
        temp = temp->next;
    }
    return -1;
}

void setfunction(int argcount, int *argtypes, struct SymbolData *data)
{
    data->isfunc = true;
    data->argcount = argcount;
    data->argtypes = (int *)malloc(sizeof(int) * argcount); // allocate memory for the argtypes
    for (int i = 0; i < argcount; i++)
    {
        data->argtypes[i] = argtypes[i];
    }
}

int checkargs(int argcount, int *argtypes, char *name, int scope)
{
    struct SymbolNode *temp = getsymbolAndScope(name, scope);
    if (temp != NULL)
    {
        if (temp->data->argcount == argcount)
        {
            for (int i = 0; i < argcount; i++)
            {
                if (temp->data->argtypes[i] != argtypes[i])
                {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

void endscope(int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (temp->data->scope == scope)
        {
            temp->data->scope = -1;
        }
        else
        {
            temp = temp->next;
        }
    }
}
void destroy()
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        struct SymbolNode *temp2 = temp;
        temp = temp->next;
        free(temp2->data);
        free(temp2);
    }
}