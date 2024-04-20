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
%nonassoc OR NOT AND MINOP MAXOP 
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
                      type_specifier  variable_declaration_list SEMICOLON {printf("variable_declaration2\n");}
                      | EXTERN type_specifier  variable_declaration_list SEMICOLON
                      //| scoped_variable_declaration
                      ;

scoped_variable_declaration:
                                STATIC type_specifier  variable_declaration_list SEMICOLON
                              | type_specifier  variable_declaration_list SEMICOLON {printf("scoped_variable_declaration\n");}
                              | CONST type_specifier  variable_declaration_list SEMICOLON
                              | VOLATILE type_specifier  variable_declaration_list SEMICOLON
                              | REGISTER type_specifier  variable_declaration_list SEMICOLON
                              ;

variable_declaration_list:
                            variable_declaration_list  COMMA  variable_declaration_value {printf(" variable_declaration_list  COMMA  variable_declaration_value\n");}
                          | variable_declaration_value{printf("variable_declaration_value\n");}
                          ;

variable_declaration_value:
                            //should be COLON
                            variable_declaration_id    {printf("variable_declaration_id \n");}
                            |variable_declaration_id ASSIGN simple_expression   {printf("variable_declaration_id ASSIGN simple_expression\n");}
                            ;

variable_declaration_id:
                            IDENTIFIER {printf("identifier\n");}
                            | IDENTIFIER LBRACKET INT_CONST RBRACKET  {printf("IDENTIFIER LBRACKET INT_CONST RBRACKET\n");}
                            ;

type_specifier:
                  INT {printf("int\n");}
                | FLOAT  {printf("FLOAT\n");}
                | CHAR   {printf("CHAR\n");}
                | VOID    {printf("VOID\n");}
                ;

function_declaration:
                        type_specifier  IDENTIFIER  LPAREN parameters RPAREN  statement {printf("type_specifier  IDENTIFIER LPAREN parameters RPAREN statement\n");}
                      | IDENTIFIER LPAREN parameter_list RPAREN statement{printf("IDENTIFIER LPAREN parameter_list RPAREN statement\n");}
                      ;

// int add(int, int);
// int add(int a, int b);
// int add(int a, int b , int c , int d)
// int ant(int bat, cat[]; bool dog, elk; int fox; char gnu)


parameters:
              parameter_list {printf("NO PARAMETERS");}
            | /* NULL */
            ;

parameter_list: // int a, int b , int c , int d
                // should  comma
                  parameter_list  SEMICOLON  parameter_type_list {printf("  parameter_list  COMMA  parameter_type_list\n");}
                | parameter_type_list {printf("  parameter_type_list\n");}
                ;

parameter_type_list:
                      type_specifier  parameter_id_list {printf("type_specifier  parameter_id_list\n");}
                    ;
// COMMA  parameter_id  // int add(int a, b , c ,d)
parameter_id_list:
                    parameter_id_list 
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
                      |  /* empty */    {printf("/* empty local_declarations */ \n");}
                      ;

statement_list:
                  statement_list  statement   {printf("statement_list  statement \n");}
                |  /* empty */          {printf("/* empty */  statement_list  \n");}
                ;

selection_statement:
                      IF    simple_expression   statement   {printf(" IF simple_expression statement\n");}
                    | IF   simple_expression   statement ELSE statement  {printf("IF simple_expression statement ELSE statement\n");}
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
              mu_table ASSIGN expression{printf("mu_table ASSIGN expression\n");}
            | mu_table PLUSEQ expression  {printf("mu_table PLUSEQ expression\n");}
            | mu_table MINUSEQ expression  {printf("mu_table MINUSEQ expression \n");}
            | mu_table MULTEQ expression   {printf("mu_table MULTEQ expression \n");}
            | mu_table DIVEQ expression    {printf("mu_table DIVEQ expression   \n");}
            | mu_table INC             {printf("mu_table INC    \n");}
            | mu_table DEC     {printf("mu_table DEC\n");}
            | simple_expression    {printf("simple_expression\n");}
            ;

simple_expression:
                    simple_expression  OR  and_expression  {printf("simple_expression  OR  and_expression\n");}
                  | and_expression   {printf(" and_expression\n");}
                  ;

and_expression:
                  and_expression  AND  unary_relational_expression  {printf(" and_expression  AND  unary_relational_expression\n");}
                | unary_relational_expression   {printf(" unary_relational_expression \n");}
                ;

unary_relational_expression:
                              NOT unary_relational_expression   {printf(" NOT unary_relational_expression \n");}
                            | relational_expression     {printf(" relational_expression   \n");}
                            ;

relational_expression:
                        minmaxEXP  relop  minmaxEXP   {printf(" minmaxEXP  relop  minmaxEXP  \n");}
                      | minmaxEXP      {printf("  minmaxEXP  \n");}
                      ;
minmaxEXP:
          minmaxEXP minmaxlop sumExp    {printf("minmaxEXP minmaxlop sumExp \n");}
          | sumExp    {printf(" sumExp1 \n");}
          ; 
minmaxlop:
          MINOP     {printf(" MINOP \n");}
          | MAXOP    {printf(" MAXOP \n");}
          ;
relop:
        EQ    {printf(" E55Q \n");}
      | NE   {printf(" NE \n");}
      | GT   {printf(" GT \n");}
      | LT   {printf(" LT \n");}
      | GE   {printf(" GE \n");}
      | LE   {printf(" LE \n");}
      ;

sumExp:
            sumExp  sumOp  mulExp   {printf("sumExp  sumOp  mulExp \n");}
          | mulExp      {printf("mulExp \n");}
          ;

sumOp:
      PLUS    {printf(" PLUS \n");}
      | MINUS   {printf(" MINUS \n");}
      ;

mulExp:
        mulExp mulOP mulExp    {printf("  mulExp mulOP mulExp \n");}
        | unary_Exp    {printf(" unary_Exp\n");}
        ;

mulOP:
      MULT     {printf(" MULT\n");}
      | DIV     {printf(" DIV\n");}
      | MOD     {printf(" MOD\n");}
      ;
unary_Exp:
          unary_op unary_Exp   {printf("unary_op unary_Exp\n");}
          | factor   {printf("factor\n");}
          ;
unary_op:
        MULT  {printf("MULT\n");}
        | MINUS   {printf("MINUS\n");}
        ;
factor:
        immu_table  {printf("immu_table\n");}
        |mu_table {printf("mu_table\n");}
        ;

mu_table:
        IDENTIFIER {printf("identifier\n");}
        | IDENTIFIER LBRACKET expression RBRACKET {printf("identIDENTIFIER LBRACE expression RBRACEifier\n");}

        ;

immu_table:
          LPAREN expression RPAREN   {printf(" LPAREN expression RPAREN\n");}
          | call     {printf(" call\n");}
          | constant   {printf(" constant\n");}
          ;
call: 
    IDENTIFIER LPAREN args RPAREN    {printf(" IDENTIFIER LPAREN args RPAREN\n");}
    ;
args:
      arg_list   {printf("arg_list\n");}
      |
      ;
arg_list:
        arg_list COMMA expression     {printf(" arg_list COMMA expression\n");}
        | expression    {printf(" expression\n");}
        ;            
constant:
        INT_CONST     {printf("   INT_CONST  \n");}
        | FLOAT_CONST   {printf("   FLOAT_CONST  \n");}
        | STRING_VAL    {printf("   STRING_VAL  \n");}
        | CHAR_VAL   {printf("   CHAR_VAL  \n");}
        ;

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}