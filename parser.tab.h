/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INT_NUM = 259,                 /* INT_NUM  */
    FLOAT_VAL = 260,               /* FLOAT_VAL  */
    STRING_VAL = 261,              /* STRING_VAL  */
    TRUE_VAL = 262,                /* TRUE_VAL  */
    FALSE_VAL = 263,               /* FALSE_VAL  */
    CHAR_VAL = 264,                /* CHAR_VAL  */
    INT = 265,                     /* INT  */
    FLOAT = 266,                   /* FLOAT  */
    CHAR = 267,                    /* CHAR  */
    BOOL = 268,                    /* BOOL  */
    STRING = 269,                  /* STRING  */
    CONST = 270,                   /* CONST  */
    EXTERN = 271,                  /* EXTERN  */
    PLUS = 272,                    /* PLUS  */
    MINUS = 273,                   /* MINUS  */
    MULT = 274,                    /* MULT  */
    DIV = 275,                     /* DIV  */
    PLUS_EQ = 276,                 /* PLUS_EQ  */
    MINUS_EQ = 277,                /* MINUS_EQ  */
    MULT_EQ = 278,                 /* MULT_EQ  */
    DIV_EQ = 279,                  /* DIV_EQ  */
    INC = 280,                     /* INC  */
    DEC = 281,                     /* DEC  */
    LT = 282,                      /* LT  */
    GT = 283,                      /* GT  */
    GE = 284,                      /* GE  */
    LE = 285,                      /* LE  */
    EQ_EQ = 286,                   /* EQ_EQ  */
    NE = 287,                      /* NE  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    NOT = 290,                     /* NOT  */
    EQUAL = 291,                   /* EQUAL  */
    IF = 292,                      /* IF  */
    ELSEIF = 293,                  /* ELSEIF  */
    ELSE = 294,                    /* ELSE  */
    WHILE = 295,                   /* WHILE  */
    DO = 296,                      /* DO  */
    FOR = 297,                     /* FOR  */
    SWITCH = 298,                  /* SWITCH  */
    CASE = 299,                    /* CASE  */
    DEFAULT = 300,                 /* DEFAULT  */
    BREAK = 301,                   /* BREAK  */
    CONTINUE = 302,                /* CONTINUE  */
    VOID = 303,                    /* VOID  */
    RETURN = 304,                  /* RETURN  */
    COMMA = 305,                   /* COMMA  */
    COLON = 306,                   /* COLON  */
    OPENBRACKET = 307,             /* OPENBRACKET  */
    CLOSEDBRACKET = 308,           /* CLOSEDBRACKET  */
    OPENCURL = 309,                /* OPENCURL  */
    CLOSEDCURL = 310,              /* CLOSEDCURL  */
    SEMICOLON = 311                /* SEMICOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "parser.y"
//this is the union for the token value from the lexer
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

#line 135 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
