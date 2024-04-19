%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern FILE *yyin;
    extern int yylex();
    extern int yylineno;
    extern void yyerror(char *s);
%}
%token IDENTIFIER
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK CONTINUE RETURN INT FLOAT CHAR STRING VOID MAIN PRINTF SCANF LBRACE RBRACE LPAREN RPAREN SEMICOLON COLON COMMA HASH ERROR PRAGMA EXTERN STATIC CONST VOLATILE REGISTER UNSIGNED TRUE FALSE ID INT_CONST FLOAT_CONST STRING_VAL CHAR_VAL COMMENT LBRACKET RBRACKET
%nonassoc OR NOT AND
%left PLUS MINUS MULT DIV MOD

%type INT  FLOAT  CHAR  STRING  VOID

%start statement
%%
program :
    declaration_list
    ;
declaration_list:
                  declaration_list  declaration
                | declaration
                ;
declaration:
                  variable_declaration
                | function_declaration
                ;

variable_declaration:
                      type_specifier  variable_declaration_list
                      ;

scoped_variable_declaration:
                                STATIC type_specifier  scoped_variable_declaration_list SEMICOLON
                              | type_specifier  scoped_variable_declaration_list SEMICOLON
                              | CONST type_specifier  scoped_variable_declaration_list SEMICOLON
                              | VOLATILE type_specifier  scoped_variable_declaration_list SEMICOLON
                              | REGISTER type_specifier  scoped_variable_declaration_list SEMICOLON
                              | EXTERN type_specifier  scoped_variable_declaration_list SEMICOLON
                              ;

variable_declaration_list:
                            variable_declaration_list  COMMA  variable_declaration_value
                          | variable_declaration_value
                          ;

variable_declaration_value:
                            variable_declaration_id |variable_declaration_id COLON simple_expression
                            ;

variable_declaration_id:
                            IDENTIFIER
                            | IDENTIFIER LBRACKET INT_CONST RBRACKET
                            ;






//FUNCTION DECLATION IN C LANGUAGE
/*
10. funDecl → typeSpec IDENTIFIER ( parms ) stmt | IDENTIFIER ( parms ) stmt
11. parms → parmList | 
12. parmList → parmList ; parmTypeList | parmTypeList
13. parmTypeList → typeSpec parmIdList
2
14. parmIdList → parmIdList , parmId | parmId
15. parmId → IDENTIFIER | IDENTIFIER [ ]
*/
/* function_prototype:
type  IDENTIFIER LPAREN parameter_list RPAREN statement
| IDENTIFIER LPAREN parameter_list RPAREN statement
| VOID IDENTIFIER LPAREN parameter_list RPAREN statement
| IDENTIFIER LPAREN parameter_list RPAREN statement
;

parameter_list:
parameter_list SEMICOLON parameter_type_list
| parameter_type_list
;

parameter_type_list:
type parameter_id_list
;

parameter_id_list:
parameter_id_list COMMA parameter_id
| parameter_id
;

parameter_id:
IDENTIFIER
| IDENTIFIER LBRACKET RBRACKET
;

//FUNCTION DEFINATION IN C LANGUAGE */

%%