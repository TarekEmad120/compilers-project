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
#define VOIDTYPE 8


char *types[9] = {"int", "float", "char","bool","string" , "constint", "constfloat", "constchar", "void"};

struct SymbolData
{
    int type;
    bool intialized;
    bool used;
    int scope;
    char *name;
    char *value;
    bool modified;
    bool inscope;
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

struct SymbolData *initalizesymboldata(int type, char *name,char* value ,int scope, bool inscope ,bool used, bool initialized, bool isfunc, int argcount, int *argtypes)
{
    struct SymbolData *data = (struct SymbolData *)malloc(sizeof(struct SymbolData));
    data->type = type;
    data->name = name;
    data->value = value;
    data->scope = scope;
    data->inscope = inscope;
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
        fprintf(file, "Type: %s\n", types[temp->data->type]);
        fprintf(file, "Value: %s\n", temp->data->value);
        fprintf(file, "Scope: %d\n", temp->data->scope);
        fprintf(file, "Used: %s\n", temp->data->used ? "true" : "false");
        fprintf(file, "Initialized: %s\n", temp->data->intialized ? "true" : "false");
        fprintf(file, "Is Function: %s\n", temp->data->isfunc ? "true" : "false");
        if (temp->data->isfunc)
        {
            fprintf(file, "Arg Count: %d\n", temp->data->argcount);
            fprintf(file, "Arg Types: ");
            for (int i = 0; i < temp->data->argcount; i++)
            {
                fprintf(file, "%s ", types[temp->data->argtypes[i]]);
            }
            fprintf(file, "\n");
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
    while (scope !=-1){
        struct SymbolNode *temp = head;
        while (temp != NULL)
        {
            if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
            {
                return temp;
            }
            temp = temp->next;
        }
        scope--;

    }
}

bool checkidentifiername(char *name)
{
    //check if the identifier name is already declared and scope no is not -1
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope != -1)
        {
            return true;
        }
        temp = temp->next;
    }
}


bool is_Initialized(char *name)
{
    //printf("is_Initialized\n Name recieved ====== %s\n", name);
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->value != NULL)
        {
            //printf(" value ====  %s\n", temp->data->value);
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool is_Modifiable(char *name)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && 
        types[temp->data->type] == "int" || types[temp->data->type] == "float" || types[temp->data->type] == "char" 
        || types[temp->data->type] == "bool" || types[temp->data->type] == "string")
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void Modify_Value(char *name , char *value,int scopeno)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scopeno)
        {
            temp->data->value = value;
            printf("Value Modified %s\n", temp->data->value);
        }
        temp = temp->next;
    }
}
bool is_Function(char *name)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->isfunc == true)
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

bool chekidentifiernameandScopeoutofscope(char *name, int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope && temp->data->inscope == false)
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
            temp->data->inscope = false;
        }
        else
        {
            temp = temp->next;
        }
    }
}

void outofscope(int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (temp->data->scope == scope)
        {
            temp->data->inscope = false;
        }
        temp = temp->next;
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

char* getvalue(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return temp->data->value;
        }
        temp = temp->next;
    }
    return NULL;
}

int gettype(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return temp->data->type;
        }
        temp = temp->next;
    }
    return -1;
}

int getintvalue(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return atoi(temp->data->value);
        }
        temp = temp->next;
    }
    return -1;
}

float getfloatvalue(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return atof(temp->data->value);
        }
        temp = temp->next;
    }
    return -1;
}
bool getboolvalue(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
           if (strcmp(temp->data->value,"true")==0|| temp->data->value[0]=='1')
           {
               return true;
           }
           else
           {
               return false;
           }
           
        }
        temp = temp->next;
    }
    return -1;

}

char getcharvalue(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return temp->data->value[0];
        }
        temp = temp->next;
    }
    return -1;
}

char* getstringvalue(char *name,int scope)
{
    struct SymbolNode *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->data->name, name) == 0 && temp->data->scope == scope)
        {
            return temp->data->value;
        }
        temp = temp->next;
    }
    return NULL;
}
void printsemanticerror(char *error, int line)
{
    FILE *file = fopen("semanticerrors.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    fprintf(file, "Line %d: %s\n", line, error);
    fclose(file);
}