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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    I_CONSTANT = 259,              /* I_CONSTANT  */
    F_CONSTANT = 260,              /* F_CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    FUNC_NAME = 262,               /* FUNC_NAME  */
    EXTERN = 263,                  /* EXTERN  */
    STATIC = 264,                  /* STATIC  */
    CONST = 265,                   /* CONST  */
    VOLATILE = 266,                /* VOLATILE  */
    BOOL = 267,                    /* BOOL  */
    SHORT = 268,                   /* SHORT  */
    INT = 269,                     /* INT  */
    LONG = 270,                    /* LONG  */
    FLOAT = 271,                   /* FLOAT  */
    VOID = 272,                    /* VOID  */
    CHAR = 273,                    /* CHAR  */
    CASE = 274,                    /* CASE  */
    DEFAULT = 275,                 /* DEFAULT  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    SWITCH = 278,                  /* SWITCH  */
    WHILE = 279,                   /* WHILE  */
    DO = 280,                      /* DO  */
    FOR = 281,                     /* FOR  */
    CONTINUE = 282,                /* CONTINUE  */
    BREAK = 283,                   /* BREAK  */
    RETURN = 284,                  /* RETURN  */
    INC_OP = 285,                  /* INC_OP  */
    DEC_OP = 286,                  /* DEC_OP  */
    LEFT_OP = 287,                 /* LEFT_OP  */
    RIGHT_OP = 288,                /* RIGHT_OP  */
    LE_OP = 289,                   /* LE_OP  */
    GE_OP = 290,                   /* GE_OP  */
    EQ_OP = 291,                   /* EQ_OP  */
    NE_OP = 292,                   /* NE_OP  */
    AND_OP = 293,                  /* AND_OP  */
    OR_OP = 294,                   /* OR_OP  */
    MUL_ASSIGN = 295,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 296,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 297,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 298,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 299,              /* SUB_ASSIGN  */
    AND_ASSIGN = 300,              /* AND_ASSIGN  */
    XOR_ASSIGN = 301,              /* XOR_ASSIGN  */
    OR_ASSIGN = 302                /* OR_ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define EXTERN 263
#define STATIC 264
#define CONST 265
#define VOLATILE 266
#define BOOL 267
#define SHORT 268
#define INT 269
#define LONG 270
#define FLOAT 271
#define VOID 272
#define CHAR 273
#define CASE 274
#define DEFAULT 275
#define IF 276
#define ELSE 277
#define SWITCH 278
#define WHILE 279
#define DO 280
#define FOR 281
#define CONTINUE 282
#define BREAK 283
#define RETURN 284
#define INC_OP 285
#define DEC_OP 286
#define LEFT_OP 287
#define RIGHT_OP 288
#define LE_OP 289
#define GE_OP 290
#define EQ_OP 291
#define NE_OP 292
#define AND_OP 293
#define OR_OP 294
#define MUL_ASSIGN 295
#define DIV_ASSIGN 296
#define MOD_ASSIGN 297
#define ADD_ASSIGN 298
#define SUB_ASSIGN 299
#define AND_ASSIGN 300
#define XOR_ASSIGN 301
#define OR_ASSIGN 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
