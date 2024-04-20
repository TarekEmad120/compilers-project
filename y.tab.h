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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT_CONST = 258,               /* INT_CONST  */
    FLOAT_CONST = 259,             /* FLOAT_CONST  */
    CHAR_VAL = 260,                /* CHAR_VAL  */
    STRING_VAL = 261,              /* STRING_VAL  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    EQ = 263,                      /* EQ  */
    GT = 264,                      /* GT  */
    LT = 265,                      /* LT  */
    GE = 266,                      /* GE  */
    LE = 267,                      /* LE  */
    NE = 268,                      /* NE  */
    PLUSEQ = 269,                  /* PLUSEQ  */
    MINUSEQ = 270,                 /* MINUSEQ  */
    MULTEQ = 271,                  /* MULTEQ  */
    DIVEQ = 272,                   /* DIVEQ  */
    INC = 273,                     /* INC  */
    DEC = 274,                     /* DEC  */
    ASSIGN = 275,                  /* ASSIGN  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    FOR = 279,                     /* FOR  */
    DO = 280,                      /* DO  */
    SWITCH = 281,                  /* SWITCH  */
    CASE = 282,                    /* CASE  */
    DEFAULT = 283,                 /* DEFAULT  */
    BREAK = 284,                   /* BREAK  */
    CONTINUE = 285,                /* CONTINUE  */
    RETURN = 286,                  /* RETURN  */
    INT = 287,                     /* INT  */
    FLOAT = 288,                   /* FLOAT  */
    CHAR = 289,                    /* CHAR  */
    STRING = 290,                  /* STRING  */
    VOID = 291,                    /* VOID  */
    MAIN = 292,                    /* MAIN  */
    PRINTF = 293,                  /* PRINTF  */
    SCANF = 294,                   /* SCANF  */
    LBRACE = 295,                  /* LBRACE  */
    RBRACE = 296,                  /* RBRACE  */
    LPAREN = 297,                  /* LPAREN  */
    RPAREN = 298,                  /* RPAREN  */
    SEMICOLON = 299,               /* SEMICOLON  */
    COLON = 300,                   /* COLON  */
    COMMA = 301,                   /* COMMA  */
    HASH = 302,                    /* HASH  */
    ERROR = 303,                   /* ERROR  */
    PRAGMA = 304,                  /* PRAGMA  */
    EXTERN = 305,                  /* EXTERN  */
    STATIC = 306,                  /* STATIC  */
    CONST = 307,                   /* CONST  */
    VOLATILE = 308,                /* VOLATILE  */
    REGISTER = 309,                /* REGISTER  */
    UNSIGNED = 310,                /* UNSIGNED  */
    TRUE = 311,                    /* TRUE  */
    FALSE = 312,                   /* FALSE  */
    COMMENT = 313,                 /* COMMENT  */
    LBRACKET = 314,                /* LBRACKET  */
    RBRACKET = 315,                /* RBRACKET  */
    OR = 316,                      /* OR  */
    NOT = 317,                     /* NOT  */
    AND = 318,                     /* AND  */
    PLUS = 319,                    /* PLUS  */
    MINUS = 320,                   /* MINUS  */
    MULT = 321,                    /* MULT  */
    DIV = 322,                     /* DIV  */
    MOD = 323                      /* MOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_CONST 258
#define FLOAT_CONST 259
#define CHAR_VAL 260
#define STRING_VAL 261
#define IDENTIFIER 262
#define EQ 263
#define GT 264
#define LT 265
#define GE 266
#define LE 267
#define NE 268
#define PLUSEQ 269
#define MINUSEQ 270
#define MULTEQ 271
#define DIVEQ 272
#define INC 273
#define DEC 274
#define ASSIGN 275
#define IF 276
#define ELSE 277
#define WHILE 278
#define FOR 279
#define DO 280
#define SWITCH 281
#define CASE 282
#define DEFAULT 283
#define BREAK 284
#define CONTINUE 285
#define RETURN 286
#define INT 287
#define FLOAT 288
#define CHAR 289
#define STRING 290
#define VOID 291
#define MAIN 292
#define PRINTF 293
#define SCANF 294
#define LBRACE 295
#define RBRACE 296
#define LPAREN 297
#define RPAREN 298
#define SEMICOLON 299
#define COLON 300
#define COMMA 301
#define HASH 302
#define ERROR 303
#define PRAGMA 304
#define EXTERN 305
#define STATIC 306
#define CONST 307
#define VOLATILE 308
#define REGISTER 309
#define UNSIGNED 310
#define TRUE 311
#define FALSE 312
#define COMMENT 313
#define LBRACKET 314
#define RBRACKET 315
#define OR 316
#define NOT 317
#define AND 318
#define PLUS 319
#define MINUS 320
#define MULT 321
#define DIV 322
#define MOD 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

    int ival;
    float fval;
    char cval;
    char *sval;

#line 210 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
