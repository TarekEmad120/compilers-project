%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    // extern FILE *yyin;
    // extern int yylex();
    // extern int yylineno;
    void yyerror(char *);
    int yylex(void);
%}

%union {
    int ival;
    float fval;
    char cval;
    char *sval;
}

%token <ival> INT_CONST
%token <fval> FLOAT_CONST
%token <cval> CHAR_VAL
%token <sval> STRING_VAL
%token <sval> IDENTIFIER

/* %token IDENTIFIER */
%token EQ GT LT GE LE NE
%token PLUSEQ MINUSEQ MULTEQ DIVEQ INC DEC
%token ASSIGN
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK CONTINUE RETURN INT FLOAT CHAR STRING VOID MAIN PRINTF SCANF LBRACE RBRACE LPAREN RPAREN SEMICOLON COLON COMMA HASH ERROR PRAGMA EXTERN STATIC CONST VOLATILE REGISTER UNSIGNED TRUE FALSE COMMENT LBRACKET RBRACKET
%nonassoc OR NOT AND
%left PLUS MINUS MULT DIV MOD




%%
program :
    declaration_list{printf("program\n");}
    ;
declaration_list:
                  declaration_list  declaration{printf("declaration_list\n");}
                | declaration {printf("declaration\n");}
                ;
declaration:
                  variable_declaration{printf("variable_declaration\n");}
                | function_declaration
                ;

variable_declaration:
                      type_specifier  variable_declaration_list{printf("variable_declaration2\n");}
                      ;

scoped_variable_declaration:
                                STATIC type_specifier  variable_declaration_list SEMICOLON
                              | type_specifier  variable_declaration_list SEMICOLON {printf("scoped_variable_declaration\n");}
                              | CONST type_specifier  variable_declaration_list SEMICOLON
                              | VOLATILE type_specifier  variable_declaration_list SEMICOLON
                              | REGISTER type_specifier  variable_declaration_list SEMICOLON
                              | EXTERN type_specifier  variable_declaration_list SEMICOLON
                              ;

variable_declaration_list:
                            variable_declaration_list  COMMA  variable_declaration_value
                          | variable_declaration_value{printf("variable_declaration_value\n");}
                          ;

variable_declaration_value:
                            variable_declaration_id |variable_declaration_id COLON simple_expression
                            ;

variable_declaration_id:
                            IDENTIFIER {printf("identifier\n");}
                            | IDENTIFIER LBRACKET INT_CONST RBRACKET
                            ;

type_specifier:
                  INT {printf("int\n");}
                | FLOAT
                | CHAR
                | VOID
                ;

function_declaration:
                        type_specifier  IDENTIFIER LPAREN parameters RPAREN statement
                      | IDENTIFIER LPAREN parameter_list RPAREN statement
                      ;

// int add(int, int);
// int add(int a, int b);
// int add(int a, int b , int c , int d)
// int add(int a, b , c ,d)

parameters:
              parameter_list
            | /* empty */
            ;

parameter_list:     // int a, int b , int c , int d
                  parameter_list  COMMA  parameter_type_list
                | parameter_type_list
                ;

parameter_type_list:
                      type_specifier  parameter_id_list
                    ;

parameter_id_list:
                    parameter_id_list  COMMA  parameter_id  // int add(int a, b , c ,d)
                  | parameter_id
                  ;

parameter_id:
                IDENTIFIER {printf("parameter_id\n");}
              | IDENTIFIER LBRACKET RBRACKET
              ;

statement:
            expression_statement    
          | compound_statement
          | selection_statement
          | iteration_statement
          | return_statement
          | break_statement
          | continue_statement
          ;

expression_statement:
                         expression SEMICOLON
                      |  SEMICOLON
                      ;

compound_statement:
                      LBRACE  local_declarations  statement_list  RBRACE
                    ;

local_declarations:
                      local_declarations  scoped_variable_declaration
                      |  /* empty */
                      ;

statement_list:
                  statement_list  statement
                |  /* empty */
                ;

selection_statement:
                      IF expression statement
                    | IF expression statement ELSE statement
                    /* | SWITCH LPAREN expression RPAREN statement */
                    ;
// switch case is not implemented yet

iteration_statement:
                      WHILE expression statement
                    | DO statement WHILE expression SEMICOLON
                    | FOR LPAREN expression_statement expression_statement expression RPAREN statement
                    ;

return_statement:
                    RETURN SEMICOLON
                  | RETURN expression SEMICOLON
                  ;

break_statement:
                  BREAK SEMICOLON
                ;  

continue_statement:
                      CONTINUE SEMICOLON
                    ;

expression:
              mu_table ASSIGN expression{printf("expression\n");}
            | mu_table PLUSEQ expression
            | mu_table MINUSEQ expression
            | mu_table MULTEQ expression
            | mu_table DIVEQ expression
            | mu_table INC
            | mu_table DEC
            | simple_expression
            ;

simple_expression:
                    simple_expression  OR  and_expression
                  | and_expression
                  ;

and_expression:
                  and_expression  AND  unary_relational_expression
                | unary_relational_expression
                ;

unary_relational_expression:
                              NOT unary_relational_expression
                            | relational_expression
                            ;

relational_expression:
                        sumExp  relop  sumExp
                      | sumExp
                      ;

relop:
        EQ
      | NE
      | GT
      | LT
      | GE
      | LE
      ;

sumExp:
            sumExp  sumOp  mulExp
          | mulExp  
          ;

sumOp:
      PLUS
      | MINUS
      ;

mulExp:
        mulExp mulOP mulExp
        | unary_Exp
        ;

mulOP:
      MULT
      | DIV
      | MOD
      ;
unary_Exp:
          unary_op unary_Exp
          | factor
          ;
unary_op:
        MULT
        | MINUS
        ;
factor:
        immu_table 
        |mu_table
        ;

mu_table:
        IDENTIFIER {printf("identifier\n");}
        | IDENTIFIER LBRACE expression RBRACE
        ;

immu_table:
          LPAREN expression RPAREN
          | call
          | constant
          ;
call: 
    IDENTIFIER LPAREN args RPAREN
    ;
args:
      arg_list
      |
      ;
arg_list:
        arg_list COMMA expression 
        | expression
        ;            
constant:
        INT_CONST 
        | FLOAT_CONST
        | STRING_VAL
        | CHAR_VAL
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

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}