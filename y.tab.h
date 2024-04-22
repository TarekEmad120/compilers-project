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
    C_CONSTANT = 263,              /* C_CONSTANT  */
    EXTERN = 264,                  /* EXTERN  */
    STATIC = 265,                  /* STATIC  */
    CONST = 266,                   /* CONST  */
    VOLATILE = 267,                /* VOLATILE  */
    BOOL = 268,                    /* BOOL  */
    SHORT = 269,                   /* SHORT  */
    INT = 270,                     /* INT  */
    LONG = 271,                    /* LONG  */
    FLOAT = 272,                   /* FLOAT  */
    VOID = 273,                    /* VOID  */
    CHAR = 274,                    /* CHAR  */
    CASE = 275,                    /* CASE  */
    DEFAULT = 276,                 /* DEFAULT  */
    IF = 277,                      /* IF  */
    ELSE = 278,                    /* ELSE  */
    SWITCH = 279,                  /* SWITCH  */
    WHILE = 280,                   /* WHILE  */
    DO = 281,                      /* DO  */
    FOR = 282,                     /* FOR  */
    CONTINUE = 283,                /* CONTINUE  */
    BREAK = 284,                   /* BREAK  */
    RETURN = 285,                  /* RETURN  */
    INC_OP = 286,                  /* INC_OP  */
    DEC_OP = 287,                  /* DEC_OP  */
    LEFT_OP = 288,                 /* LEFT_OP  */
    RIGHT_OP = 289,                /* RIGHT_OP  */
    LE_OP = 290,                   /* LE_OP  */
    GE_OP = 291,                   /* GE_OP  */
    EQ_OP = 292,                   /* EQ_OP  */
    NE_OP = 293,                   /* NE_OP  */
    AND_OP = 294,                  /* AND_OP  */
    OR_OP = 295,                   /* OR_OP  */
    MUL_ASSIGN = 296,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 297,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 298,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 299,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 300,              /* SUB_ASSIGN  */
    AND_ASSIGN = 301,              /* AND_ASSIGN  */
    XOR_ASSIGN = 302,              /* XOR_ASSIGN  */
    OR_ASSIGN = 303                /* OR_ASSIGN  */
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
#define C_CONSTANT 263
#define EXTERN 264
#define STATIC 265
#define CONST 266
#define VOLATILE 267
#define BOOL 268
#define SHORT 269
#define INT 270
#define LONG 271
#define FLOAT 272
#define VOID 273
#define CHAR 274
#define CASE 275
#define DEFAULT 276
#define IF 277
#define ELSE 278
#define SWITCH 279
#define WHILE 280
#define DO 281
#define FOR 282
#define CONTINUE 283
#define BREAK 284
#define RETURN 285
#define INC_OP 286
#define DEC_OP 287
#define LEFT_OP 288
#define RIGHT_OP 289
#define LE_OP 290
#define GE_OP 291
#define EQ_OP 292
#define NE_OP 293
#define AND_OP 294
#define OR_OP 295
#define MUL_ASSIGN 296
#define DIV_ASSIGN 297
#define MOD_ASSIGN 298
#define ADD_ASSIGN 299
#define SUB_ASSIGN 300
#define AND_ASSIGN 301
#define XOR_ASSIGN 302
#define OR_ASSIGN 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
