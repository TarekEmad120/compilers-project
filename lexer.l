%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#include "parser.tab.h"

#define INTTYPE 0
#define FLOATTYPE 1
#define CHARTYPE 2
#define BOOLTYPE 3
#define STRINGTYPE 4
#define CONSTINTTYPE 5
#define CONSTFLOATTYPE 6
#define CONSTCHARTYPE 7
void yyerror (char *s);
int yylex();
%}

%%

        /* Comments */
"//".*                                    { /* consume //-comment */ }
"/*".*?"*/"                               { /* consume /*-comment */ }


        /* Constant */
"const"                         return CONST;
"extern"                        return EXTERN;

        /* Mathematical Expressions */
"+"                             return PLUS;
"-"                             return MINUS;
"*"                             return MULT;
"/"                             return DIV;
"+="                            return PLUS_EQ;
"-="                            return MINUS_EQ;
"*="                            return MULT_EQ;
"/="                            return DIV_EQ;
"++"                            return INC;
"--"                            return DEC;
   
        /* Comparison Op */
"<"				return LT;
">"				return GT;
">="                            return GE;
"<="                            return LE;
"=="                            return EQ_EQ;
"!="                            return NE;

        /* Logical Expressions */
"&&"                            return AND;
"||"                            return OR;
"!"                             return NOT;

        /* Assignment Operator */
"="				return EQUAL;


        /* Brackets */
"("                             return OPENBRACKET;
")"                             return CLOSEDBRACKET;
"{"                             return OPENCURL;
"}"                             return CLOSEDCURL;


        /* Types */
"int"                         {  
								yylval.var_type = INTTYPE;
								return INT;}
"float"                         {
								yylval.var_type = FLOATTYPE;
								return FLOAT;}
"char"                          {
								yylval.var_type = CHARTYPE;
								return CHAR;}
"bool"                          {
								yylval.var_type = BOOLTYPE;
								return BOOL;}
"string"                        {
								yylval.var_type = STRINGTYPE;
								return STRING;}


        /* if then else statement */
"if"                            return IF;
"else if"                       return ELSEIF;
"else"                          return ELSE;

        /* While & do-while statement */
"while"                         return WHILE;
"do"                            return DO;
"for"                           return FOR;
"switch"                        return SWITCH;
"case"                          return CASE;
"default"                       return DEFAULT;
"break"                         return BREAK;
"continue"                      return CONTINUE;

        /* Functions */
"void"                          return VOID; 
"return"                        return RETURN;  
","                             return COMMA;
":"                             return COLON;


        /* Stop Characters */
"\n"                            {yylineno += 1;}
[\t\r ]+                        {;}
";"                             return SEMICOLON;

        /* Identifier and Numbers */
"true"                          {
								yylval.lexicalstruct.type = BOOLTYPE;
								yylval.lexicalstruct.boolval = true;
								yylval.lexicalstruct.valueinstring= strdup("true");
									return TRUE_VAL;}
"false"                         {
								yylval.lexicalstruct.type = BOOLTYPE;
								yylval.lexicalstruct.boolval = false;
								yylval.lexicalstruct.valueinstring= strdup("false");
								return FALSE_VAL;}
[a-zA-Z_][a-zA-Z0-9_]*          {
								yylval.name= strdup(yytext);
								return IDENTIFIER;}

['][a-zA-Z0-9][']              {
								yylval.lexicalstruct.type = CHARTYPE;
								yylval.lexicalstruct.charval = yytext[1];
								yylval.lexicalstruct.valueinstring= strdup(yytext);
								return CHAR_VAL;}
[0-9]+                         { 
								yylval.lexicalstruct.type = INTTYPE;
								yylval.lexicalstruct.intval = atoi(yytext);
								yylval.lexicalstruct.valueinstring= strdup(yytext);
								return INT_NUM;}
[0-9]+\.[0-9]+                  {
								yylval.lexicalstruct.type = FLOATTYPE;
								yylval.lexicalstruct.floatval = atof(yytext);
								yylval.lexicalstruct.valueinstring= strdup(yytext);
								return FLOAT_VAL;}

\"[^\"]*\"                      {
								yylval.lexicalstruct.type = STRINGTYPE;
								yylval.lexicalstruct.stringval = strdup(yytext);
								yylval.lexicalstruct.valueinstring= strdup(yytext);

								return STRING_VAL;}

%%


int yywrap(void)
{
   return 1;
}

/* This is called by our parser whenever there is a syntactical error. In other words something that does not suit the grammar. */
void yyerror (char *s) {
    fprintf(stderr, "\n ERROR LINE %d :\n %s \n", yylineno, s);
    exit(0);
} 