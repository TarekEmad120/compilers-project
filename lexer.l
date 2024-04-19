%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void yyerror(char *s);
int yylex(void);
int line_num = 1;

%}

%%
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"for" {return FOR;}
"do" {return DO;}
"switch" {return SWITCH;}
"case" {return CASE;}
"default" {return DEFAULT;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"return" {return RETURN;}
"int" {return INT;}
"float" {return FLOAT;}
"char" {return CHAR;}
"string" {return STRING;}
"void" {return VOID;}
"main" {return MAIN;}
"printf" {return PRINTF;}
"scanf" {return SCANF;}
"{" {return LBRACE;}
"}" {return RBRACE;}
"(" {return LPAREN;}
")" {return RPAREN;}
"[" {return LBRACKET;}
"]" {return RBRACKET;}
";" {return SEMICOLON;}
":" {return COLON;}
"," {return COMMA;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MULT;}
"/" {return DIV;}
"%" {return MOD;}
"=" {return ASSIGN;}
"==" {return EQ;}
"!=" {return NE;}
"<" {return LT;}
"<=" {return LE;}
">" {return GT;}
">=" {return GE;}
"&&" {return AND;}
"||" {return OR;}
"!" {return NOT;}
"++" {return INC;}
"--" {return DEC;}
"+=" {return PLUSEQ;}
"-=" {return MINUSEQ;}
"*=" {return MULTEQ;}
"/=" {return DIVEQ;}
"#" {return HASH;}
"error" {return ERROR;}
"pragma" {return PRAGMA;}
"extern" {return EXTERN;}
"static" {return STATIC;}
"const" {return CONST;}
"volatile" {return VOLATILE;}
"register" {return REGISTER;}
"unsigned" {return UNSIGNED;}
"true" {return TRUE;}
"false" {return FALSE;}





[a-zA-Z_][a-zA-Z0-9_]* {yylval.sval = strdup(yytext); return IDENTIFIER;}
[0-9]+ {yylval.ival = atoi(yytext); return INT_CONST;}
[0-9]+\.[0-9]+ {yylval.fval = atof(yytext); return FLOAT_CONST;}

\".*\" {yylval.sval = strdup(yytext); return STRING_VAL}


\'[a-zA-Z0-9]\' {yylval.cval = yytext[1]; return CHAR_VAL;}


"//".* {return COMMENT;}
"/*".*"*/" {return COMMENT;}

"\n"  {line_num++;}
[ \t] {;}



%%
int yywrap(void)
{
    return 1;
}

void yyerror(char *s)
{
    fprintf(stderr, "%s at line %d\n", s, line_num);
}

