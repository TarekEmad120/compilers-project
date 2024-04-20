/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    // extern FILE *yyin;
    // extern int yylex();
    // extern int yylineno;
    void yyerror(char *);
    int yylex(void);

#line 83 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    EQ = 262,                      /* EQ  */
    GT = 263,                      /* GT  */
    LT = 264,                      /* LT  */
    GE = 265,                      /* GE  */
    LE = 266,                      /* LE  */
    NE = 267,                      /* NE  */
    PLUSEQ = 268,                  /* PLUSEQ  */
    MINUSEQ = 269,                 /* MINUSEQ  */
    MULTEQ = 270,                  /* MULTEQ  */
    DIVEQ = 271,                   /* DIVEQ  */
    INC = 272,                     /* INC  */
    DEC = 273,                     /* DEC  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
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
    MINOP = 319,                   /* MINOP  */
    MAXOP = 320,                   /* MAXOP  */
    PLUS = 321,                    /* PLUS  */
    MINUS = 322,                   /* MINUS  */
    MULT = 323,                    /* MULT  */
    DIV = 324,                     /* DIV  */
    MOD = 325                      /* MOD  */
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
#define EQ 262
#define GT 263
#define LT 264
#define GE 265
#define LE 266
#define NE 267
#define PLUSEQ 268
#define MINUSEQ 269
#define MULTEQ 270
#define DIVEQ 271
#define INC 272
#define DEC 273
#define IDENTIFIER 274
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
#define MINOP 319
#define MAXOP 320
#define PLUS 321
#define MINUS 322
#define MULT 323
#define DIV 324
#define MOD 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

    float fval;
    int ival;
    char cval;
    char *sval;

#line 283 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_CONST = 3,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 4,                /* FLOAT_CONST  */
  YYSYMBOL_CHAR_VAL = 5,                   /* CHAR_VAL  */
  YYSYMBOL_STRING_VAL = 6,                 /* STRING_VAL  */
  YYSYMBOL_EQ = 7,                         /* EQ  */
  YYSYMBOL_GT = 8,                         /* GT  */
  YYSYMBOL_LT = 9,                         /* LT  */
  YYSYMBOL_GE = 10,                        /* GE  */
  YYSYMBOL_LE = 11,                        /* LE  */
  YYSYMBOL_NE = 12,                        /* NE  */
  YYSYMBOL_PLUSEQ = 13,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 14,                   /* MINUSEQ  */
  YYSYMBOL_MULTEQ = 15,                    /* MULTEQ  */
  YYSYMBOL_DIVEQ = 16,                     /* DIVEQ  */
  YYSYMBOL_INC = 17,                       /* INC  */
  YYSYMBOL_DEC = 18,                       /* DEC  */
  YYSYMBOL_IDENTIFIER = 19,                /* IDENTIFIER  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_DEFAULT = 28,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_FLOAT = 33,                     /* FLOAT  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_STRING = 35,                    /* STRING  */
  YYSYMBOL_VOID = 36,                      /* VOID  */
  YYSYMBOL_MAIN = 37,                      /* MAIN  */
  YYSYMBOL_PRINTF = 38,                    /* PRINTF  */
  YYSYMBOL_SCANF = 39,                     /* SCANF  */
  YYSYMBOL_LBRACE = 40,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 41,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 42,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 43,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 44,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 45,                     /* COLON  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_HASH = 47,                      /* HASH  */
  YYSYMBOL_ERROR = 48,                     /* ERROR  */
  YYSYMBOL_PRAGMA = 49,                    /* PRAGMA  */
  YYSYMBOL_EXTERN = 50,                    /* EXTERN  */
  YYSYMBOL_STATIC = 51,                    /* STATIC  */
  YYSYMBOL_CONST = 52,                     /* CONST  */
  YYSYMBOL_VOLATILE = 53,                  /* VOLATILE  */
  YYSYMBOL_REGISTER = 54,                  /* REGISTER  */
  YYSYMBOL_UNSIGNED = 55,                  /* UNSIGNED  */
  YYSYMBOL_TRUE = 56,                      /* TRUE  */
  YYSYMBOL_FALSE = 57,                     /* FALSE  */
  YYSYMBOL_COMMENT = 58,                   /* COMMENT  */
  YYSYMBOL_LBRACKET = 59,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 60,                  /* RBRACKET  */
  YYSYMBOL_OR = 61,                        /* OR  */
  YYSYMBOL_NOT = 62,                       /* NOT  */
  YYSYMBOL_AND = 63,                       /* AND  */
  YYSYMBOL_MINOP = 64,                     /* MINOP  */
  YYSYMBOL_MAXOP = 65,                     /* MAXOP  */
  YYSYMBOL_PLUS = 66,                      /* PLUS  */
  YYSYMBOL_MINUS = 67,                     /* MINUS  */
  YYSYMBOL_MULT = 68,                      /* MULT  */
  YYSYMBOL_DIV = 69,                       /* DIV  */
  YYSYMBOL_MOD = 70,                       /* MOD  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_declaration_list = 73,          /* declaration_list  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_variable_declaration = 75,      /* variable_declaration  */
  YYSYMBOL_scoped_variable_declaration = 76, /* scoped_variable_declaration  */
  YYSYMBOL_variable_declaration_list = 77, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_value = 78, /* variable_declaration_value  */
  YYSYMBOL_variable_declaration_id = 79,   /* variable_declaration_id  */
  YYSYMBOL_type_specifier = 80,            /* type_specifier  */
  YYSYMBOL_function_declaration = 81,      /* function_declaration  */
  YYSYMBOL_parameters = 82,                /* parameters  */
  YYSYMBOL_parameter_list = 83,            /* parameter_list  */
  YYSYMBOL_parameter_type_list = 84,       /* parameter_type_list  */
  YYSYMBOL_parameter_id_list = 85,         /* parameter_id_list  */
  YYSYMBOL_parameter_id = 86,              /* parameter_id  */
  YYSYMBOL_statement = 87,                 /* statement  */
  YYSYMBOL_expression_statement = 88,      /* expression_statement  */
  YYSYMBOL_compound_statement = 89,        /* compound_statement  */
  YYSYMBOL_local_declarations = 90,        /* local_declarations  */
  YYSYMBOL_statement_list = 91,            /* statement_list  */
  YYSYMBOL_selection_statement = 92,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 93,       /* iteration_statement  */
  YYSYMBOL_return_statement = 94,          /* return_statement  */
  YYSYMBOL_break_statement = 95,           /* break_statement  */
  YYSYMBOL_continue_statement = 96,        /* continue_statement  */
  YYSYMBOL_expression = 97,                /* expression  */
  YYSYMBOL_simple_expression = 98,         /* simple_expression  */
  YYSYMBOL_and_expression = 99,            /* and_expression  */
  YYSYMBOL_unary_relational_expression = 100, /* unary_relational_expression  */
  YYSYMBOL_relational_expression = 101,    /* relational_expression  */
  YYSYMBOL_minmaxEXP = 102,                /* minmaxEXP  */
  YYSYMBOL_minmaxlop = 103,                /* minmaxlop  */
  YYSYMBOL_relop = 104,                    /* relop  */
  YYSYMBOL_sumExp = 105,                   /* sumExp  */
  YYSYMBOL_sumOp = 106,                    /* sumOp  */
  YYSYMBOL_mulExp = 107,                   /* mulExp  */
  YYSYMBOL_mulOP = 108,                    /* mulOP  */
  YYSYMBOL_unary_Exp = 109,                /* unary_Exp  */
  YYSYMBOL_unary_op = 110,                 /* unary_op  */
  YYSYMBOL_factor = 111,                   /* factor  */
  YYSYMBOL_mu_table = 112,                 /* mu_table  */
  YYSYMBOL_immu_table = 113,               /* immu_table  */
  YYSYMBOL_call = 114,                     /* call  */
  YYSYMBOL_args = 115,                     /* args  */
  YYSYMBOL_arg_list = 116,                 /* arg_list  */
  YYSYMBOL_constant = 117                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   303

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    42,    43,    47,    48,    52,    53,    58,
      59,    60,    61,    62,    66,    67,    72,    73,    77,    78,
      82,    83,    84,    85,    89,    90,   100,   101,   106,   107,
     111,   115,   116,   120,   121,   125,   126,   127,   128,   129,
     130,   131,   135,   136,   140,   144,   145,   149,   150,   154,
     155,   161,   162,   163,   167,   168,   172,   176,   180,   181,
     182,   183,   184,   185,   186,   187,   191,   192,   196,   197,
     201,   202,   206,   207,   210,   211,   214,   215,   218,   219,
     220,   221,   222,   223,   227,   228,   232,   233,   237,   238,
     242,   243,   244,   247,   248,   251,   252,   255,   256,   260,
     261,   266,   267,   268,   271,   274,   275,   278,   279,   282,
     283,   284,   285
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONST",
  "FLOAT_CONST", "CHAR_VAL", "STRING_VAL", "EQ", "GT", "LT", "GE", "LE",
  "NE", "PLUSEQ", "MINUSEQ", "MULTEQ", "DIVEQ", "INC", "DEC", "IDENTIFIER",
  "ASSIGN", "IF", "ELSE", "WHILE", "FOR", "DO", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "CONTINUE", "RETURN", "INT", "FLOAT", "CHAR",
  "STRING", "VOID", "MAIN", "PRINTF", "SCANF", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "SEMICOLON", "COLON", "COMMA", "HASH", "ERROR",
  "PRAGMA", "EXTERN", "STATIC", "CONST", "VOLATILE", "REGISTER",
  "UNSIGNED", "TRUE", "FALSE", "COMMENT", "LBRACKET", "RBRACKET", "OR",
  "NOT", "AND", "MINOP", "MAXOP", "PLUS", "MINUS", "MULT", "DIV", "MOD",
  "$accept", "program", "declaration_list", "declaration",
  "variable_declaration", "scoped_variable_declaration",
  "variable_declaration_list", "variable_declaration_value",
  "variable_declaration_id", "type_specifier", "function_declaration",
  "parameters", "parameter_list", "parameter_type_list",
  "parameter_id_list", "parameter_id", "statement", "expression_statement",
  "compound_statement", "local_declarations", "statement_list",
  "selection_statement", "iteration_statement", "return_statement",
  "break_statement", "continue_statement", "expression",
  "simple_expression", "and_expression", "unary_relational_expression",
  "relational_expression", "minmaxEXP", "minmaxlop", "relop", "sumExp",
  "sumOp", "mulExp", "mulOP", "unary_Exp", "unary_op", "factor",
  "mu_table", "immu_table", "call", "args", "arg_list", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     223,   -30,  -110,  -110,  -110,  -110,    66,    18,   223,  -110,
    -110,    31,  -110,    66,    33,  -110,  -110,   -40,   -29,  -110,
      39,    58,    -7,  -110,    34,   -24,    66,    89,  -110,    33,
     235,    35,  -110,  -110,   185,    66,  -110,    60,    57,    44,
    -110,  -110,  -110,  -110,  -110,   -35,   235,   235,  -110,  -110,
      51,    42,  -110,  -110,    46,   -37,     6,  -110,    28,  -110,
    -110,  -110,  -110,  -110,    53,   235,   235,    72,   185,    73,
      76,   216,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,    77,    51,    47,  -110,   185,  -110,   235,   235,
      80,  -110,   235,   235,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,    28,    28,  -110,  -110,    28,  -110,  -110,  -110,
      28,  -110,  -110,   103,   103,   227,   107,  -110,  -110,  -110,
      87,   234,  -110,   235,   235,   235,   235,  -110,  -110,   235,
    -110,  -110,    92,    90,    79,  -110,    42,  -110,   -37,   -23,
       6,     6,   115,  -110,   227,   235,  -110,    66,    66,    66,
      66,  -110,    33,   156,  -110,  -110,  -110,  -110,  -110,  -110,
     235,  -110,   185,   235,   -33,    33,    33,    33,    33,   -21,
    -110,  -110,  -110,  -110,    97,  -110,    22,    25,    41,    45,
    -110,   185,  -110,  -110,  -110,  -110,  -110
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    20,    21,    22,    23,     0,     0,     2,     4,
       6,     0,     5,     0,     0,     1,     3,    18,     0,    15,
      16,     0,     0,    29,    18,     0,    27,     0,     7,     0,
       0,    33,    30,    32,     0,     0,     8,     0,    26,     0,
      14,   109,   110,   112,   111,    99,     0,     0,    96,    95,
      17,    67,    69,    71,    73,    75,    85,    89,     0,    94,
      98,    97,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    43,    25,    35,    36,    37,    38,    39,
      40,    41,     0,    65,    98,    28,     0,    19,   106,     0,
       0,    70,     0,     0,    78,    80,    81,    82,    83,    79,
      76,    77,     0,     0,    86,    87,     0,    90,    91,    92,
       0,    93,    34,     0,     0,     0,     0,    56,    57,    54,
       0,    48,    42,     0,     0,     0,     0,    63,    64,     0,
      24,   108,     0,   105,     0,   101,    66,    68,    74,    72,
      84,    88,    49,    51,     0,     0,    55,     0,     0,     0,
       0,    45,     0,     0,    59,    60,    61,    62,    58,   104,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    47,   107,    50,     0,    52,     0,     0,     0,     0,
      10,     0,     9,    11,    12,    13,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,   133,  -110,  -110,   -14,   113,  -110,     8,
    -110,  -110,   118,   111,  -110,  -110,   -65,  -109,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   -45,   -26,    56,   -42,
    -110,    63,  -110,  -110,    48,  -110,   -97,  -110,    91,  -110,
    -110,   -20,  -110,  -110,  -110,  -110,  -110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,     9,    10,   151,    18,    19,    20,    21,
      12,    37,    22,    23,    32,    33,    74,    75,    76,   121,
     153,    77,    78,    79,    80,    81,    82,    83,    51,    52,
      53,    54,   102,   103,    55,   106,    56,   110,    57,    58,
      59,    84,    61,    62,   132,   133,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      25,    90,    26,   116,    50,    91,   144,    88,    11,   140,
      60,   175,    13,   141,    14,    28,    11,    29,    15,    27,
      36,   130,    29,   180,    89,    29,   120,    60,    92,   104,
     105,    41,    42,    43,    44,   163,    34,    35,    60,   113,
     114,   100,   101,   131,   134,    60,    60,    45,   142,   143,
      17,   137,    24,    94,    95,    96,    97,    98,    99,    30,
     123,   124,   125,   126,   127,   128,   182,   129,    29,   183,
      46,    29,    60,    60,   107,   108,   109,    31,   154,   155,
     156,   157,    60,    60,   158,   184,    60,    29,   171,   185,
      60,    29,    39,    27,    64,    48,    49,   173,     2,     3,
       4,    35,     5,    86,    87,    93,    41,    42,    43,    44,
     100,   101,    92,   112,   115,   172,   186,   117,   174,   164,
     118,   122,    45,   135,    65,    60,    66,    67,    68,   152,
     145,   146,    69,    70,    71,   159,   160,   162,   169,   161,
     181,    16,    40,    72,    38,    46,    85,    73,   136,   111,
     138,   176,   177,   178,   179,   165,   166,   167,   168,    41,
      42,    43,    44,     0,    92,    47,   139,     0,     0,     0,
      48,    49,     0,     0,     0,    45,     0,    65,     0,    66,
      67,    68,     0,     0,     0,    69,    70,    71,    41,    42,
      43,    44,     0,     0,     0,     0,    72,   170,    46,     0,
      73,     0,     0,     0,    45,     0,    65,     0,    66,    67,
      68,     0,     0,     0,    69,    70,    71,     0,    47,    41,
      42,    43,    44,    48,    49,    72,     0,    46,     0,    73,
      41,    42,    43,    44,     0,    45,     0,     0,    41,    42,
      43,    44,     1,     0,     0,     0,    45,    47,     0,     0,
       0,     0,    48,    49,    45,     2,     3,     4,    46,     5,
     119,     0,     0,     0,     0,     0,     2,     3,     4,    46,
       5,    73,     0,     6,     0,     0,     0,    46,    47,     0,
       0,     0,     0,    48,    49,   147,   148,   149,   150,    47,
       0,     0,     0,     0,    48,    49,     0,    47,     0,     0,
       0,     0,    48,    49
};

static const yytype_int16 yycheck[] =
{
      14,    46,    42,    68,    30,    47,   115,    42,     0,   106,
      30,    44,    42,   110,     6,    44,     8,    46,     0,    59,
      44,    86,    46,    44,    59,    46,    71,    47,    61,    66,
      67,     3,     4,     5,     6,   144,    43,    44,    58,    65,
      66,    64,    65,    88,    89,    65,    66,    19,   113,   114,
      19,    93,    19,     7,     8,     9,    10,    11,    12,    20,
      13,    14,    15,    16,    17,    18,    44,    20,    46,    44,
      42,    46,    92,    93,    68,    69,    70,    19,   123,   124,
     125,   126,   102,   103,   129,    44,   106,    46,   153,    44,
     110,    46,     3,    59,    59,    67,    68,   162,    32,    33,
      34,    44,    36,    43,    60,    63,     3,     4,     5,     6,
      64,    65,    61,    60,    42,   160,   181,    44,   163,   145,
      44,    44,    19,    43,    21,   145,    23,    24,    25,   121,
      23,    44,    29,    30,    31,    43,    46,    22,   152,    60,
      43,     8,    29,    40,    26,    42,    35,    44,    92,    58,
     102,   165,   166,   167,   168,   147,   148,   149,   150,     3,
       4,     5,     6,    -1,    61,    62,   103,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      44,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    30,    31,    -1,    62,     3,
       4,     5,     6,    67,    68,    40,    -1,    42,    -1,    44,
       3,     4,     5,     6,    -1,    19,    -1,    -1,     3,     4,
       5,     6,    19,    -1,    -1,    -1,    19,    62,    -1,    -1,
      -1,    -1,    67,    68,    19,    32,    33,    34,    42,    36,
      44,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    42,
      36,    44,    -1,    50,    -1,    -1,    -1,    42,    62,    -1,
      -1,    -1,    -1,    67,    68,    51,    52,    53,    54,    62,
      -1,    -1,    -1,    -1,    67,    68,    -1,    62,    -1,    -1,
      -1,    -1,    67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    32,    33,    34,    36,    50,    72,    73,    74,
      75,    80,    81,    42,    80,     0,    74,    19,    77,    78,
      79,    80,    83,    84,    19,    77,    42,    59,    44,    46,
      20,    19,    85,    86,    43,    44,    44,    82,    83,     3,
      78,     3,     4,     5,     6,    19,    42,    62,    67,    68,
      98,    99,   100,   101,   102,   105,   107,   109,   110,   111,
     112,   113,   114,   117,    59,    21,    23,    24,    25,    29,
      30,    31,    40,    44,    87,    88,    89,    92,    93,    94,
      95,    96,    97,    98,   112,    84,    43,    60,    42,    59,
      97,   100,    61,    63,     7,     8,     9,    10,    11,    12,
      64,    65,   103,   104,    66,    67,   106,    68,    69,    70,
     108,   109,    60,    98,    98,    42,    87,    44,    44,    44,
      97,    90,    44,    13,    14,    15,    16,    17,    18,    20,
      87,    97,   115,   116,    97,    43,    99,   100,   105,   102,
     107,   107,    87,    87,    88,    23,    44,    51,    52,    53,
      54,    76,    80,    91,    97,    97,    97,    97,    97,    43,
      46,    60,    22,    88,    98,    80,    80,    80,    80,    77,
      41,    87,    97,    87,    97,    44,    77,    77,    77,    77,
      44,    43,    44,    44,    44,    44,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    93,    94,    94,    95,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   114,   115,   115,   116,   116,   117,
     117,   117,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     4,     4,
       3,     4,     4,     4,     3,     1,     1,     3,     1,     4,
       1,     1,     1,     1,     6,     5,     1,     0,     3,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     4,     2,     0,     2,     0,     3,
       5,     3,     5,     7,     2,     3,     2,     2,     3,     3,
       3,     3,     3,     2,     2,     1,     3,     1,     3,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       4,     3,     1,     1,     4,     1,     0,     3,     1,     1,
       1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declaration_list  */
#line 39 "parser.y"
                    {printf("program\n");}
#line 1548 "y.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 42 "parser.y"
                                               {printf("declaration_list\n");}
#line 1554 "y.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 43 "parser.y"
                              {printf("declaration\n");}
#line 1560 "y.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 47 "parser.y"
                                     {printf("function_declaration\n");}
#line 1566 "y.tab.c"
    break;

  case 6: /* declaration: variable_declaration  */
#line 48 "parser.y"
                                      {printf("variable_declaration\n");}
#line 1572 "y.tab.c"
    break;

  case 7: /* variable_declaration: type_specifier variable_declaration_list SEMICOLON  */
#line 52 "parser.y"
                                                                          {printf("variable_declaration2\n");}
#line 1578 "y.tab.c"
    break;

  case 10: /* scoped_variable_declaration: type_specifier variable_declaration_list SEMICOLON  */
#line 59 "parser.y"
                                                                                    {printf("scoped_variable_declaration\n");}
#line 1584 "y.tab.c"
    break;

  case 14: /* variable_declaration_list: variable_declaration_list COMMA variable_declaration_value  */
#line 66 "parser.y"
                                                                                         {printf(" variable_declaration_list  COMMA  variable_declaration_value\n");}
#line 1590 "y.tab.c"
    break;

  case 15: /* variable_declaration_list: variable_declaration_value  */
#line 67 "parser.y"
                                                      {printf("variable_declaration_value\n");}
#line 1596 "y.tab.c"
    break;

  case 16: /* variable_declaration_value: variable_declaration_id  */
#line 72 "parser.y"
                                                       {printf("variable_declaration_id \n");}
#line 1602 "y.tab.c"
    break;

  case 17: /* variable_declaration_value: variable_declaration_id ASSIGN simple_expression  */
#line 73 "parser.y"
                                                                                {printf("variable_declaration_id ASSIGN simple_expression\n");}
#line 1608 "y.tab.c"
    break;

  case 18: /* variable_declaration_id: IDENTIFIER  */
#line 77 "parser.y"
                                       {printf("identifier\n");}
#line 1614 "y.tab.c"
    break;

  case 19: /* variable_declaration_id: IDENTIFIER LBRACKET INT_CONST RBRACKET  */
#line 78 "parser.y"
                                                                      {printf("IDENTIFIER LBRACKET INT_CONST RBRACKET\n");}
#line 1620 "y.tab.c"
    break;

  case 20: /* type_specifier: INT  */
#line 82 "parser.y"
                      {printf("int\n");}
#line 1626 "y.tab.c"
    break;

  case 21: /* type_specifier: FLOAT  */
#line 83 "parser.y"
                         {printf("FLOAT\n");}
#line 1632 "y.tab.c"
    break;

  case 22: /* type_specifier: CHAR  */
#line 84 "parser.y"
                         {printf("CHAR\n");}
#line 1638 "y.tab.c"
    break;

  case 23: /* type_specifier: VOID  */
#line 85 "parser.y"
                          {printf("VOID\n");}
#line 1644 "y.tab.c"
    break;

  case 24: /* function_declaration: type_specifier IDENTIFIER LPAREN parameters RPAREN statement  */
#line 89 "parser.y"
                                                                                        {printf("type_specifier  IDENTIFIER LPAREN parameters RPAREN statement\n");}
#line 1650 "y.tab.c"
    break;

  case 25: /* function_declaration: IDENTIFIER LPAREN parameter_list RPAREN statement  */
#line 90 "parser.y"
                                                                         {printf("IDENTIFIER LPAREN parameter_list RPAREN statement\n");}
#line 1656 "y.tab.c"
    break;

  case 26: /* parameters: parameter_list  */
#line 100 "parser.y"
                             {printf("NO PARAMETERS");}
#line 1662 "y.tab.c"
    break;

  case 28: /* parameter_list: parameter_list SEMICOLON parameter_type_list  */
#line 106 "parser.y"
                                                                 {printf("  parameter_list  COMMA  parameter_type_list\n");}
#line 1668 "y.tab.c"
    break;

  case 29: /* parameter_list: parameter_type_list  */
#line 107 "parser.y"
                                      {printf("  parameter_type_list\n");}
#line 1674 "y.tab.c"
    break;

  case 30: /* parameter_type_list: type_specifier parameter_id_list  */
#line 111 "parser.y"
                                                        {printf("type_specifier  parameter_id_list\n");}
#line 1680 "y.tab.c"
    break;

  case 32: /* parameter_id_list: parameter_id  */
#line 116 "parser.y"
                                 {printf("parameter_id\n");}
#line 1686 "y.tab.c"
    break;

  case 33: /* parameter_id: IDENTIFIER  */
#line 120 "parser.y"
                           {printf("IDENTIFIER\n");}
#line 1692 "y.tab.c"
    break;

  case 35: /* statement: expression_statement  */
#line 125 "parser.y"
                                    {printf("expression_statement\n");}
#line 1698 "y.tab.c"
    break;

  case 36: /* statement: compound_statement  */
#line 126 "parser.y"
                                    {printf("compound_statement\n");}
#line 1704 "y.tab.c"
    break;

  case 37: /* statement: selection_statement  */
#line 127 "parser.y"
                                    {printf("selection_statement\n");}
#line 1710 "y.tab.c"
    break;

  case 38: /* statement: iteration_statement  */
#line 128 "parser.y"
                                    {printf("iteration_statement\n");}
#line 1716 "y.tab.c"
    break;

  case 39: /* statement: return_statement  */
#line 129 "parser.y"
                                    {printf("return_statement\n");}
#line 1722 "y.tab.c"
    break;

  case 40: /* statement: break_statement  */
#line 130 "parser.y"
                                    {printf("break_statement\n");}
#line 1728 "y.tab.c"
    break;

  case 41: /* statement: continue_statement  */
#line 131 "parser.y"
                                    {printf("continue_statement\n");}
#line 1734 "y.tab.c"
    break;

  case 42: /* expression_statement: expression SEMICOLON  */
#line 135 "parser.y"
                                                {printf(" expression SEMICOLON \n");}
#line 1740 "y.tab.c"
    break;

  case 43: /* expression_statement: SEMICOLON  */
#line 136 "parser.y"
                                     {printf("SEMICOLON\n");}
#line 1746 "y.tab.c"
    break;

  case 44: /* compound_statement: LBRACE local_declarations statement_list RBRACE  */
#line 140 "parser.y"
                                                                          {printf("  LBRACE  local_declarations  statement_list  RBRACE\n");}
#line 1752 "y.tab.c"
    break;

  case 45: /* local_declarations: local_declarations scoped_variable_declaration  */
#line 144 "parser.y"
                                                                        {printf("local_declarations  scoped_variable_declaration \n");}
#line 1758 "y.tab.c"
    break;

  case 46: /* local_declarations: %empty  */
#line 145 "parser.y"
                                        {printf("/* empty local_declarations */ \n");}
#line 1764 "y.tab.c"
    break;

  case 47: /* statement_list: statement_list statement  */
#line 149 "parser.y"
                                              {printf("statement_list  statement \n");}
#line 1770 "y.tab.c"
    break;

  case 48: /* statement_list: %empty  */
#line 150 "parser.y"
                                        {printf("/* empty */  statement_list  \n");}
#line 1776 "y.tab.c"
    break;

  case 49: /* selection_statement: IF simple_expression statement  */
#line 154 "parser.y"
                                                            {printf(" IF simple_expression statement\n");}
#line 1782 "y.tab.c"
    break;

  case 50: /* selection_statement: IF simple_expression statement ELSE statement  */
#line 155 "parser.y"
                                                                         {printf("IF simple_expression statement ELSE statement\n");}
#line 1788 "y.tab.c"
    break;

  case 51: /* iteration_statement: WHILE simple_expression statement  */
#line 161 "parser.y"
                                                        {printf("WHILE expression statement\n");}
#line 1794 "y.tab.c"
    break;

  case 52: /* iteration_statement: DO statement WHILE simple_expression SEMICOLON  */
#line 162 "parser.y"
                                                                     {printf("DO statement WHILE expression SEMICOLON\n");}
#line 1800 "y.tab.c"
    break;

  case 53: /* iteration_statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 163 "parser.y"
                                                                                                       {printf("FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");}
#line 1806 "y.tab.c"
    break;

  case 54: /* return_statement: RETURN SEMICOLON  */
#line 167 "parser.y"
                                     {printf("RETURN SEMICOLON \n");}
#line 1812 "y.tab.c"
    break;

  case 55: /* return_statement: RETURN expression SEMICOLON  */
#line 168 "parser.y"
                                                {printf("RETURN expression SEMICOLON\n");}
#line 1818 "y.tab.c"
    break;

  case 56: /* break_statement: BREAK SEMICOLON  */
#line 172 "parser.y"
                                  {printf("BREAK SEMICOLON \n");}
#line 1824 "y.tab.c"
    break;

  case 57: /* continue_statement: CONTINUE SEMICOLON  */
#line 176 "parser.y"
                                         {printf("ONTINUE SEMICOLON\n");}
#line 1830 "y.tab.c"
    break;

  case 58: /* expression: mu_table ASSIGN expression  */
#line 180 "parser.y"
                                        {printf("mu_table ASSIGN expression\n");}
#line 1836 "y.tab.c"
    break;

  case 59: /* expression: mu_table PLUSEQ expression  */
#line 181 "parser.y"
                                          {printf("mu_table PLUSEQ expression\n");}
#line 1842 "y.tab.c"
    break;

  case 60: /* expression: mu_table MINUSEQ expression  */
#line 182 "parser.y"
                                           {printf("mu_table MINUSEQ expression \n");}
#line 1848 "y.tab.c"
    break;

  case 61: /* expression: mu_table MULTEQ expression  */
#line 183 "parser.y"
                                           {printf("mu_table MULTEQ expression \n");}
#line 1854 "y.tab.c"
    break;

  case 62: /* expression: mu_table DIVEQ expression  */
#line 184 "parser.y"
                                           {printf("mu_table DIVEQ expression   \n");}
#line 1860 "y.tab.c"
    break;

  case 63: /* expression: mu_table INC  */
#line 185 "parser.y"
                                       {printf("mu_table INC    \n");}
#line 1866 "y.tab.c"
    break;

  case 64: /* expression: mu_table DEC  */
#line 186 "parser.y"
                               {printf("mu_table DEC\n");}
#line 1872 "y.tab.c"
    break;

  case 65: /* expression: simple_expression  */
#line 187 "parser.y"
                                   {printf("simple_expression\n");}
#line 1878 "y.tab.c"
    break;

  case 66: /* simple_expression: simple_expression OR and_expression  */
#line 191 "parser.y"
                                                           {printf("simple_expression  OR  and_expression\n");}
#line 1884 "y.tab.c"
    break;

  case 67: /* simple_expression: and_expression  */
#line 192 "parser.y"
                                     {printf(" and_expression\n");}
#line 1890 "y.tab.c"
    break;

  case 68: /* and_expression: and_expression AND unary_relational_expression  */
#line 196 "parser.y"
                                                                    {printf(" and_expression  AND  unary_relational_expression\n");}
#line 1896 "y.tab.c"
    break;

  case 69: /* and_expression: unary_relational_expression  */
#line 197 "parser.y"
                                                {printf(" unary_relational_expression \n");}
#line 1902 "y.tab.c"
    break;

  case 70: /* unary_relational_expression: NOT unary_relational_expression  */
#line 201 "parser.y"
                                                                {printf(" NOT unary_relational_expression \n");}
#line 1908 "y.tab.c"
    break;

  case 71: /* unary_relational_expression: relational_expression  */
#line 202 "parser.y"
                                                        {printf(" relational_expression   \n");}
#line 1914 "y.tab.c"
    break;

  case 72: /* relational_expression: minmaxEXP relop minmaxEXP  */
#line 206 "parser.y"
                                                      {printf(" minmaxEXP  relop  minmaxEXP  \n");}
#line 1920 "y.tab.c"
    break;

  case 73: /* relational_expression: minmaxEXP  */
#line 207 "parser.y"
                                       {printf("  minmaxEXP  \n");}
#line 1926 "y.tab.c"
    break;

  case 74: /* minmaxEXP: minmaxEXP minmaxlop sumExp  */
#line 210 "parser.y"
                                        {printf("minmaxEXP minmaxlop sumExp \n");}
#line 1932 "y.tab.c"
    break;

  case 75: /* minmaxEXP: sumExp  */
#line 211 "parser.y"
                      {printf(" sumExp1 \n");}
#line 1938 "y.tab.c"
    break;

  case 76: /* minmaxlop: MINOP  */
#line 214 "parser.y"
                    {printf(" MINOP \n");}
#line 1944 "y.tab.c"
    break;

  case 77: /* minmaxlop: MAXOP  */
#line 215 "parser.y"
                     {printf(" MAXOP \n");}
#line 1950 "y.tab.c"
    break;

  case 78: /* relop: EQ  */
#line 218 "parser.y"
              {printf(" E55Q \n");}
#line 1956 "y.tab.c"
    break;

  case 79: /* relop: NE  */
#line 219 "parser.y"
             {printf(" NE \n");}
#line 1962 "y.tab.c"
    break;

  case 80: /* relop: GT  */
#line 220 "parser.y"
             {printf(" GT \n");}
#line 1968 "y.tab.c"
    break;

  case 81: /* relop: LT  */
#line 221 "parser.y"
             {printf(" LT \n");}
#line 1974 "y.tab.c"
    break;

  case 82: /* relop: GE  */
#line 222 "parser.y"
             {printf(" GE \n");}
#line 1980 "y.tab.c"
    break;

  case 83: /* relop: LE  */
#line 223 "parser.y"
             {printf(" LE \n");}
#line 1986 "y.tab.c"
    break;

  case 84: /* sumExp: sumExp sumOp mulExp  */
#line 227 "parser.y"
                                    {printf("sumExp  sumOp  mulExp \n");}
#line 1992 "y.tab.c"
    break;

  case 85: /* sumExp: mulExp  */
#line 228 "parser.y"
                        {printf("mulExp \n");}
#line 1998 "y.tab.c"
    break;

  case 86: /* sumOp: PLUS  */
#line 232 "parser.y"
              {printf(" PLUS \n");}
#line 2004 "y.tab.c"
    break;

  case 87: /* sumOp: MINUS  */
#line 233 "parser.y"
                {printf(" MINUS \n");}
#line 2010 "y.tab.c"
    break;

  case 88: /* mulExp: mulExp mulOP mulExp  */
#line 237 "parser.y"
                               {printf("  mulExp mulOP mulExp \n");}
#line 2016 "y.tab.c"
    break;

  case 89: /* mulExp: unary_Exp  */
#line 238 "parser.y"
                       {printf(" unary_Exp\n");}
#line 2022 "y.tab.c"
    break;

  case 90: /* mulOP: MULT  */
#line 242 "parser.y"
               {printf(" MULT\n");}
#line 2028 "y.tab.c"
    break;

  case 91: /* mulOP: DIV  */
#line 243 "parser.y"
                {printf(" DIV\n");}
#line 2034 "y.tab.c"
    break;

  case 92: /* mulOP: MOD  */
#line 244 "parser.y"
                {printf(" MOD\n");}
#line 2040 "y.tab.c"
    break;

  case 93: /* unary_Exp: unary_op unary_Exp  */
#line 247 "parser.y"
                               {printf("unary_op unary_Exp\n");}
#line 2046 "y.tab.c"
    break;

  case 94: /* unary_Exp: factor  */
#line 248 "parser.y"
                     {printf("factor\n");}
#line 2052 "y.tab.c"
    break;

  case 95: /* unary_op: MULT  */
#line 251 "parser.y"
              {printf("MULT\n");}
#line 2058 "y.tab.c"
    break;

  case 96: /* unary_op: MINUS  */
#line 252 "parser.y"
                  {printf("MINUS\n");}
#line 2064 "y.tab.c"
    break;

  case 97: /* factor: immu_table  */
#line 255 "parser.y"
                    {printf("immu_table\n");}
#line 2070 "y.tab.c"
    break;

  case 98: /* factor: mu_table  */
#line 256 "parser.y"
                  {printf("mu_table\n");}
#line 2076 "y.tab.c"
    break;

  case 99: /* mu_table: IDENTIFIER  */
#line 260 "parser.y"
                   {printf("identifier\n");}
#line 2082 "y.tab.c"
    break;

  case 100: /* mu_table: IDENTIFIER LBRACKET expression RBRACKET  */
#line 261 "parser.y"
                                                  {printf("identIDENTIFIER LBRACE expression RBRACEifier\n");}
#line 2088 "y.tab.c"
    break;

  case 101: /* immu_table: LPAREN expression RPAREN  */
#line 266 "parser.y"
                                     {printf(" LPAREN expression RPAREN\n");}
#line 2094 "y.tab.c"
    break;

  case 102: /* immu_table: call  */
#line 267 "parser.y"
                     {printf(" call\n");}
#line 2100 "y.tab.c"
    break;

  case 103: /* immu_table: constant  */
#line 268 "parser.y"
                       {printf(" constant\n");}
#line 2106 "y.tab.c"
    break;

  case 104: /* call: IDENTIFIER LPAREN args RPAREN  */
#line 271 "parser.y"
                                     {printf(" IDENTIFIER LPAREN args RPAREN\n");}
#line 2112 "y.tab.c"
    break;

  case 105: /* args: arg_list  */
#line 274 "parser.y"
                 {printf("arg_list\n");}
#line 2118 "y.tab.c"
    break;

  case 107: /* arg_list: arg_list COMMA expression  */
#line 278 "parser.y"
                                      {printf(" arg_list COMMA expression\n");}
#line 2124 "y.tab.c"
    break;

  case 108: /* arg_list: expression  */
#line 279 "parser.y"
                        {printf(" expression\n");}
#line 2130 "y.tab.c"
    break;

  case 109: /* constant: INT_CONST  */
#line 282 "parser.y"
                      {printf("   INT_CONST  \n");}
#line 2136 "y.tab.c"
    break;

  case 110: /* constant: FLOAT_CONST  */
#line 283 "parser.y"
                        {printf("   FLOAT_CONST  \n");}
#line 2142 "y.tab.c"
    break;

  case 111: /* constant: STRING_VAL  */
#line 284 "parser.y"
                        {printf("   STRING_VAL  \n");}
#line 2148 "y.tab.c"
    break;

  case 112: /* constant: CHAR_VAL  */
#line 285 "parser.y"
                     {printf("   CHAR_VAL  \n");}
#line 2154 "y.tab.c"
    break;


#line 2158 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 288 "parser.y"


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}
