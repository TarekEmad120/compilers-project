%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdbool.h>
	#include <fcntl.h>
	#include "symboltable.h"
	extern FILE *yyin;

	extern int yylineno; /* Line Number tacker from lexer */
	extern int yylex(); 
	extern void yyerror(char *s);
	int count=0;
	int scopeno = 0;
	/* leave those for function declaration
	i will implement it later on thursday  or any one try to implement it first*/
	char* currentfunctionname = "";
	int functiontype = 0;
	int memaddress=0;
	int Ifcounter=0;
  int EndIfcounter=0;
	int whileCounter=0;
	int doWhileCounter=0;
	int forCounter=0;
	int switchCounter=0;
	int caseCounter=0;
	int argcount = 0;
	int funcargs[30];
	extern bool programerror = false;
	bool checkBreak=false;

	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	
	void printPushValue( char*  x );
	void printPushOp( int x );
	void PrintPopMem( int x );
	void printBoolenOp( int x );
	void printJUMPtype( int x );
	void printVM(char * s,int num);
	void PrintIDentifierAdress(int y);
	
%}
%union {//this is the union for the token value from the lexer
	char* name ;//identifier name 
	int var_type;//type
	struct lexical{
		int type ;//type value 
	    char* name2 ;// name
		int intval;//value int 
		float floatval;//float value
		char charval;//char value
		bool boolval;//bool value
		char* stringval;//string value
		char* valueinstring;//value in string
	} lexicalstruct;
}




        /* Identifier and Numbers */
%token IDENTIFIER
%token INT_NUM
%token FLOAT_VAL
%token STRING_VAL
%token TRUE_VAL
%token FALSE_VAL
%token CHAR_VAL


        /* Types */
%token INT 
%token FLOAT
%token CHAR
%token BOOL
%token STRING


        /* Constant */
%token CONST
%token EXTERN

        /* Mathematical Expressions */
%token PLUS
%token MINUS
%token MULT
%token DIV
%token PLUS_EQ
%token MINUS_EQ
%token MULT_EQ
%token DIV_EQ
%token INC
%token DEC


        /* Comparison Op */
%token LT
%token GT
%token GE
%token LE
%token EQ_EQ
%token NE
        /* Logical Expressions */

%token AND
%token OR
%token NOT
        /* Assignment Operator */
%token EQUAL



        /* if then else statement */
%token IF
%token ELSEIF
%token ELSE

        /* While & do-while statement */
%token WHILE
%token DO
%token FOR
%token SWITCH
%token CASE
%token DEFAULT
%token BREAK
%token CONTINUE

        /* Functions */
%token VOID 
%token RETURN  
%token COMMA
%token COLON


        /* Brackets */
%token OPENBRACKET
%token CLOSEDBRACKET
%token OPENCURL
%token CLOSEDCURL

        /* Stop Characters */
%token SEMICOLON

        /* Associativity */

// Non Associative
%nonassoc OR AND NOT

// Left Associative
%left PLUS MINUS PLUS_EQ MINUS_EQ INC DEC
%left MULT DIV MULT_EQ DIV_EQ
%left GE LE EQ_EQ NE GT LT

/* THIS ARE THE TOKEN COMES FROM THE LEXER  */
%type <name> IDENTIFIER
%type <lexicalstruct> INT_NUM
%type <lexicalstruct> FLOAT_VAL
%type <lexicalstruct> CHAR_VAL
%type <lexicalstruct> STRING_VAL
%type <lexicalstruct> TRUE_VAL
%type <lexicalstruct> FALSE_VAL
%type <var_type> INT
%type <var_type> FLOAT
%type <var_type> CHAR
%type <var_type> STRING
%type <var_type> BOOL
/* THIS ARE FOR EXPRESSION IN GRAMMER  */
%type <var_type> type
%type <lexicalstruct> value
%type <lexicalstruct> constant
%type <lexicalstruct> expression
%type <lexicalstruct> boolean_expression
%type <lexicalstruct> arithmetic_expression
%type <lexicalstruct> unary_expression
%type <lexicalstruct> binary_expression
%type <lexicalstruct> term
%type <lexicalstruct> factor
%type <lexicalstruct> function_call
%type <lexicalstruct> return_value

%start statements

%%

/* the beginning of program
it starts with the statements 
 */
statements :
    statements statement
    | statement
    ;
/* the statement can be any of the following */
statement :
	expression SEMICOLON 	{printf("Expression statement\n");}
	| assignment_statement	{printf("Assignment Statement \n");}
	| var_declaration 	{printf("Variable declaration\n");}
	| constant_declaration
	| extern_declartion
	| if_statement
	| while_statement
	| do_while_statement
	| for_statement
    | switch_statement {caseCounter=0;}
    | break_statement
    | continue_statement
	| function 	{printf("Function statement\n");}
	| function_call{printf("Function call statement\n");}
	| OPENCURL {
		//when open curly bracket is found the scope is opened so scope number is increased
		scopeno++;
		printf("Scope Opened\n");
	
	} statements CLOSEDCURL {
		//when close curly bracket is found the scope is closed so we use end scope function to close the scope
		// we decrease the scope number
		endscope(scopeno);
		scopeno--;
		printf("Scope Closed\n");
	}
	
    | SEMICOLON
	;

/* Values & Types*/

value: expression
{
	$$.intval = $1.intval;
	$$.floatval = $1.floatval;
	$$.charval = $1.charval;
	$$.boolval = $1.boolval;
	$$.stringval = $1.stringval;
	$$.valueinstring = $1.valueinstring;
	$$.type = $1.type;
	//PrintIDentifierAdress($$.intval);

}
| STRING_VAL{
	$$.type = STRINGTYPE;
	$$.stringval = $1.valueinstring;
	$$.valueinstring = $1.valueinstring;

}
 | CHAR_VAL{
	$$.type = CHARTYPE;
	$$.charval = $1.charval;
	$$.valueinstring = $1.valueinstring;
	//PrintIDentifierAdress($$.charval);
 }

type:  INT | FLOAT | CHAR | STRING | BOOL;

constant:  INT_NUM | FLOAT_VAL | STRING_VAL | TRUE_VAL | FALSE_VAL | CHAR_VAL;


/* Variable Declaration */
// these are the variable declaration 
// you can declare the variable with the value or without the value
// you can't use assignment statement in the variable declaration as it will be to difficult to parse
// so we use the value to assign the value to the variable or function to  variable
// if you want to declare the variable without the value you can use the type and the identifier

assignment_statement:
          IDENTIFIER EQUAL expression SEMICOLON  
		  {
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					printf("scopevar %d\n",scopevar);
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
				 printsemanticerror("variable is not declared",yylineno);
				 programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}

				//check the types
				if (programerror == false){
				int type = getsymboltype($1);
				if(is_Modifiable($1) == false){
						 printsemanticerror("variable is not modifiable",yylineno);
				 programerror = true;
				}
				else if (type != $3.type ){
					if(getsymboltype($1) == BOOLTYPE)
					{
						if(strcmp($3.valueinstring,"0") == 0 )
						{
							Modify_Value($1, "0",scopevar);
						}else
						{
							Modify_Value($1, "1",scopevar);
						}
					}else
					{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
						//update the value of the variable
						printf("value in string %s\n",$3.valueinstring);
						Modify_Value($1, $3.valueinstring,scopevar);
					
				}
				PrintPopMem(ptr->data->memaddress);
				}
		  }
        | IDENTIFIER PLUS_EQ expression SEMICOLON
		{
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			if(programerror == false){
				//check the types
				int type = getsymboltype($1);
				if(is_Modifiable($1) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != $3.type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue($1,scopevar) + $3.intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue($1,scopevar) + $3.floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
			
		}
		| IDENTIFIER MINUS_EQ expression SEMICOLON
		{
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			if (programerror == false){
				//check the types
				int type = getsymboltype($1);
				if(is_Modifiable($1) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != $3.type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue($1,scopevar) - $3.intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue($1,scopevar) - $3.floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
		}
		| IDENTIFIER MULT_EQ expression SEMICOLON{
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			if (programerror == false){
				//check the types
				int type = getsymboltype($1);
				if(is_Modifiable($1) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != $3.type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue($1,scopevar) * $3.intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue($1,scopevar) * $3.floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
		}
		| IDENTIFIER DIV_EQ expression SEMICOLON{
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
		if (programerror == false){
				//check the types
				int type = getsymboltype($1);
				if(is_Modifiable($1) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != $3.type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue($1,scopevar) / $3.intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue($1,scopevar) / $3.floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value($1, valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
					}
				}
			}
		}
        | IDENTIFIER EQUAL function_call//it is not yet implemented
        ;

var_declaration:
          type IDENTIFIER EQUAL value SEMICOLON
		  {
			
			//here we check if the variable is already declared in the scope or not
			if (checkidentifiernameAndScope($2, scopeno) == 1){

				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			
			printf("identifier name %s\n", $2);
			
			int type = $1;// type of the variable
			char* name = $2;// name of the variable
			int value = $4.type;// value(type) of the variable
			printf("value is %d\n",value);
			char* valueinstring = $4.valueinstring; // value in string
			if (type != value){// if the type of the variable and the value type is not same then we return the error
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror == false){
				printf("iam here\n");
			struct SymbolData *ptr = initalizesymboldata($1,name , valueinstring,scopeno,true ,true, true, false, 0, 0,memaddress);
			
			memaddress++;
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}
			if(programerror ==false){
				PrintPopMem(memaddress-1);
			}
			
		}
        | type IDENTIFIER EQUAL function_call
		{
			struct SymbolNode *ptr ;
			int scopevar = 0;
			printf("function name isssss  %s\n",$4.name2);
			if (programerror == false){
			//here we check if the variable is already declared in the scope or not
			if (checkidentifiernameAndScope($4.name2, scopeno) == 0){
				if (checkidentifiername($4.name2)==1){
					ptr =getsymbolAndScope($4.name2, scopeno);
					scopevar= ptr->data->scope;
					if (ptr->data->type != $1){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
					else if (ptr->data->isfunc == false){
						printsemanticerror("variable is not a function",yylineno);
						programerror = true;
					}

				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				printf("iam here1\n");
				ptr =getsymbolAndScope($4.name2, scopeno);
				scopevar= ptr->data->scope;
				if (ptr->data->type != $1){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				if (ptr->data->isfunc == false){
					printsemanticerror("variable is not a function",yylineno);
					programerror = true;
				}
			}
			

			if (programerror == false){
		printf("identifier name %s\n", $2);

			int type = $1;// type of the variable
			char* name = $2;// name of the variable
			char* valueinstring = NULL; // value in string
			printf("function name isssss  %s\n",$4.name2);
			printf("type isssss  %d\n",$1 );
			
			int value = $4.type;// value(type) of the variable
				//we create the symbol data and add it to the symbol table
			struct SymbolData *ptr = initalizesymboldata($1,name , valueinstring,scopeno,true ,true, true, false, 0, 0,memaddress);
			memaddress++;
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}
			}
		}
		


        | type IDENTIFIER SEMICOLON{
			// same as above 
			if (checkidentifiernameAndScope($2, scopeno) == 1){
				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
			int type = $1;
			char* name = $2;
			struct SymbolData *ptr = initalizesymboldata($1,name , NULL,scopeno, true,false, false, false, 0, 0,memaddress);
			memaddress++;
			createnode(ptr, count++);
			}
		}

constant_declaration: 	CONST type IDENTIFIER EQUAL value SEMICOLON  {printf("Constant declaration\n");
			// same as above
			if (checkidentifiernameAndScope($3, scopeno) == 1){
				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
			int type = $2;

			char* name = $3;
			int value = $5.type;
			char* valueinstring = $5.valueinstring;
			if (type != value){
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}

			else{//cange the type of the variable to constant type
			if (type ==INTTYPE){
				type = CONSTINTTYPE;
			}
			else if (type ==FLOATTYPE){
				type = CONSTFLOATTYPE;
			}
			else if (type ==CHARTYPE){
				type = CONSTCHARTYPE;
			}
			else {
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			//create the symbol data and add it to the symbol table
				struct SymbolData *ptr = initalizesymboldata(type,name , valueinstring,scopeno,true, true, false, false, 0, 0,memaddress);
				memaddress++;
				createnode(ptr, count++);
				printf("count of node %d\n",countnodes());
			}
			}
				};

/* i didn't start in exter declation because i will add it to the start of program another time as it is not
in requirement of the project
 */
extern_declartion:  EXTERN type IDENTIFIER SEMICOLON
					| EXTERN type IDENTIFIER EQUAL value SEMICOLON

/* Function Declaration */
/*same comments
for the function declaration
*/
		
Return_Statement: RETURN return_value SEMICOLON 
{	
						printf("Return statement\n");
						char *str4 = currentfunctionname;
						char *str3 = malloc(strlen("jmp return_") + strlen(str4) + 1);
						strcpy(str3, "jmp return_");
						strcat(str3, str4);
						printf("str333333333333333333 %s\n",str3);
						printVM( str3 , -1 );
						if(scopeno > 1 ){
						char* str = malloc(strlen("return_label_") + strlen(str4) + strlen(":") + 1);
						strcpy(str, "return_label_");
						strcat(str, str4);
						strcat(str, ":");
						printVM(str,-1);
						}
}
					|
					{	char *str4 = currentfunctionname;
						char *str3 = malloc(strlen("jmp return_") + strlen(str4) + 1);
						strcpy(str3, "jmp return_");
						strcat(str3, str4);
						printf("str333333333333333333 %s\n",str3);
						printVM( str3 , -1 );

						if(scopeno > 1 ){
						char* str = malloc(strlen("return_label_") + strlen(str4) + strlen(":") + 1);
						strcpy(str, "return_label_");
						strcat(str, str4);
						strcat(str, ":");
						printVM(str,-1);
						}
					}
					;
function: 			function_prototype {
								if(scopeno > 0){
								char *str4 = currentfunctionname;	
								char* str = malloc(strlen("jmp return_label_") + strlen(str4) + 1);
								strcpy(str, "jmp return_label_");
								strcat(str, str4);
								printVM(str,-1);}
} OPENCURL{scopeno++;} statements  Return_Statement  CLOSEDCURL
{
	endscope(scopeno); 
	scopeno--;
	currentfunctionname = "";
	argcount=0;

	printf("Function Definition\n");
};

return_value: 	
			value
			{
				if (currentfunctionname == ""){
					printsemanticerror("return statement is not in the function",yylineno);
					programerror = true;
				}
				if (functiontype==VOIDTYPE){
					printsemanticerror("return statement is not in the function",yylineno);
					programerror = true;
				}
				if (programerror == false){
					if (functiontype == $1.type){
						//check if the return type is the same as the function type
						//if it is the same then we return the value
						$$.type = $1.type;
						$$.intval = $1.intval;
						$$.floatval = $1.floatval;
						$$.charval = $1.charval;
						$$.boolval = $1.boolval;
						$$.stringval = $1.stringval;
						$$.valueinstring = $1.valueinstring;
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
 			|
			 ;
function_prototype:
    type IDENTIFIER  OPENBRACKET { 
		
		char *str = malloc(strlen(":") + strlen($2) + 1);
		strcpy(str, $2);
		strcat(str, ":");
		printVM(str,-1);
		argcount = 0;

	} parameters CLOSEDBRACKET{
				//check if the function is already declared or not
		if (checkidentifiernameAndScope($2, scopeno) == 1){
			printsemanticerror("function name is aleady declared",yylineno);
			programerror = true;
		}
		if (programerror == false){
			int type = $1;//type of the function
			char* name = $2;//name of the function
			currentfunctionname = name;
			functiontype=type;
			//create the symbol data and add it to the symbol table but it is not yet implemented
			struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno, false,false, false, true, argcount, 0,memaddress);
			setfunction(argcount, funcargs, ptr);
			memaddress++;
			createnode(ptr, count++);
		}
		argcount = 0;
	}
    | type IDENTIFIER OPENBRACKET{
	
		char *str = malloc(strlen(":") + strlen($2) + 1);
		strcpy(str, $2);
		strcat(str, ":");
		printVM(str,-1);

	} CLOSEDBRACKET{ 
		if (checkidentifiernameAndScope($2, scopeno) == 1){
			printsemanticerror("function name is aleady declared",yylineno);
			programerror = true;
		}
		if (programerror == false){

		
		int type = $1;
		char* name = $2;
		currentfunctionname = name;
		functiontype=type;
		struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);
		}
	}
    | VOID IDENTIFIER OPENBRACKET{argcount=0;}
	parameters CLOSEDBRACKET{
			if (checkidentifiernameAndScope($2, scopeno) == 1){
				printsemanticerror("function name is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
				int type = VOIDTYPE;
				char* name = $2;
				currentfunctionname = name;
				functiontype= type;
				struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
				setfunction(argcount, funcargs, ptr);
				memaddress++;
				createnode(ptr, count++);
				argcount = 0;
				char *str = malloc(strlen(":") + strlen($2) + 1);
				strcpy(str, $2);
				strcat(str, ":");
				printVM(str,-1);
			}
		 }
    | VOID IDENTIFIER OPENBRACKET{
		char *str = malloc(strlen(":") + strlen($2) + 1);
		strcpy(str, $2);
		strcat(str, ":");
		printVM(str,-1);
	}
	 CLOSEDBRACKET{ 
		if (checkidentifiernameAndScope($2, scopeno) == 1){
			printsemanticerror("function name is aleady declared",yylineno);
			programerror = true;
		}
		if (programerror == false){
		int type = VOIDTYPE;
		char* name = $2;
		currentfunctionname = name;
		functiontype= type;
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);
		 argcount = 0;
		 }
	 }
    ;

parameters: 			parameters COMMA single_parameter | single_parameter ;

single_parameter: 		type IDENTIFIER 
						{
							//check if the variable is already declared or not but scope is increased by 1
							//because the varible  will be used in the function so it is in the scope of the function
							// so we increase the scope by 1 locally until the effect of scopeno is increased globaly so you can use it in the function
							/*
							dummy example :
							int a = 0; //global scope and scope number is 0
							int add(int a, int b) // scope number is 1 locally but globally it is 0
							{//scope number is 1 globally
							  -- so the a and b are in the scope number 1 and can be used in the function
								return a+b;
							}
							*/
							if (chekidentifiernameandScopeoutofscope($2, scopeno+1) == 1){
								printsemanticerror("variable is aleady declared",yylineno);
								programerror = true;
							}
							if (programerror == false){
							int type = $1;
							char* name = $2;
							struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno+1, true,false, false, false, 0, 0,memaddress);
							memaddress++;
							createnode(ptr, count++);
							funcargs[argcount] = type;
							argcount++;
							}
						}
						| type IDENTIFIER EQUAL constant 
						{
							if (chekidentifiernameandScopeoutofscope($2, scopeno+1) == 1){
								printsemanticerror("variable is aleady declared",yylineno);
								programerror = true;
							}
							int type = $1;
							char* name = $2;
							int value = $4.type;
							char* valueinstring = $4.valueinstring;
							if (type != value){
								printsemanticerror("Type mismatch",yylineno);
								programerror = true;
							}
							if (programerror == false){
								struct SymbolData *ptr = initalizesymboldata($1,name , valueinstring,scopeno+1, true,false, false, false, 0, 0,memaddress);
								memaddress++;
								funcargs[argcount] = type;
								argcount++;
								createnode(ptr, count++);
							}
						}
						;

function_call: 			IDENTIFIER OPENBRACKET{argcount=0;} call_parameters CLOSEDBRACKET SEMICOLON  
						{
							int scopevar;
							struct SymbolNode *ptr;
							if(checkidentifiernameAndScope($1, scopeno) == 0){
								if (checkidentifiername($1)==1){
									ptr =getsymbolAndScope($1, scopeno);
									scopevar= ptr->data->scope;
								}
								else{
									printsemanticerror("Function variable is not declared",yylineno);
									programerror = true;
								}
							}else{
								ptr =getsymbolAndScope($1, scopeno);
								scopevar= ptr->data->scope;
							}
							if (programerror==false){
							//check on argcount and argtypes using bool checkargs
								if (checkargs(argcount,funcargs,ptr) == false){
									printsemanticerror("Function arguments mismatch",yylineno);
									printf("argcount %d\n",argcount);
									programerror = true;
								
								}
							}
							if (programerror == false){
								$$.name2 = $1;

							}
							printf("Function call\n");

							char *str = malloc(strlen("call ") + strlen($1) + 1);
							strcpy(str, "call ");
							strcat(str, $1);
							printVM(str,-1);


							char *str1 = malloc(strlen("return_") + strlen($1) + strlen(":") + 1);
							strcpy(str1, "return_");
							strcat(str1, $1);
							strcat(str1, ":");
							printVM(str1,-1);
						}
						;

call_parameters:		call_parameter |;

call_parameter:			call_parameter COMMA value
						{
							int type= $3 .type;
							funcargs[argcount] = type;
							argcount++;
						}
						 | value 
						 {
							int type= $1 .type;
							funcargs[argcount] = type;
							argcount++;
						 }
						 ;


/* Expression */

expression:
        boolean_expression  {
			char* var_name = $1.stringval;
			// printf("variable name  =   =  %s\n",var_name);
			if(var_name != NULL){
				if(is_Initialized(var_name) == false){
					printsemanticerror("variable is not initialized",yylineno);
					programerror = true;
				}
				else{
					printf("variable is initialized\n");
				}
			}
		}
        | arithmetic_expression
		{
			// $$.stringval = $1.stringval; // 8aleban malo4 lazma
		}
        ;

/*  Boolean Expressions */

boolean_expression:

        expression EQ_EQ arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					if ($1.intval == $3.intval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					if ($1.floatval == $3.floatval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == CHARTYPE || $1.type == CONSTCHARTYPE){
				if ($3.type == CHARTYPE || $3.type == CONSTCHARTYPE){
					if ($1.charval == $3.charval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == STRINGTYPE){
				if ($3.type == STRINGTYPE){
					if (strcmp($1.stringval, $3.stringval) == 0){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == BOOLTYPE){
				if ($3.type == BOOLTYPE){
					if ($1.boolval == $3.boolval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(1);
			}
		}
        | expression NE arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					if ($1.intval != $3.intval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = true;
					$$.valueinstring = "1";
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					if ($1.floatval != $3.floatval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = true;
					$$.valueinstring = "1";
				}
			}
			else if ($1.type == CHARTYPE || $1.type == CONSTCHARTYPE){
				if ($3.type == CHARTYPE || $3.type == CONSTCHARTYPE){
					if ($1.charval != $3.charval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = true;
					$$.valueinstring = "1";
				}
			}
			else if ($1.type == STRINGTYPE){
				if ($3.type == STRINGTYPE){
					if (strcmp($1.stringval, $3.stringval) != 0){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
			}else if ($1.type == BOOLTYPE){
				if ($3.type == BOOLTYPE){
					if ($1.boolval != $3.boolval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = true;
					$$.valueinstring = "1";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(2);
			}
		}
        | expression GE arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					if ($1.intval >= $3.intval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					if ($1.floatval >= $3.floatval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(3);
			}
		}
        | expression LE arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					if ($1.intval <= $3.intval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					if ($1.floatval <= $3.floatval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(4);
			}
		}
        | expression GT arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					if ($1.intval > $3.intval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					if ($1.floatval > $3.floatval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(5);
			}
		}
        | expression LT arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					if ($1.intval < $3.intval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
				
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					if ($1.floatval < $3.floatval){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
					printBoolenOp(6);
				}
		}
        | expression AND arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == BOOLTYPE){
				if ($3.type == BOOLTYPE){
					if ($1.boolval == true && $3.boolval == true){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
					printBoolenOp(7);
				}
		}
        | expression OR arithmetic_expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($1.type == BOOLTYPE){
				if ($3.type == BOOLTYPE){
					if ($1.boolval == true || $3.boolval == true){
						$$.boolval = true;
						$$.valueinstring = "1";
					}
					else{
						$$.boolval = false;
						$$.valueinstring = "0";
					}
				}
				else{
					$$.boolval = false;
					$$.valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
					printBoolenOp(8);
				}
		}
		| NOT expression
		{
			$$.type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ($2.type == BOOLTYPE){
				if ($2.boolval == true){
					$$.boolval = false;
					$$.valueinstring = "0";
				}
				else{
					$$.boolval = true;
					$$.valueinstring = "1";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				
			}
			if(programerror==false){
					printBoolenOp(9);
				}
		}
		| TRUE_VAL
		{
			$$.type = BOOLTYPE;
			$$.boolval = true;
			$$.valueinstring = "1";
			
					printBoolenOp(10);
				
		}
		| FALSE_VAL
		{
			$$.type = BOOLTYPE;
			$$.boolval = false;
			$$.valueinstring = "0";
			
					printBoolenOp(11);
			
		}
		;

/*  Mathematical Expressions */

arithmetic_expression:
        binary_expression { 
			// $$.stringval = $1.stringval;
			
		 }
        | unary_expression
        ;

unary_expression:
        IDENTIFIER INC{
			//check if the variable is declared or not
			//check if the variable is declared or not
						int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printsemanticerror("variable is not initialized",yylineno);
				programerror = true;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printsemanticerror("variable is not modifiable",yylineno);
				programerror = true;
			}
			//increment the value of the variable
			if (programerror==false){
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = getintvalue($1,scopevar) + 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value($1, valueinstring,scopevar);
				$$.type = INTTYPE;
				$$.valueinstring = valueinstring;
				$$.intval = value;
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = getfloatvalue($1,scopevar) + 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value($1, valueinstring,scopevar);
				$$.type = FLOATTYPE;
				$$.valueinstring = valueinstring;
				$$.floatval = value;
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
		}
		}
        | IDENTIFIER DEC
		{
			//check if the variable is declared or not
						int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printsemanticerror("variable is not initialized",yylineno);
				programerror = true;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printsemanticerror("variable is not modifiable",yylineno);
				programerror = true;
			}
			//decrement the value of the variable
			if (programerror==false){
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = getintvalue($1,scopevar) - 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value($1, valueinstring,scopevar);
				$$.type = INTTYPE;
				$$.valueinstring = valueinstring;
				$$.intval = value;
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = getfloatvalue($1,scopevar) - 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value($1, valueinstring,scopevar);
				$$.type = FLOATTYPE;
				$$.valueinstring = valueinstring;
				$$.floatval = value;
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			}
		}
        ;

binary_expression:
        binary_expression PLUS term
		{
			//check on the type of the expression
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					int value = $1.intval + $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					$$.type = INTTYPE;
					$$.valueinstring = valueinstring;
					$$.intval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.intval + $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					float value = $1.floatval + $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.floatval + $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else if ($1.type == STRINGTYPE){
				if ($3.type == STRINGTYPE){
					char* value = (char*)malloc(strlen($1.stringval) + strlen($3.stringval) + 1);
					strcpy(value, $1.stringval);
					strcat(value, $3.stringval);
					$$.type = STRINGTYPE;
					$$.valueinstring = value;
					$$.stringval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(1);
    
			}
			
		}
        | binary_expression MINUS term
		{
			//check on the type of the expression
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					int value = $1.intval - $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					$$.type = INTTYPE;
					$$.valueinstring = valueinstring;
					$$.intval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.intval - $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					float value = $1.floatval - $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.floatval - $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(2);
    
			}
		}
        | term
        ;

term:
        factor
        | term MULT factor
		{
			//check on the type of the expression
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					int value = $1.intval * $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					$$.type = INTTYPE;
					$$.valueinstring = valueinstring;
					$$.intval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.intval * $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					float value = $1.floatval * $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.floatval * $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(3);
	
			}
		}
        | term DIV factor
		{
			//check on the type of the expression
			if ($1.type == INTTYPE || $1.type == CONSTINTTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					int value = $1.intval / $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					$$.type = INTTYPE;
					$$.valueinstring = valueinstring;
					$$.intval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.intval / $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ($1.type == FLOATTYPE || $1.type == CONSTFLOATTYPE){
				if ($3.type == INTTYPE || $3.type == CONSTINTTYPE){
					float value = $1.floatval / $3.intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else if ($3.type == FLOATTYPE || $3.type == CONSTFLOATTYPE){
					float value = $1.floatval / $3.floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					$$.type = FLOATTYPE;
					$$.valueinstring = valueinstring;
					$$.floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(4);
	
			}
		}
        ;

factor:

        INT_NUM {
	
			$$.type = INTTYPE;
			$$.valueinstring = $1.valueinstring;
			$$.intval = $1.intval;
			if (programerror==false){
				 printPushValue($1.valueinstring);
			}
		}
        | FLOAT_VAL{
			$$.type = FLOATTYPE;
			$$.valueinstring = $1.valueinstring;
			$$.floatval = $1.floatval;
			if (programerror==false){
				printPushValue($1.valueinstring);
			}
		}
        | IDENTIFIER
		{
			// check if the variable is declared or not
			//check if the variable is declared or not
						int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			// check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printsemanticerror("variable is not initialized",yylineno);
				programerror = true;
			}
			if (programerror==false){
			$$.type= getsymboltype($1);
			$$.valueinstring=getvalue($1,scopevar);
			if ($$.type==INTTYPE || $$.type==CONSTINTTYPE){
				$$.intval= getintvalue($1,scopevar);
			}
			else if ($$.type==FLOATTYPE|| $$.type==CONSTFLOATTYPE){
				$$.floatval= getfloatvalue($1,scopevar);
			}
			else if ($$.type==CHARTYPE || $$.type==CONSTCHARTYPE){
				$$.charval= getcharvalue($1,scopevar);
			}
			else if ($$.type==STRINGTYPE){
				$$.stringval= getstringvalue($1,scopevar);
			}else if($$.type==BOOLTYPE){
				printf("boolval = %d\n", ptr->data->value);
				$$.boolval= getboolvalue($1,scopevar);
				printf("boolval = %d\n", $$.boolval);
			}
			if(programerror==false){
				PrintIDentifierAdress(ptr->data->memaddress);
			}
			}
		}
        | OPENBRACKET expression CLOSEDBRACKET
		{
			$$.type = $2.type;
			$$.valueinstring = $2.valueinstring;
			$$.intval = $2.intval;
			$$.floatval = $2.floatval;
			$$.charval = $2.charval;
			$$.stringval = $2.stringval;
			$$.boolval = $2.boolval;
		}
        ;


/* If statement */

if_statement:
        IF {Ifcounter++;} OPENBRACKET value CLOSEDBRACKET OPENCURL{scopeno++;printVM("JumpFalse EndOFSection",Ifcounter);} 
		statements {printVM("Jump EndIF",EndIfcounter);}
		 CLOSEDCURL{endscope(scopeno); scopeno--;printVM("EndOFSection",Ifcounter);} else_if_statement elsestatement  {printVM("EndIF",EndIfcounter);EndIfcounter++;}
		{

			printf("If then statement\n");
			// printf("variable name  ==  %s\n",$3.s);
		}
	;
elsestatement:
		ELSE OPENCURL{scopeno++;} statements CLOSEDCURL{endscope(scopeno); scopeno--;}
		| 
		;

else_if_statement:
    else_if_statement  ELSEIF{Ifcounter++;} OPENBRACKET value CLOSEDBRACKET   OPENCURL {scopeno++;  printVM("JumpFalse EndOFSection",Ifcounter); }   statements {printVM("Jump EndIF",EndIfcounter);} CLOSEDCURL  {printVM("EndOFSection",Ifcounter);} { endscope(scopeno); scopeno--;}
		| 
    ;

	
/* While statement */

while_statement:
		WHILE {whileCounter++;} {printJUMPtype(5);}  OPENBRACKET value  CLOSEDBRACKET {printJUMPtype(7);} statement {printJUMPtype(8);}  {printJUMPtype(6);} {printf("while loop\n");}
		;

/* Do while statement */

do_while_statement:
	DO {doWhileCounter++;} {printJUMPtype(9);} statement WHILE  OPENBRACKET  value {printJUMPtype(10);} {printJUMPtype(11);} CLOSEDBRACKET SEMICOLON {printJUMPtype(12);} {printf("do-while loop\n");}
	;

/* For statement */

for_statement:
	FOR {forCounter++;}  OPENBRACKET for_initialization {printJUMPtype(16);} value{ 
		} {printJUMPtype(14);} {printJUMPtype(15);} SEMICOLON {printJUMPtype(13);} for_expression CLOSEDBRACKET statement {printJUMPtype(17);} {printJUMPtype(18);} {printf("for loop\n");}
	;

for_initialization:
          assignment_statement
		| var_declaration
    	| value SEMICOLON
    	| SEMICOLON
        ;

for_expression:
         IDENTIFIER EQUAL value SEMICOLON
		 {
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",$1,yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = $3.intval;
				char* valuesstring = $3.valueinstring;
				Modify_Value($1, valuesstring,scopevar);
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = $3.floatval;
				char* valuesstring = $3.valueinstring;
				Modify_Value($1, valuesstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		 }
        | IDENTIFIER PLUS_EQ expression
		{
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",$1,yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = getintvalue($1,scopevar) + $3.intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = getfloatvalue($1,scopevar) + $3.floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
		| IDENTIFIER MINUS_EQ expression
		{
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",$1,yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = getintvalue($1,scopevar) - $3.intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = getfloatvalue($1,scopevar) - $3.floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
		| IDENTIFIER MULT_EQ expression
		{
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",$1,yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = getintvalue($1,scopevar) * $3.intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = getfloatvalue($1,scopevar) * $3.floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
		| IDENTIFIER DIV_EQ expression
		{
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope($1, scopeno) == 0){
				if (checkidentifiername($1)==1){
					ptr =getsymbolAndScope($1, scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",$1,yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope($1, scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized($1) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable($1) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype($1) == INTTYPE || getsymboltype($1) == CONSTINTTYPE){
				int value = getintvalue($1,scopevar) / $3.intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else if (getsymboltype($1) == FLOATTYPE || getsymboltype($1) == CONSTFLOATTYPE){
				float value = getfloatvalue($1,scopevar) / $3.floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value($1, valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
        | value
        |
        ;

/* Switch statement */

switch_statement:
SWITCH {switchCounter++;} {printVM("switchBegin",-1);}  OPENBRACKET   value    CLOSEDBRACKET  OPENCURL{scopeno++;}  case_list  CLOSEDCURL{endscope(scopeno); scopeno--;}  {printVM("ENDSwitch",switchCounter);} {printf("switch case\n");}
    ;

case_list:
    case_list  case_statement 
    | case_statement 
    ;

case_statement:
     CASE   {if (caseCounter!=0) printVM("pop",-1); } value {printVM("EQ",-1); } COLON {  { printVM("JumpFalse endCase:", caseCounter);}     printVM("case:", caseCounter++);  } statements  {if(checkBreak) {printJUMPtype(19);} if(!checkBreak){printVM("Jump Case:", caseCounter);} checkBreak=false ;   printVM("endCase",caseCounter-1); }
    | DEFAULT COLON  {printVM("default_case:",-1);}statements
    ;


/* Break or Continue */

break_statement: BREAK SEMICOLON {checkBreak=true; printf("Break statement\n");};
continue_statement: CONTINUE SEMICOLON {printf("Continue statement\n");};

%%


void printPushValue( char* x ){
		FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "PUSH \t%s\n", x);
		fclose(VMcode);
	}
void printBoolenOp( int x ){
	FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		switch(x)
		{
			case 1:
				fprintf(VMcode, "EQUAL\n");
				break;
			case 2:
				fprintf(VMcode, "NOTEQUAL\n");
				break;
			case 3:
				fprintf(VMcode, "GREATERTOREQUAL\n");
				break;	
			case 4:
				fprintf(VMcode, "LESSOREQUAL\n");
				break;
			case 5:
				fprintf(VMcode, "GREATERTHAN\n");
				break;
			case 6:
				fprintf(VMcode, "LESSTHAN\n");
				break;
			case 7:
				fprintf(VMcode, "AND\n");
				break;
			case 8:
				fprintf(VMcode, "OR\n");
				break;
			case 9:
				fprintf(VMcode, "NOT\n");
				break;
			case 10:
				fprintf(VMcode, "TRUE\n");
				break;
			case 11:
				fprintf(VMcode, "FALSE\n");
				break;
																	
		}
		fclose(VMcode);
}
void printPushOp( int x ){
		FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		switch(x)
		{
			case 1:
				fprintf(VMcode, "ADD\n");
				break;
			case 2:
				fprintf(VMcode, "MNIUS\n");
				break;
			case 3:
				fprintf(VMcode, "MUTI\n");
				break;	
			case 4:
				fprintf(VMcode, "DIV\n");
				break;		
		}

		fclose(VMcode);
	}
void printJUMPtype( int x ){
	FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		switch(x)
		{
			case 1:
				fprintf(VMcode, "JumpFalse ELSE_%d\n",Ifcounter);
				break;
			case 2:
				fprintf(VMcode, "ENDIF_%d:\n",Ifcounter);
				break;
			case 3:
				fprintf(VMcode, "JumpFalse ENDELSIF_%d\n",Ifcounter);
				break;
			case 4:
				fprintf(VMcode, "ENDELSIF_%d:\n",Ifcounter);
				break;	
			case 5:
				fprintf(VMcode, "BEGINWHILE_ %d\n",whileCounter);
				break;
			case 6:
				fprintf(VMcode, "ENDWHILE_%d\n",whileCounter);
				break;
			case 7:
				fprintf(VMcode, "JumpFalse ENDWHILE_%d\n",whileCounter);
				break;
			case 8:
				fprintf(VMcode, "JumpTrue BEGINWHILE_%d\n",whileCounter);
				break;
			case 9:
				fprintf(VMcode, "BEGINDOWHILE_%d\n",doWhileCounter);
				break;
			
			case 10:
				fprintf(VMcode, "JumpFalse ENDDoWHILE_%d\n",doWhileCounter);
				break;
			case 11:
				fprintf(VMcode, "JumpTrue BEGINDOWHILE_%d\n",doWhileCounter);
				break;

			case 12:
				fprintf(VMcode, "ENDDoWHILE_%d\n",doWhileCounter);
				break;
			case 13:
				fprintf(VMcode, "BEGINFOR_%d\n",forCounter);
				break;
			
			case 14:
				fprintf(VMcode, "JumpFalse ENDFOR_%d\n",forCounter);
				break;
			case 15:	
				fprintf(VMcode, "JumpTrue BEGINFOR_%d\n",forCounter);
				break;
			case 16:
				fprintf(VMcode, "FORINIT_%d\n",forCounter);
				break;
			case 17:
				fprintf(VMcode, "Jump FORINIT_%d\n",forCounter);
				break;
			case 18:
				fprintf(VMcode, "ENDFOR_%d\n",forCounter);
				break;
			case 19:
				fprintf(VMcode, "Jump ENDSwitch%d\n",switchCounter);
				break;
			
		}

		fclose(VMcode);
}

void printVM(char * s,int num){
	FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		if(num != -1)
		fprintf(VMcode, "%s%d\n", s,num);
		else
		fprintf(VMcode, "%s\n", s);

		fclose(VMcode);
}
	void PrintIDentifierAdress( int y){
			FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "PUSHMEM \t%d\n", y);

		fclose(VMcode);
		}
		void PrintPopMem( int y){
			FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "POPMEM \t%d\n", y);

		fclose(VMcode);
	}

int main (void)
{

	yyin = fopen("instructions.txt", "r");
	if(yyin == NULL) {
		printf("can't open input.txt file!\n");
		exit(1);
	}
	//read the input file to parse it 
	yyparse();

	printSymbolTable();
    return 0;
}