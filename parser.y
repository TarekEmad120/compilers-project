%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    // extern FILE *yyin;
    // extern int yylex();
    // extern int yylineno;
    void yyerror(char *);
    int yylex(void);
%}

%union {
    float fval;
    int ival;
    char cval;
    char *sval;
}

%token <ival> INT_CONST
%token <fval> FLOAT_CONST
%token <cval> CHAR_VAL
%token <sval> STRING_VAL


/* %token IDENTIFIER */
%token EQ GT LT GE LE NE
%token PLUSEQ MINUSEQ MULTEQ DIVEQ INC DEC IDENTIFIER
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
                  
                 function_declaration{printf("function_declaration\n");}
                | variable_declaration{printf("variable_declaration\n");}
                ;

variable_declaration:
                      type_specifier  variable_declaration_list{printf("variable_declaration2\n");}
                      | scoped_variable_declaration
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
                            variable_declaration_id |variable_declaration_id ASSIGN simple_expression 
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
                        type_specifier  IDENTIFIER  LPAREN parameters RPAREN  statement {printf("type_specifier  IDENTIFIER LPAREN parameters RPAREN statement\n");}
                      | IDENTIFIER LPAREN parameter_list RPAREN statement
                      ;

// int add(int, int);
// int add(int a, int b);
// int add(int a, int b , int c , int d)
// int add(int a, b , c ,d)

parameters:
              parameter_list {printf("NO PARAMETERS");}
            | /* NULL */
            ;

parameter_list:     // int a, int b , int c , int d
                  parameter_list  COMMA  parameter_type_list {printf("  parameter_list  COMMA  parameter_type_list\n");}
                | parameter_type_list {printf("  parameter_type_list\n");}
                ;

parameter_type_list:
                      type_specifier  parameter_id_list {printf("type_specifier  parameter_id_list\n");}
                    ;

parameter_id_list:
                    parameter_id_list // COMMA  parameter_id  // int add(int a, b , c ,d)
                  | parameter_id {printf("parameter_id\n");}
                  ;

parameter_id:
                IDENTIFIER {printf("IDENTIFIER\n");}
              | IDENTIFIER LBRACKET RBRACKET
              ;

statement:
            expression_statement    {printf("expression_statement\n");}
          | compound_statement      {printf("compound_statement\n");}
          | selection_statement     {printf("selection_statement\n");}
          | iteration_statement     {printf("iteration_statement\n");}
          | return_statement        {printf("return_statement\n");}
          | break_statement         {printf("break_statement\n");}
          | continue_statement      {printf("continue_statement\n");}
          ;

expression_statement:
                         expression SEMICOLON   {printf(" expression SEMICOLON \n");}
                      |  SEMICOLON   {printf("SEMICOLON\n");}
                      ;

compound_statement:
                      LBRACE  local_declarations  statement_list  RBRACE  {printf("  LBRACE  local_declarations  statement_list  RBRACE\n");}
                    ;

local_declarations:
                      local_declarations  scoped_variable_declaration   {printf("local_declarations  scoped_variable_declaration \n");}
                      |  /* empty */    {printf("/* empty */ ");}
                      ;

statement_list:
                  statement_list  statement   {printf("statement_list  statement");}
                |  /* empty */          {printf("/* empty */   \n");}
                ;

selection_statement:
                      IF expression statement   {printf(" IF expression statement\n");}
                    | IF expression statement ELSE statement  {printf("IF expression statement ELSE statement\n");}
                    /* | SWITCH LPAREN expression RPAREN statement */  
                    ;
// switch case is not implemented yet

iteration_statement:
                      WHILE expression statement {printf("WHILE expression statement\n");}
                    | DO statement WHILE expression SEMICOLON {printf("DO statement WHILE expression SEMICOLON\n");}
                    | FOR LPAREN expression_statement expression_statement expression RPAREN statement {printf("FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");}
                    ;

return_statement:
                    RETURN SEMICOLON {printf("RETURN SEMICOLON \n");}
                  | RETURN expression SEMICOLON {printf("RETURN expression SEMICOLON\n");}
                  ;

break_statement:
                  BREAK SEMICOLON {printf("BREAK SEMICOLON \n");}
                ;  

continue_statement:
                      CONTINUE SEMICOLON {printf("ONTINUE SEMICOLON\n");}
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

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}