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
%}
%union {
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

        /* Enums */
%token ENUM

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

statements :
    statements statement
    | statement
    ;

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
	| function
	| function_call
	| OPENCURL {
		scopeno++;
		printf("Scope Opened\n");
	
	} statements CLOSEDCURL {
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
			printf("identifier name %s\n", $2);
			if (checkidentifiernameAndScope($2, scopeno) == 1){

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
				printf("iam here\n");
			struct SymbolData *ptr = initalizesymboldata($1,name , valueinstring,scopeno, true, true, false, 0, 0);
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}

		  }
        | type IDENTIFIER EQUAL function_call
        | type IDENTIFIER SEMICOLON{
			if (checkidentifiernameAndScope($2, scopeno) == 1){
				printf("variable is aleady declared\n");
				return 0;
			}
			int type = $1;
			char* name = $2;
			struct SymbolData *ptr = initalizesymboldata($1,name , "",scopeno, false, false, false, 0, 0);
			createnode(ptr, count++);
		}

constant_declaration: 	CONST type IDENTIFIER EQUAL value SEMICOLON  {printf("Constant declaration\n");
			if (checkidentifiernameAndScope($3, scopeno) == 1){
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

			else{
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
				struct SymbolData *ptr = initalizesymboldata(type,name , valueinstring,scopeno, true, false, false, 0, 0);
				createnode(ptr, count++);
				printf("count of node %d\n",countnodes());
			}
											};


extern_declartion:  EXTERN type IDENTIFIER SEMICOLON
					| EXTERN type IDENTIFIER EQUAL value SEMICOLON

/* Function Declaration */

function: 			function_prototype statement {printf("Function Definition\n");};

return_value: 			value | ;

function_prototype:
    type IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET
    | type IDENTIFIER OPENBRACKET CLOSEDBRACKET
    | VOID IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET
    | VOID IDENTIFIER OPENBRACKET CLOSEDBRACKET
    ;

parameters: 			parameters COMMA single_parameter | single_parameter ;

single_parameter: 		type IDENTIFIER | type IDENTIFIER EQUAL constant ;

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
        IF OPENBRACKET value CLOSEDBRACKET OPENCURL statements CLOSEDCURL else_if_statement  {printf("If then statement\n");}
        | IF OPENBRACKET value CLOSEDBRACKET OPENCURL statements CLOSEDCURL else_if_statement ELSE OPENCURL statements CLOSEDCURL {printf("If then else statement\n");}
	;

else_if_statement:
    else_if_statement ELSEIF OPENBRACKET value CLOSEDBRACKET OPENCURL statements CLOSEDCURL |
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
    SWITCH OPENBRACKET value CLOSEDBRACKET OPENCURL case_list CLOSEDCURL {printf("switch case\n");}
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