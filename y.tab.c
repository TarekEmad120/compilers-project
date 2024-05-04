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
#line 1 "parser2.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    // extern FILE *yyin;
    // extern int yylex();
    // extern int yylineno;
    void yyerror(char *);
    int yylex(void);
	extern char* yytext;

#line 84 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_I_CONSTANT = 4,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 5,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 7,                  /* FUNC_NAME  */
  YYSYMBOL_C_CONSTANT = 8,                 /* C_CONSTANT  */
  YYSYMBOL_EXTERN = 9,                     /* EXTERN  */
  YYSYMBOL_STATIC = 10,                    /* STATIC  */
  YYSYMBOL_CONST = 11,                     /* CONST  */
  YYSYMBOL_VOLATILE = 12,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 13,                      /* BOOL  */
  YYSYMBOL_SHORT = 14,                     /* SHORT  */
  YYSYMBOL_INT = 15,                       /* INT  */
  YYSYMBOL_LONG = 16,                      /* LONG  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_CHAR = 19,                      /* CHAR  */
  YYSYMBOL_CASE = 20,                      /* CASE  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_DO = 26,                        /* DO  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_INC_OP = 31,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 32,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 33,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 34,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 35,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 36,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 37,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 38,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 39,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 40,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 41,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 42,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 43,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 44,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 45,                /* SUB_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 46,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 47,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 48,                 /* OR_ASSIGN  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_54_ = 54,                       /* '{'  */
  YYSYMBOL_55_ = 55,                       /* '}'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '&'  */
  YYSYMBOL_58_ = 58,                       /* '*'  */
  YYSYMBOL_59_ = 59,                       /* '+'  */
  YYSYMBOL_60_ = 60,                       /* '-'  */
  YYSYMBOL_61_ = 61,                       /* '~'  */
  YYSYMBOL_62_ = 62,                       /* '!'  */
  YYSYMBOL_63_ = 63,                       /* '/'  */
  YYSYMBOL_64_ = 64,                       /* '%'  */
  YYSYMBOL_65_ = 65,                       /* '<'  */
  YYSYMBOL_66_ = 66,                       /* '>'  */
  YYSYMBOL_67_ = 67,                       /* '^'  */
  YYSYMBOL_68_ = 68,                       /* '|'  */
  YYSYMBOL_69_ = 69,                       /* '?'  */
  YYSYMBOL_70_ = 70,                       /* ':'  */
  YYSYMBOL_71_ = 71,                       /* '='  */
  YYSYMBOL_72_ = 72,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_primary_expression = 74,        /* primary_expression  */
  YYSYMBOL_constant = 75,                  /* constant  */
  YYSYMBOL_string = 76,                    /* string  */
  YYSYMBOL_postfix_expression = 77,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 78,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 79,          /* unary_expression  */
  YYSYMBOL_unary_operator = 80,            /* unary_operator  */
  YYSYMBOL_cast_expression = 81,           /* cast_expression  */
  YYSYMBOL_mulexp = 82,                    /* mulexp  */
  YYSYMBOL_addexp = 83,                    /* addexp  */
  YYSYMBOL_shift_expression = 84,          /* shift_expression  */
  YYSYMBOL_rel_exp = 85,                   /* rel_exp  */
  YYSYMBOL_equals_ex = 86,                 /* equals_ex  */
  YYSYMBOL_and_exp = 87,                   /* and_exp  */
  YYSYMBOL_xor_exp = 88,                   /* xor_exp  */
  YYSYMBOL_or_exp = 89,                    /* or_exp  */
  YYSYMBOL_and_operant = 90,               /* and_operant  */
  YYSYMBOL_or_operant = 91,                /* or_operant  */
  YYSYMBOL_condition_exp = 92,             /* condition_exp  */
  YYSYMBOL_assignment_exp = 93,            /* assignment_exp  */
  YYSYMBOL_assignment_operator = 94,       /* assignment_operator  */
  YYSYMBOL_exp = 95,                       /* exp  */
  YYSYMBOL_constant_expression = 96,       /* constant_expression  */
  YYSYMBOL_declaration = 97,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 98,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 99,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 100,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 101,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 102,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 103, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 104,           /* type_qualifier  */
  YYSYMBOL_declarator = 105,               /* declarator  */
  YYSYMBOL_direct_declarator = 106,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list = 107,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 108,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 109,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 110,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 111,          /* identifier_list  */
  YYSYMBOL_type_name = 112,                /* type_name  */
  YYSYMBOL_abstract_declarator = 113,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 114, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 115,              /* initializer  */
  YYSYMBOL_initializer_list = 116,         /* initializer_list  */
  YYSYMBOL_designation = 117,              /* designation  */
  YYSYMBOL_designator_list = 118,          /* designator_list  */
  YYSYMBOL_designator = 119,               /* designator  */
  YYSYMBOL_stmt = 120,                     /* stmt  */
  YYSYMBOL_label_stmt = 121,               /* label_stmt  */
  YYSYMBOL_compound_stmt = 122,            /* compound_stmt  */
  YYSYMBOL_block_item_list = 123,          /* block_item_list  */
  YYSYMBOL_block_item = 124,               /* block_item  */
  YYSYMBOL_exp_stmt = 125,                 /* exp_stmt  */
  YYSYMBOL_selection_stmt = 126,           /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 127,           /* iteration_stmt  */
  YYSYMBOL_jmp_stmt = 128,                 /* jmp_stmt  */
  YYSYMBOL_translation_unit = 129,         /* translation_unit  */
  YYSYMBOL_external_declaration = 130,     /* external_declaration  */
  YYSYMBOL_func_def = 131,                 /* func_def  */
  YYSYMBOL_declaration_list = 132          /* declaration_list  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
       2,     2,     2,    62,     2,     2,     2,    64,    57,     2,
      49,    50,    58,    59,    56,    60,    53,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    72,
      65,    71,    66,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,    68,    55,    61,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    40,    44,    45,    61,
      62,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      81,    82,    86,    87,    88,    89,    93,    94,    95,    96,
      97,    98,   102,   103,   107,   108,   109,   110,   114,   115,
     116,   120,   121,   122,   126,   127,   128,   129,   130,   134,
     135,   136,   140,   141,   145,   146,   150,   151,   155,   156,
     160,   161,   165,   166,   170,   171,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   187,   188,   192,   196,   197,
     201,   202,   203,   204,   205,   206,   210,   211,   215,   216,
     220,   221,   225,   226,   227,   228,   229,   230,   231,   237,
     238,   239,   240,   248,   249,   256,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   275,   276,
     281,   285,   286,   290,   291,   292,   296,   297,   301,   302,
     306,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     332,   333,   334,   338,   339,   340,   341,   345,   349,   350,
     354,   355,   361,   362,   363,   364,   365,   366,   370,   371,
     372,   376,   377,   381,   382,   386,   387,   391,   392,   396,
     397,   398,   403,   404,   405,   406,   407,   408,   412,   413,
     414,   415,   419,   420,   424,   425,   429,   430,   434,   435
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "C_CONSTANT",
  "EXTERN", "STATIC", "CONST", "VOLATILE", "BOOL", "SHORT", "INT", "LONG",
  "FLOAT", "VOID", "CHAR", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "CONTINUE", "BREAK", "RETURN", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "'('", "')'",
  "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "$accept", "primary_expression", "constant", "string",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "mulexp", "addexp",
  "shift_expression", "rel_exp", "equals_ex", "and_exp", "xor_exp",
  "or_exp", "and_operant", "or_operant", "condition_exp", "assignment_exp",
  "assignment_operator", "exp", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "type_qualifier", "declarator", "direct_declarator",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "stmt", "label_stmt", "compound_stmt", "block_item_list", "block_item",
  "exp_stmt", "selection_stmt", "iteration_stmt", "jmp_stmt",
  "translation_unit", "external_declaration", "func_def",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     454,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,     0,   454,   454,   454,  1107,  -244,  -244,
    -244,     9,  -244,    -9,  -244,   391,    13,  -244,  -244,  -244,
    -244,  -244,   -26,     9,  -244,   297,   943,  -244,     0,  -244,
     602,   114,   623,  -244,  -244,   -56,   -11,  -244,  -244,  -244,
    -244,  -244,  1051,    33,    24,    95,    99,   427,   110,    41,
     117,   490,  1083,  1083,   591,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,    87,   289,  1051,  -244,
     128,   143,   173,   -14,   171,   147,   133,   142,   175,   -21,
    -244,  -244,    85,  -244,  -244,  -244,  -244,   367,  -244,  -244,
    -244,  -244,  -244,  -244,   879,  -244,  -244,  -244,  -244,  -244,
    -244,     4,   178,   174,  -244,    11,   911,  -244,   189,  -244,
     655,   427,  -244,  -244,   176,   427,  1051,  1051,  1051,   222,
     497,  -244,  -244,  -244,   129,   591,  -244,  -244,    19,  1163,
      86,  1163,   198,  -244,  -244,   949,  1051,   246,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  1051,  -244,  1051,
    1051,  1051,  1051,  1051,  1051,  1051,  1051,  1051,  1051,  1051,
    1051,  1051,  1051,  1051,  1051,  1051,  1051,  1051,  1051,  -244,
    -244,  -244,  1051,   247,  -244,   157,   943,     3,  -244,  1143,
     687,  -244,  -244,   107,  -244,   454,  -244,   250,   204,   911,
    -244,  1051,  -244,   206,  -244,  -244,   427,  -244,    55,    64,
      66,   210,   529,   529,  -244,   213,  -244,  -244,    27,  -244,
    -244,   981,  -244,    93,  -244,    40,  -244,  -244,  -244,  -244,
    -244,   128,   128,   143,   143,   173,   173,   173,   173,   -14,
     -14,   171,   147,   133,   142,   175,   -42,  -244,   208,  -244,
    -244,   719,  -244,  -244,  -244,  -244,   216,   217,   911,  -244,
     219,   751,  1154,   783,  -244,  -244,  -244,   220,   221,  -244,
    -244,   427,   427,   427,  1051,  1013,  1019,   215,   879,  -244,
    -244,  1051,  -244,  1051,  -244,  -244,  -244,   943,  -244,  -244,
     223,   911,  -244,  1051,  -244,   224,  -244,   227,   911,  -244,
     228,   815,  -244,  -244,   251,  -244,  -244,    96,   427,   137,
     427,   138,   162,  -244,  -244,  -244,  -244,   229,   230,  -244,
    -244,   231,   911,  -244,  1051,  -244,   232,   427,   207,  -244,
     427,  -244,   427,  -244,   847,  -244,  -244,  -244,   237,   241,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,    91,   103,   104,    98,    94,    95,    96,    97,
      92,    93,   195,     0,    81,    83,    85,     0,   192,   194,
     106,     0,    78,     0,    86,    89,   105,    80,    82,    84,
       1,   193,     0,     0,    79,     0,     0,   198,     0,   197,
       0,     0,     0,   107,    87,    89,     2,     6,     7,     9,
      10,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,    26,    27,    28,    29,
      30,    31,   177,    11,     3,     4,    22,    32,     0,    34,
      38,    41,    44,    49,    52,    54,    56,    58,    60,    62,
      64,    75,     0,   175,   176,   162,   163,     0,   173,   164,
     165,   166,   167,     2,     0,   152,    88,   199,   196,   126,
     116,   125,     0,   120,   121,     0,     0,   108,     0,   118,
       0,     0,    32,    77,     0,     0,     0,     0,     0,     0,
       0,   188,   189,   190,     0,     0,    23,    24,     0,   100,
     129,   102,     0,    16,    17,     0,     0,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    66,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
     172,   174,     0,     0,   154,     0,     0,     0,   158,     0,
       0,   123,   124,   130,   115,     0,   117,     0,     0,     0,
     114,     0,   113,     0,   119,   168,     0,   170,     0,     0,
       0,     0,     0,     0,   191,     0,     5,    99,     0,   128,
     101,     0,    13,     0,    20,     0,    15,    65,    35,    36,
      37,    39,    40,    42,    43,    47,    48,    45,    46,    50,
      51,    53,    55,    57,    59,    61,     0,    76,     0,   161,
     150,     0,   153,   157,   159,   146,     0,     0,     0,   132,
       0,     0,     0,     0,   122,   127,   110,     0,     0,   112,
     169,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      14,     0,    12,     0,   160,   151,   156,     0,   147,   131,
       0,     0,   138,     0,   137,     0,   148,     0,     0,   139,
       0,     0,   109,   111,   179,   181,   182,     0,     0,     0,
       0,     0,     0,    21,    63,   155,   134,     0,     0,   136,
     149,     0,     0,   145,     0,   144,     0,     0,     0,   186,
       0,   184,     0,    18,     0,   133,   135,   141,     0,     0,
     142,   180,   183,   187,   185,    19,   140,   143
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,  -244,  -244,  -244,     8,  -244,   -60,    57,
      75,    30,    73,   122,   123,   121,   145,   163,  -244,   -48,
     -36,  -244,   -38,   115,   -15,    16,  -244,   305,  -244,   -29,
       6,   -37,    -4,  -244,  -103,   -39,  -244,   146,  -244,   205,
     -45,  -244,   -35,    65,  -243,  -244,   155,   -40,  -244,    25,
    -244,   248,  -119,  -244,  -244,  -244,  -244,   327,  -244,  -244
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    73,    74,    75,    76,   223,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   157,    92,   124,    12,    38,    23,    24,    14,    15,
     140,    16,    32,    26,   120,   256,   113,   114,   115,   142,
     257,   193,   184,   185,   186,   187,   188,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    17,    18,    19,    40
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   106,   112,    20,   123,   119,   118,    20,   287,    25,
      37,   213,    20,   199,   178,    36,    13,   129,   158,   176,
      93,   166,   167,   134,    43,   107,   138,   141,   283,    45,
      27,    28,    29,    13,    45,   139,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    33,   177,    21,
      39,   168,   169,   189,   182,   190,   183,   111,    21,   121,
     122,   196,    41,    34,    42,   108,   192,   197,   105,   216,
     136,   137,    22,   126,   253,   178,   218,   255,   190,   119,
     198,   205,    93,   204,   203,   207,   122,   261,   208,   209,
     210,   287,   282,   275,   276,   219,   178,   138,   141,   228,
     229,   230,   141,   125,   141,   271,   139,   191,   225,   224,
     139,   178,   139,   131,   272,   212,   273,   109,   143,   144,
     178,   227,   178,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   123,   218,   145,   190,   146,   246,
     147,   178,   247,   280,   127,   217,   328,   220,   128,   281,
     105,   252,   178,   119,   260,   291,   262,   179,   263,   130,
     301,   279,   204,   267,   110,   268,   270,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   178,   159,   330,   332,   132,
     122,   160,   161,   178,   178,   322,   235,   236,   237,   238,
     173,   214,   162,   163,   172,   111,   164,   165,   170,   171,
     174,   111,   250,   251,   175,   105,   286,   333,   334,   231,
     232,   119,   290,   297,   204,   295,   119,   300,   194,   122,
     195,   304,   305,   306,   111,   314,   307,   309,   311,   233,
     234,   200,   105,   239,   240,   313,   206,   211,   221,   226,
     249,   105,   315,   265,   204,   317,   266,   318,   269,   274,
     284,   119,   321,   277,   204,   326,   288,   289,   329,   278,
     331,   292,   302,   303,   327,   316,   319,   320,   111,   342,
     323,   335,   336,   337,   340,   204,   338,   341,   339,   346,
     343,   122,   344,   347,   241,   243,   242,   248,   105,   286,
      46,    47,    48,    49,    50,    51,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    52,    53,    54,
     244,    55,    56,    57,    58,    59,    60,    61,    62,    63,
     148,   149,   150,   151,   152,   153,   154,   155,    44,   245,
     215,   264,   254,   312,    31,   181,    64,     0,     0,     0,
       0,    35,    65,     0,    66,    67,    68,    69,    70,    71,
     156,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      46,    47,    48,    49,    50,    51,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    52,    53,    54,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,     0,     0,     0,    64,     0,     0,     0,
       0,    35,   180,     0,    66,    67,    68,    69,    70,    71,
      46,    47,    48,    49,    50,    51,     0,     0,     0,    72,
       0,     0,     0,     0,     0,    35,     0,    52,    53,    54,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,    36,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    64,     0,     0,     0,
       0,    35,     0,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,   103,    47,    48,    49,    50,    51,    72,
     103,    47,    48,    49,    50,    51,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,    62,    63,     0,     0,     0,     0,     0,    62,    63,
       0,     0,   103,    47,    48,    49,    50,    51,     0,    64,
       0,     0,     0,     0,     0,     0,    64,    66,    67,    68,
      69,    70,    71,     0,    66,    67,    68,    69,    70,    71,
      62,    63,   133,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    68,    69,
      70,    71,     0,     0,   103,    47,    48,    49,    50,    51,
       0,    72,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    62,    63,     0,     0,   103,    47,    48,    49,
      50,    51,     0,   116,     3,     4,     0,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    62,    63,    35,     0,   103,    47,
      48,    49,    50,    51,     0,   201,     3,     4,     0,     0,
       0,     0,    64,     0,     0,   117,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    62,    63,     0,     0,
     103,    47,    48,    49,    50,    51,     0,   258,     3,     4,
       0,     0,     0,     0,    64,     0,     0,   202,     0,     0,
       0,     0,    66,    67,    68,    69,    70,    71,    62,    63,
       0,     0,   103,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    64,     0,     0,   259,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      62,    63,     0,     0,   103,    47,    48,    49,    50,    51,
       0,   293,     3,     4,     0,     0,     0,     0,    64,     0,
     182,     0,   183,   104,   285,     0,    66,    67,    68,    69,
      70,    71,    62,    63,     0,     0,   103,    47,    48,    49,
      50,    51,     0,   298,     3,     4,     0,     0,     0,     0,
      64,     0,     0,   294,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    62,    63,     0,     0,   103,    47,
      48,    49,    50,    51,     0,   324,     3,     4,     0,     0,
       0,     0,    64,     0,     0,   299,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    62,    63,     0,     0,
     103,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    64,     0,     0,   325,     0,     0,
       0,     0,    66,    67,    68,    69,    70,    71,    62,    63,
       0,     0,   103,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    64,     0,   182,     0,
     183,   104,   345,     0,    66,    67,    68,    69,    70,    71,
      62,    63,     0,     0,   103,    47,    48,    49,    50,    51,
       0,     0,     3,     4,     0,     0,     0,     0,    64,     0,
     182,     0,   183,   104,     0,     0,    66,    67,    68,    69,
      70,    71,    62,    63,     0,     0,   103,    47,    48,    49,
      50,    51,   103,    47,    48,    49,    50,    51,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    62,    63,     0,     0,     0,     0,
      62,    63,     0,     0,   103,    47,    48,    49,    50,    51,
       0,     0,    64,     0,     0,     0,     0,   104,    64,   222,
      66,    67,    68,    69,    70,    71,    66,    67,    68,    69,
      70,    71,    62,    63,     0,     0,   103,    47,    48,    49,
      50,    51,   103,    47,    48,    49,    50,    51,     0,     0,
      64,     0,     0,     0,     0,   278,     0,     0,    66,    67,
      68,    69,    70,    71,    62,    63,     0,     0,     0,     0,
      62,    63,     0,     0,   103,    47,    48,    49,    50,    51,
       0,     0,    64,   308,     0,     0,     0,     0,    64,   310,
      66,    67,    68,    69,    70,    71,    66,    67,    68,    69,
      70,    71,    62,    63,     0,     0,   103,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,    30,    66,    67,
      68,    69,    70,    71,    62,    63,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,     0,   135,     0,     0,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    20,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   255,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   296
};

static const yytype_int16 yycheck[] =
{
      36,    36,    41,     3,    52,    42,    42,     3,   251,    13,
      25,   130,     3,   116,    56,    71,     0,    57,    78,    40,
      35,    35,    36,    61,    50,    40,    64,    64,    70,    33,
      14,    15,    16,    17,    38,    64,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    56,    69,    49,
      25,    65,    66,    49,    51,    51,    53,    41,    49,    70,
      52,    50,    49,    72,    51,    40,   111,    56,   104,    50,
      62,    63,    72,    49,    71,    56,    49,    50,    51,   116,
     116,   121,    97,   120,   120,   125,    78,   190,   126,   127,
     128,   334,    52,   212,   213,   140,    56,   135,   135,   159,
     160,   161,   139,    70,   141,    50,   135,   111,   146,   145,
     139,    56,   141,    72,    50,   130,    50,     3,    31,    32,
      56,   157,    56,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   182,    49,    49,    51,    51,   177,
      53,    56,   178,    50,    49,   139,    50,   141,    49,    56,
     186,   186,    56,   190,   190,   258,    49,    72,    51,    49,
     263,   221,   199,   199,    50,   201,   206,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    56,    58,    50,    50,    72,
     182,    63,    64,    56,    56,   298,   166,   167,   168,   169,
      67,    72,    59,    60,    57,   189,    33,    34,    37,    38,
      68,   195,    55,    56,    39,   251,   251,    55,    56,   162,
     163,   258,   258,   262,   261,   261,   263,   263,    50,   221,
      56,   271,   272,   273,   218,   283,   274,   275,   276,   164,
     165,    52,   278,   170,   171,   281,    70,    25,    50,     3,
       3,   287,   287,     3,   291,   291,    52,   293,    52,    49,
      52,   298,   298,    50,   301,   301,    50,    50,   308,    54,
     310,    52,    52,    52,    23,    52,    52,    50,   262,    72,
      52,    52,    52,    52,    52,   322,   322,   327,   324,    52,
     330,   283,   332,    52,   172,   174,   173,   182,   334,   334,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     175,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      41,    42,    43,    44,    45,    46,    47,    48,    33,   176,
     135,   195,   187,   278,    17,    97,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    71,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    72,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    57,    58,    59,
      60,    61,    62,    -1,    57,    58,    59,    60,    61,    62,
      31,    32,    72,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    72,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    31,    32,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    31,    32,    54,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    31,    32,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    31,    32,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      31,    32,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    49,    -1,
      51,    -1,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    31,    32,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    31,    32,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    31,    32,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    31,    32,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      31,    32,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    49,    -1,
      51,    -1,    53,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    31,    32,    -1,    -1,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    31,    32,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    49,    50,
      57,    58,    59,    60,    61,    62,    57,    58,    59,    60,
      61,    62,    31,    32,    -1,    -1,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    31,    32,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    49,    50,
      57,    58,    59,    60,    61,    62,    57,    58,    59,    60,
      61,    62,    31,    32,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,     0,    57,    58,
      59,    60,    61,    62,    31,    32,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,     3,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    97,    98,   101,   102,   104,   129,   130,   131,
       3,    49,    72,    99,   100,   105,   106,    98,    98,    98,
       0,   130,   105,    56,    72,    54,    71,    97,    98,   122,
     132,    49,    51,    50,   100,   105,     3,     4,     5,     6,
       7,     8,    20,    21,    22,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    49,    55,    57,    58,    59,    60,
      61,    62,    72,    74,    75,    76,    77,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    95,    97,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     3,    54,    93,   115,    97,   122,     3,
      50,    98,   108,   109,   110,   111,    10,    52,    93,   104,
     107,    70,    79,    92,    96,    70,    49,    49,    49,   120,
      49,    72,    72,    72,    95,    49,    79,    79,    95,   102,
     103,   104,   112,    31,    32,    49,    51,    53,    41,    42,
      43,    44,    45,    46,    47,    48,    71,    94,    81,    58,
      63,    64,    59,    60,    33,    34,    35,    36,    65,    66,
      37,    38,    57,    67,    68,    39,    40,    69,    56,    72,
      55,   124,    51,    53,   115,   116,   117,   118,   119,    49,
      51,   105,   113,   114,    50,    56,    50,    56,    93,   107,
      52,    10,    52,    93,   104,   120,    70,   120,    95,    95,
      95,    25,    97,   125,    72,   112,    50,   103,    49,   113,
     103,    50,    50,    78,    93,    95,     3,    93,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    85,
      85,    86,    87,    88,    89,    90,    95,    93,    96,     3,
      55,    56,   115,    71,   119,    50,   108,   113,    10,    52,
      93,   107,    49,    51,   110,     3,    52,    93,    93,    52,
     120,    50,    50,    50,    49,   125,   125,    50,    54,    81,
      50,    56,    52,    70,    52,    55,   115,   117,    50,    50,
      93,   107,    52,    10,    52,    93,    50,   108,    10,    52,
      93,   107,    52,    52,   120,   120,   120,    95,    50,    95,
      50,    95,   116,    93,    92,   115,    52,    93,    93,    52,
      50,    93,   107,    52,    10,    52,    93,    23,    50,   120,
      50,   120,    50,    55,    56,    52,    52,    52,    93,    93,
      52,   120,    72,   120,   120,    55,    52,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    81,    81,    82,    82,    82,    82,    83,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   104,   104,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   116,   116,   116,   116,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   128,   128,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     3,     3,     6,
       5,     6,     5,     4,     4,     4,     3,     4,     1,     2,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       1,     3,     2,     5,     4,     5,     4,     3,     3,     3,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       3,     4,     1,     2,     1,     4,     3,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     6,     7,     2,     2,
       2,     3,     1,     2,     1,     1,     4,     3,     1,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 33 "parser2.y"
                     {printf("identifier");}
#line 1764 "y.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 34 "parser2.y"
                   {printf("constant");}
#line 1770 "y.tab.c"
    break;

  case 4: /* primary_expression: string  */
#line 35 "parser2.y"
                 {printf("string");}
#line 1776 "y.tab.c"
    break;

  case 6: /* constant: I_CONSTANT  */
#line 40 "parser2.y"
                     {
		//check if it has single quotes withone character in it only

	}
#line 1785 "y.tab.c"
    break;

  case 8: /* constant: C_CONSTANT  */
#line 45 "parser2.y"
                     {printf("C_Constant %s\n")   ;
	//check if it has single quotes withone character in it only
	  if (strlen(yytext) == 3 && yytext[0] == '\'' && yytext[2] == '\'') {
		printf("Character constant: %s\n", yytext);
	  } else {
		//return syntax_error("Invalid character constant");
		yyerror("Invalid character constant");
		//exit the program
		exit(1);
	  }
	}
#line 1801 "y.tab.c"
    break;

  case 11: /* postfix_expression: primary_expression  */
#line 69 "parser2.y"
                            {printf("primary_expression");}
#line 1807 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression '[' exp ']'  */
#line 70 "parser2.y"
                                          { printf("postfix exp exp"); }
#line 1813 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression '(' ')'  */
#line 71 "parser2.y"
                                     {printf("postfix_expression()");}
#line 1819 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 72 "parser2.y"
                                                              {printf("postfix_expression()");}
#line 1825 "y.tab.c"
    break;

  case 18: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 76 "parser2.y"
                                                     {printf("type name");}
#line 1831 "y.tab.c"
    break;

  case 19: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 77 "parser2.y"
                                                         {printf("type name");}
#line 1837 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_exp  */
#line 81 "parser2.y"
                         {printf("assignment_exp\n");}
#line 1843 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list ',' assignment_exp  */
#line 82 "parser2.y"
                                                      {printf("assignment_exp1 list, exp\n");}
#line 1849 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 86 "parser2.y"
                             {printf("postfix_expression\n");}
#line 1855 "y.tab.c"
    break;

  case 23: /* unary_expression: INC_OP unary_expression  */
#line 87 "parser2.y"
                                 {printf("INC_OP unary_expression\n");}
#line 1861 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 89 "parser2.y"
                                         {printf("unary_operator cast_expression\n");}
#line 1867 "y.tab.c"
    break;

  case 32: /* cast_expression: unary_expression  */
#line 102 "parser2.y"
                           {printf("unary_expression\n");}
#line 1873 "y.tab.c"
    break;

  case 64: /* assignment_exp: condition_exp  */
#line 170 "parser2.y"
                        {printf("condition_exp");}
#line 1879 "y.tab.c"
    break;

  case 65: /* assignment_exp: unary_expression assignment_operator assignment_exp  */
#line 171 "parser2.y"
                                                              {printf("unary_expression assignment_operator assignment_exp");}
#line 1885 "y.tab.c"
    break;

  case 75: /* exp: assignment_exp  */
#line 187 "parser2.y"
                         {printf("assignment_exp\n");}
#line 1891 "y.tab.c"
    break;

  case 77: /* constant_expression: condition_exp  */
#line 192 "parser2.y"
                        {printf("condition_exp in constant\n");}
#line 1897 "y.tab.c"
    break;

  case 88: /* init_declarator: declarator '=' initializer  */
#line 215 "parser2.y"
                                     {printf("declarator = initializer\n");}
#line 1903 "y.tab.c"
    break;

  case 93: /* type_specifier: CHAR  */
#line 226 "parser2.y"
               {printf("char");}
#line 1909 "y.tab.c"
    break;

  case 95: /* type_specifier: INT  */
#line 228 "parser2.y"
              {printf("int");}
#line 1915 "y.tab.c"
    break;

  case 99: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 237 "parser2.y"
                                                  {printf("type_specifier specifier_qualifier_list\n");}
#line 1921 "y.tab.c"
    break;

  case 106: /* direct_declarator: IDENTIFIER  */
#line 260 "parser2.y"
                     {printf(" directidentifier");}
#line 1927 "y.tab.c"
    break;

  case 126: /* identifier_list: IDENTIFIER  */
#line 296 "parser2.y"
                     {printf("identifier");}
#line 1933 "y.tab.c"
    break;

  case 150: /* initializer: '{' initializer_list '}'  */
#line 332 "parser2.y"
                                   {printf("initializer_list\n");}
#line 1939 "y.tab.c"
    break;

  case 151: /* initializer: '{' initializer_list ',' '}'  */
#line 333 "parser2.y"
                                        {printf("initializer_list 2\n");}
#line 1945 "y.tab.c"
    break;

  case 152: /* initializer: assignment_exp  */
#line 334 "parser2.y"
                         {printf("assignment_exp\n");}
#line 1951 "y.tab.c"
    break;

  case 153: /* initializer_list: designation initializer  */
#line 338 "parser2.y"
                                  {printf("designation initializer\n");}
#line 1957 "y.tab.c"
    break;

  case 154: /* initializer_list: initializer  */
#line 339 "parser2.y"
                      {printf("initializer\n");}
#line 1963 "y.tab.c"
    break;

  case 155: /* initializer_list: initializer_list ',' designation initializer  */
#line 340 "parser2.y"
                                                       {printf("initializer_list , designation initializer\n");}
#line 1969 "y.tab.c"
    break;

  case 156: /* initializer_list: initializer_list ',' initializer  */
#line 341 "parser2.y"
                                           {printf("initializer_list , initializer\n");}
#line 1975 "y.tab.c"
    break;

  case 157: /* designation: designator_list '='  */
#line 345 "parser2.y"
                              {printf("designator_list =\n");}
#line 1981 "y.tab.c"
    break;

  case 158: /* designator_list: designator  */
#line 349 "parser2.y"
                     {printf("designator\n");}
#line 1987 "y.tab.c"
    break;

  case 159: /* designator_list: designator_list designator  */
#line 350 "parser2.y"
                                     {printf("designator_list designator\n");}
#line 1993 "y.tab.c"
    break;

  case 160: /* designator: '[' constant_expression ']'  */
#line 354 "parser2.y"
                                      {printf("constant_expression\n");}
#line 1999 "y.tab.c"
    break;

  case 161: /* designator: '.' IDENTIFIER  */
#line 355 "parser2.y"
                         {printf(" desgIDENTIFIER\n");}
#line 2005 "y.tab.c"
    break;

  case 175: /* block_item: declaration  */
#line 386 "parser2.y"
                      {printf("declaration\n");}
#line 2011 "y.tab.c"
    break;

  case 192: /* translation_unit: external_declaration  */
#line 419 "parser2.y"
                               {printf("external_declaration\n");}
#line 2017 "y.tab.c"
    break;

  case 195: /* external_declaration: declaration  */
#line 425 "parser2.y"
                      {printf("declaration\n");}
#line 2023 "y.tab.c"
    break;

  case 198: /* declaration_list: declaration  */
#line 434 "parser2.y"
                      {printf("declaration\n");}
#line 2029 "y.tab.c"
    break;


#line 2033 "y.tab.c"

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

#line 438 "parser2.y"

#include <stdio.h>
void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}
