%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdbool.h>
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
	int argcount = 0;
	int funcargs[30];
%}
%union {//this is the union for the token value from the lexer
	char* name ;//identifier name 
	int var_type;//type
	struct lexical{
		int type ;//type value 
		// char* name2 ;// name
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
    | switch_statement
    | break_statement
    | continue_statement
	| function 	{printf("Function statement\n");}
	| function_call
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
	| RETURN return_value SEMICOLON         {printf("Return statement\n");}
    | SEMICOLON
	;

/* Values & Types*/

value: expression | STRING_VAL | CHAR_VAL;

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
        | IDENTIFIER PLUS_EQ expression SEMICOLON
		| IDENTIFIER MINUS_EQ expression SEMICOLON
		| IDENTIFIER MULT_EQ expression SEMICOLON
		| IDENTIFIER DIV_EQ expression SEMICOLON
        | IDENTIFIER EQUAL function_call
        ;

var_declaration:
          type IDENTIFIER EQUAL value SEMICOLON
		  {
			//here we check if the variable is already declared in the scope or not
			printf("identifier name %s\n", $2);
			if (chekidentifiernameandScopeoutofscope($2, scopeno) == 1){

				printf("variable is aleady declared\n");
			return 0;
			}
			int type = $1;// type of the variable
			char* name = $2;// name of the variable
			int value = $4.type;// value(type) of the variable
			char* valueinstring = $4.valueinstring; // value in string
			if (type != value){// if the type of the variable and the value type is not same then we return the error
				printf( "Type mismatch\n");
				return 0;
			}
			else{
				printf("iam here\n");
				//we create the symbol data and add it to the symbol table
			struct SymbolData *ptr = initalizesymboldata($1,name , valueinstring,scopeno,true ,true, true, false, 0, 0);
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}

		  }
        | type IDENTIFIER EQUAL function_call


        | type IDENTIFIER SEMICOLON{
			// same as above 
			if (chekidentifiernameandScopeoutofscope($2, scopeno) == 1){
				printf("variable is aleady declared\n");
				return 0;
			}
			int type = $1;
			char* name = $2;
			struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno, true,false, false, false, 0, 0);
			createnode(ptr, count++);
		}

constant_declaration: 	CONST type IDENTIFIER EQUAL value SEMICOLON  {printf("Constant declaration\n");
			// same as above
			if (chekidentifiernameandScopeoutofscope($3, scopeno) == 1){
				printf("variable is aleady declared\n");
				return 0;
			}
			int type = $2;

			char* name = $3;
			int value = $5.type;
			char* valueinstring = $5.valueinstring;
			if (type != value){
				printf( "Type mismatch\n");
				return 0;
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
				printf("Type mismatch for constant declation it can be only int , float , char \n");
				return 0;
			}
			//create the symbol data and add it to the symbol table
				struct SymbolData *ptr = initalizesymboldata(type,name , valueinstring,scopeno,true, true, false, false, 0, 0);
				createnode(ptr, count++);
				printf("count of node %d\n",countnodes());
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
function: 			function_prototype OPENCURL{scopeno++;} statement CLOSEDCURL{endscope(scopeno); scopeno--;} {printf("Function Definition\n");};

return_value: 			value | ;
/*it is not yet implemented Do you want to give it a try ?*/
function_prototype:
    type IDENTIFIER OPENBRACKET {
		//check if the function is already declared or not
		if (chekidentifiernameandScopeoutofscope($2, scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = $1;//type of the function
		char* name = $2;//name of the function
		argcount = 0;
		currentfunctionname = name;
		//create the symbol data and add it to the symbol table but it is not yet implemented
		struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno, false,false, false, true, argcount, 0);
		createnode(ptr, count++);

	} parameters CLOSEDBRACKET{
		currentfunctionname = "";
		argcount = 0;
	}
    | type IDENTIFIER OPENBRACKET{
		if (chekidentifiernameandScopeoutofscope($2, scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = $1;
		char* name = $2;
		currentfunctionname = name;
		argcount = 0;
		struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno, false,false, false, true, argcount, 0);
		createnode(ptr, count++);

	} CLOSEDBRACKET{ currentfunctionname = "";
		argcount = 0;
	}
    | VOID IDENTIFIER OPENBRACKET {
		if (chekidentifiernameandScopeoutofscope($2, scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = VOIDTYPE;
		char* name = $2;
		currentfunctionname = name;
		argcount = 0;
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0);
		createnode(ptr, count++);


	}
			parameters CLOSEDBRACKET{ currentfunctionname = ""; argcount = 0;}
    | VOID IDENTIFIER OPENBRACKET{
		if (chekidentifiernameandScopeoutofscope($2, scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = VOIDTYPE;
		char* name = $2;
		currentfunctionname = name;
		argcount = 0;
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0);
		createnode(ptr, count++);
	}
	 CLOSEDBRACKET{ currentfunctionname = ""; argcount = 0;}
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
								printf("variable is aleady declared\n");
								return 0;
							}
							int type = $1;
							char* name = $2;
							struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno+1, true,false, false, false, 0, 0);
							createnode(ptr, count++);
							funcargs[argcount] = type;
							argcount++;
						}
						| type IDENTIFIER EQUAL constant 
						{
							if (chekidentifiernameandScopeoutofscope($2, scopeno+1) == 1){
								printf("variable is aleady declared\n");
								return 0;
							}
							int type = $1;
							char* name = $2;
							int value = $4.type;
							char* valueinstring = $4.valueinstring;
							if (type != value){
								printf( "Type mismatch\n");
								return 0;
							}
							else{
								struct SymbolData *ptr = initalizesymboldata($1,name , valueinstring,scopeno+1, true,false, false, false, 0, 0);
								createnode(ptr, count++);
							}
						}
						;

function_call: 			IDENTIFIER OPENBRACKET call_parameters CLOSEDBRACKET SEMICOLON ;

call_parameters:		call_parameter |;

call_parameter:			call_parameter COMMA value | value ;


/* Expression */

expression:
        boolean_expression
        | arithmetic_expression
        ;

/*  Boolean Expressions */

boolean_expression:
        expression EQ_EQ arithmetic_expression
        | expression NE arithmetic_expression
        | expression GE arithmetic_expression
        | expression LE arithmetic_expression
        | expression GT arithmetic_expression
        | expression LT arithmetic_expression
        | expression AND arithmetic_expression
        | expression OR arithmetic_expression
        | NOT expression
        | TRUE_VAL
        | FALSE_VAL
		;

/*  Mathematical Expressions */

arithmetic_expression:
        binary_expression
        | unary_expression
        ;

unary_expression:
        IDENTIFIER INC
        | IDENTIFIER DEC
        ;

binary_expression:
        binary_expression PLUS term
        | binary_expression MINUS term
        | term
        ;

term:
        factor
        | term MULT factor
        | term DIV factor
        ;

factor:
        INT_NUM
        | FLOAT_VAL
        | IDENTIFIER
        | OPENBRACKET expression CLOSEDBRACKET
        ;


/* If statement */

if_statement:
        IF OPENBRACKET value CLOSEDBRACKET OPENCURL{scopeno++;} statements CLOSEDCURL{endscope(scopeno); scopeno--;} else_if_statement  {printf("If then statement\n");}
	;

else_if_statement:
    else_if_statement ELSEIF OPENBRACKET value CLOSEDBRACKET OPENCURL{scopeno++;} statements CLOSEDCURL { endscope(scopeno); scopeno--;}
	| ELSE OPENCURL{scopeno++;} statements CLOSEDCURL {endscope(scopeno); scopeno--;}
	|
    ;

/* While statement */

while_statement:
		WHILE OPENBRACKET value CLOSEDBRACKET statement   {printf("while loop\n");}
		;

/* Do while statement */

do_while_statement:
	DO statement WHILE OPENBRACKET value CLOSEDBRACKET SEMICOLON  {printf("do-while loop\n");}
	;

/* For statement */

for_statement:
	FOR OPENBRACKET for_initialization value SEMICOLON for_expression CLOSEDBRACKET statement {printf("for loop\n");}
	;

for_initialization:
          assignment_statement
		| var_declaration
    	| value SEMICOLON
    	| SEMICOLON
        ;

for_expression:
         IDENTIFIER EQUAL value SEMICOLON
        | IDENTIFIER PLUS_EQ expression
		| IDENTIFIER MINUS_EQ expression
		| IDENTIFIER MULT_EQ expression
		| IDENTIFIER DIV_EQ expression
        | value
        |
        ;

/* Switch statement */

switch_statement:
    SWITCH OPENBRACKET value CLOSEDBRACKET OPENCURL{scopeno++;} case_list CLOSEDCURL{endscope(scopeno); scopeno--;}{printf("switch case\n");}
    ;

case_list:
    case_list case_statement
    | case_statement
    ;

case_statement:
    CASE value COLON statements
    | DEFAULT COLON statements
    ;

/* Break or Continue */

break_statement: BREAK SEMICOLON {printf("Break statement\n");};
continue_statement: CONTINUE SEMICOLON {printf("Continue statement\n");};

%%

int main (void)
{
	yyparse(); 
	printSymbolTable();
    return 0;
}