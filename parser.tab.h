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
    EQ = 259,                      /* EQ  */
    GT = 260,                      /* GT  */
    LT = 261,                      /* LT  */
    GE = 262,                      /* GE  */
    LE = 263,                      /* LE  */
    NE = 264,                      /* NE  */
    PLUSEQ = 265,                  /* PLUSEQ  */
    MINUSEQ = 266,                 /* MINUSEQ  */
    MULTEQ = 267,                  /* MULTEQ  */
    DIVEQ = 268,                   /* DIVEQ  */
    INC = 269,                     /* INC  */
    DEC = 270,                     /* DEC  */
    ASSIGN = 271,                  /* ASSIGN  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    WHILE = 274,                   /* WHILE  */
    FOR = 275,                     /* FOR  */
    DO = 276,                      /* DO  */
    SWITCH = 277,                  /* SWITCH  */
    CASE = 278,                    /* CASE  */
    DEFAULT = 279,                 /* DEFAULT  */
    BREAK = 280,                   /* BREAK  */
    CONTINUE = 281,                /* CONTINUE  */
    RETURN = 282,                  /* RETURN  */
    INT = 283,                     /* INT  */
    FLOAT = 284,                   /* FLOAT  */
    CHAR = 285,                    /* CHAR  */
    STRING = 286,                  /* STRING  */
    VOID = 287,                    /* VOID  */
    MAIN = 288,                    /* MAIN  */
    PRINTF = 289,                  /* PRINTF  */
    SCANF = 290,                   /* SCANF  */
    LBRACE = 291,                  /* LBRACE  */
    RBRACE = 292,                  /* RBRACE  */
    LPAREN = 293,                  /* LPAREN  */
    RPAREN = 294,                  /* RPAREN  */
    SEMICOLON = 295,               /* SEMICOLON  */
    COLON = 296,                   /* COLON  */
    COMMA = 297,                   /* COMMA  */
    HASH = 298,                    /* HASH  */
    ERROR = 299,                   /* ERROR  */
    PRAGMA = 300,                  /* PRAGMA  */
    EXTERN = 301,                  /* EXTERN  */
    STATIC = 302,                  /* STATIC  */
    CONST = 303,                   /* CONST  */
    VOLATILE = 304,                /* VOLATILE  */
    REGISTER = 305,                /* REGISTER  */
    UNSIGNED = 306,                /* UNSIGNED  */
    TRUE = 307,                    /* TRUE  */
    FALSE = 308,                   /* FALSE  */
    INT_CONST = 309,               /* INT_CONST  */
    FLOAT_CONST = 310,             /* FLOAT_CONST  */
    STRING_VAL = 311,              /* STRING_VAL  */
    CHAR_VAL = 312,                /* CHAR_VAL  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
