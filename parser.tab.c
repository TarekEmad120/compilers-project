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
	#include <stdbool.h>
	#include "symboltable.h"
	extern FILE *yyin;
	extern int yylineno; /* Line Number tacker from lexer */
	extern int yylex(); 
	extern void yyerror(char *s);
	int count=0;
	int scopeno = 0;
	

#line 86 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_NUM = 4,                    /* INT_NUM  */
  YYSYMBOL_FLOAT_VAL = 5,                  /* FLOAT_VAL  */
  YYSYMBOL_STRING_VAL = 6,                 /* STRING_VAL  */
  YYSYMBOL_TRUE_VAL = 7,                   /* TRUE_VAL  */
  YYSYMBOL_FALSE_VAL = 8,                  /* FALSE_VAL  */
  YYSYMBOL_CHAR_VAL = 9,                   /* CHAR_VAL  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_BOOL = 13,                      /* BOOL  */
  YYSYMBOL_STRING = 14,                    /* STRING  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_EXTERN = 16,                    /* EXTERN  */
  YYSYMBOL_PLUS = 17,                      /* PLUS  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_MULT = 19,                      /* MULT  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_PLUS_EQ = 21,                   /* PLUS_EQ  */
  YYSYMBOL_MINUS_EQ = 22,                  /* MINUS_EQ  */
  YYSYMBOL_MULT_EQ = 23,                   /* MULT_EQ  */
  YYSYMBOL_DIV_EQ = 24,                    /* DIV_EQ  */
  YYSYMBOL_INC = 25,                       /* INC  */
  YYSYMBOL_DEC = 26,                       /* DEC  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_GE = 29,                        /* GE  */
  YYSYMBOL_LE = 30,                        /* LE  */
  YYSYMBOL_EQ_EQ = 31,                     /* EQ_EQ  */
  YYSYMBOL_NE = 32,                        /* NE  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_EQUAL = 36,                     /* EQUAL  */
  YYSYMBOL_IF = 37,                        /* IF  */
  YYSYMBOL_ELSEIF = 38,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_WHILE = 40,                     /* WHILE  */
  YYSYMBOL_DO = 41,                        /* DO  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_SWITCH = 43,                    /* SWITCH  */
  YYSYMBOL_CASE = 44,                      /* CASE  */
  YYSYMBOL_DEFAULT = 45,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 46,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 47,                  /* CONTINUE  */
  YYSYMBOL_VOID = 48,                      /* VOID  */
  YYSYMBOL_RETURN = 49,                    /* RETURN  */
  YYSYMBOL_COMMA = 50,                     /* COMMA  */
  YYSYMBOL_COLON = 51,                     /* COLON  */
  YYSYMBOL_OPENBRACKET = 52,               /* OPENBRACKET  */
  YYSYMBOL_CLOSEDBRACKET = 53,             /* CLOSEDBRACKET  */
  YYSYMBOL_OPENCURL = 54,                  /* OPENCURL  */
  YYSYMBOL_CLOSEDCURL = 55,                /* CLOSEDCURL  */
  YYSYMBOL_SEMICOLON = 56,                 /* SEMICOLON  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_statements = 58,                /* statements  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_value = 61,                     /* value  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_constant = 63,                  /* constant  */
  YYSYMBOL_assignment_statement = 64,      /* assignment_statement  */
  YYSYMBOL_var_declaration = 65,           /* var_declaration  */
  YYSYMBOL_constant_declaration = 66,      /* constant_declaration  */
  YYSYMBOL_extern_declartion = 67,         /* extern_declartion  */
  YYSYMBOL_function = 68,                  /* function  */
  YYSYMBOL_69_2 = 69,                      /* $@2  */
  YYSYMBOL_70_3 = 70,                      /* $@3  */
  YYSYMBOL_return_value = 71,              /* return_value  */
  YYSYMBOL_function_prototype = 72,        /* function_prototype  */
  YYSYMBOL_73_4 = 73,                      /* $@4  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_75_6 = 75,                      /* $@6  */
  YYSYMBOL_76_7 = 76,                      /* $@7  */
  YYSYMBOL_parameters = 77,                /* parameters  */
  YYSYMBOL_single_parameter = 78,          /* single_parameter  */
  YYSYMBOL_function_call = 79,             /* function_call  */
  YYSYMBOL_call_parameters = 80,           /* call_parameters  */
  YYSYMBOL_call_parameter = 81,            /* call_parameter  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_boolean_expression = 83,        /* boolean_expression  */
  YYSYMBOL_arithmetic_expression = 84,     /* arithmetic_expression  */
  YYSYMBOL_unary_expression = 85,          /* unary_expression  */
  YYSYMBOL_binary_expression = 86,         /* binary_expression  */
  YYSYMBOL_term = 87,                      /* term  */
  YYSYMBOL_factor = 88,                    /* factor  */
  YYSYMBOL_if_statement = 89,              /* if_statement  */
  YYSYMBOL_90_8 = 90,                      /* $@8  */
  YYSYMBOL_91_9 = 91,                      /* $@9  */
  YYSYMBOL_else_if_statement = 92,         /* else_if_statement  */
  YYSYMBOL_93_10 = 93,                     /* $@10  */
  YYSYMBOL_94_11 = 94,                     /* $@11  */
  YYSYMBOL_while_statement = 95,           /* while_statement  */
  YYSYMBOL_do_while_statement = 96,        /* do_while_statement  */
  YYSYMBOL_for_statement = 97,             /* for_statement  */
  YYSYMBOL_for_initialization = 98,        /* for_initialization  */
  YYSYMBOL_for_expression = 99,            /* for_expression  */
  YYSYMBOL_switch_statement = 100,         /* switch_statement  */
  YYSYMBOL_101_12 = 101,                   /* $@12  */
  YYSYMBOL_102_13 = 102,                   /* $@13  */
  YYSYMBOL_case_list = 103,                /* case_list  */
  YYSYMBOL_case_statement = 104,           /* case_statement  */
  YYSYMBOL_break_statement = 105,          /* break_statement  */
  YYSYMBOL_continue_statement = 106        /* continue_statement  */
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
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   157,   157,   158,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   176,
     185,   186,   191,   191,   191,   193,   193,   193,   193,   193,
     195,   195,   195,   195,   195,   195,   201,   202,   203,   204,
     205,   206,   210,   234,   237,   248,   284,   285,   289,   289,
     289,   291,   291,   294,   294,   305,   305,   317,   317,   330,
     330,   343,   343,   345,   345,   347,   349,   349,   351,   351,
     357,   358,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   380,   381,   385,   386,   390,   391,   392,
     396,   397,   398,   402,   403,   404,   405,   412,   412,   412,
     416,   416,   417,   417,   418,   424,   430,   436,   440,   441,
     442,   443,   447,   448,   449,   450,   451,   452,   453,   459,
     459,   459,   463,   464,   468,   469,   474,   475
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
  "INT_NUM", "FLOAT_VAL", "STRING_VAL", "TRUE_VAL", "FALSE_VAL",
  "CHAR_VAL", "INT", "FLOAT", "CHAR", "BOOL", "STRING", "CONST", "EXTERN",
  "PLUS", "MINUS", "MULT", "DIV", "PLUS_EQ", "MINUS_EQ", "MULT_EQ",
  "DIV_EQ", "INC", "DEC", "LT", "GT", "GE", "LE", "EQ_EQ", "NE", "AND",
  "OR", "NOT", "EQUAL", "IF", "ELSEIF", "ELSE", "WHILE", "DO", "FOR",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE", "VOID", "RETURN",
  "COMMA", "COLON", "OPENBRACKET", "CLOSEDBRACKET", "OPENCURL",
  "CLOSEDCURL", "SEMICOLON", "$accept", "statements", "statement", "$@1",
  "value", "type", "constant", "assignment_statement", "var_declaration",
  "constant_declaration", "extern_declartion", "function", "$@2", "$@3",
  "return_value", "function_prototype", "$@4", "$@5", "$@6", "$@7",
  "parameters", "single_parameter", "function_call", "call_parameters",
  "call_parameter", "expression", "boolean_expression",
  "arithmetic_expression", "unary_expression", "binary_expression", "term",
  "factor", "if_statement", "$@8", "$@9", "else_if_statement", "$@10",
  "$@11", "while_statement", "do_while_statement", "for_statement",
  "for_initialization", "for_expression", "switch_statement", "$@12",
  "$@13", "case_list", "case_statement", "break_statement",
  "continue_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     464,    74,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   429,   429,   111,   -50,   -41,   464,   -31,   -13,   -47,
      23,    60,    78,   111,   -71,   -71,   194,   -71,    72,   -71,
     -71,   -71,   -71,   -71,    52,   -71,   353,   -71,   -71,   -71,
      44,    48,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     111,   111,   111,   111,   -71,   -71,   327,    78,   106,   114,
      96,   540,    78,    78,    37,    24,    78,   -71,   -71,    73,
     -71,   -71,   -71,    82,   548,   239,   464,   -71,   -71,    13,
     -71,    12,    12,    12,    12,    12,    12,    12,    12,   -71,
      21,    21,    21,    21,   404,   458,   494,   502,    19,   -71,
     510,   -71,    86,    91,   107,    14,    89,    94,    92,   145,
     -71,    93,   147,   -71,   -71,    78,    98,    99,   -71,   -71,
     248,    85,   101,   -71,   464,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,    48,    48,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   103,    78,    78,    78,   -71,   108,   464,
      78,   -71,    18,   105,   110,   429,   102,   -71,   117,   -71,
     429,   121,   120,   -71,   -71,   122,   123,   -71,   -71,   127,
     273,   -71,   173,    -2,   -71,   -71,   -71,     7,   -71,   -71,
     -71,   -71,   464,   134,   352,   -71,   130,    79,   156,   429,
     -71,   -71,   -71,   302,   -71,   111,   111,   111,   111,    78,
     464,    78,   144,   -37,   -71,   315,   -71,   -71,   548,   548,
     548,   548,   140,   -71,   149,   464,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   164,   -71,   464,   464,   -71,
     157,   175,   464,   -71,   162,   464,    78,   356,   165,   -71,
     161,   -71,   464,   410,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    95,    93,    94,    81,    82,    25,    26,    27,    29,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    18,    21,     0,     3,     0,     5,
       6,     7,     8,    16,     0,    17,     0,    70,    71,    84,
      83,    89,    90,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    85,    86,     0,    67,     0,     0,
      95,    80,     0,     0,     0,     0,     0,   126,   127,     0,
      23,    24,    51,     0,    22,     0,     0,     1,     2,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    41,
       0,    69,     0,    66,     0,     0,     0,     0,     0,    95,
     111,     0,     0,   108,   109,     0,     0,    57,    20,    96,
       0,     0,    53,    44,     0,    77,    76,    74,    75,    72,
      73,    78,    79,    95,    87,    88,    91,    92,    37,    38,
      39,    40,    36,     0,     0,     0,     0,    46,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    19,     0,    43,
       0,     0,     0,    65,    68,     0,     0,    97,   105,     0,
     118,   119,     0,     0,    62,    60,    42,     0,    56,    49,
      45,    47,     0,     0,    95,   117,     0,     0,    63,     0,
      58,    54,    50,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,    61,    98,   113,   114,
     115,   116,     0,   107,     0,     0,   120,   122,    30,    31,
      32,    33,    34,    35,    64,   104,   112,     0,   125,   121,
       0,    99,   124,   102,     0,     0,     0,     0,     0,   103,
       0,   100,     0,     0,   101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -70,   -16,   -71,   -43,    -7,   -71,   152,   154,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
      62,    31,   -55,   -71,   -71,   -10,   -71,   503,   -71,   -71,
      38,    39,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,    20,   -71,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    76,    72,    28,   224,    29,    30,    31,
      32,    33,   124,   192,    73,    34,   160,   161,   155,   156,
     173,   174,    35,   102,   103,    36,    37,    38,    39,    40,
      41,    42,    43,   182,   225,   231,   242,   235,    44,    45,
      46,   115,   186,    47,   187,   229,   203,   204,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,    99,    62,    61,    58,    59,   120,   201,   202,    67,
      78,    63,    74,    75,   101,    60,     2,     3,   216,   106,
     107,    65,   111,   116,   133,     2,     3,   109,     2,     3,
      70,     4,     5,    71,     6,     7,     8,     9,    10,    66,
      94,    95,    96,    97,    54,    55,   100,    74,   189,   121,
     146,   190,    74,    74,   121,    74,    74,   189,   112,    13,
     191,    90,    91,    69,    23,   122,   159,    92,    93,   123,
     147,    57,   153,    23,   123,    79,    23,   108,   158,    68,
     110,    60,     2,     3,    70,     4,     5,    71,    98,     2,
       3,    70,     4,     5,    71,    50,    51,    52,    53,    54,
      55,   164,   165,   166,    78,    74,    80,   169,   162,   104,
      56,    74,   193,    13,    60,     2,     3,   105,     4,     5,
      13,    54,    55,   201,   202,   117,    57,   185,   134,   135,
      23,   136,   137,   168,    74,    74,    74,    23,   118,   143,
      74,   144,   148,   145,   150,   228,    13,   149,   172,   151,
     152,   154,   -59,   172,   -55,   175,   212,   232,   214,   163,
      74,   170,   167,    23,   171,   237,    50,    51,    52,    53,
      54,    55,   243,   176,   178,   179,   188,    78,   180,   181,
     183,    56,   172,   200,   213,   208,   209,   210,   211,    74,
     194,    74,   205,   238,    77,   215,   226,     1,     2,     3,
     227,     4,     5,   230,     6,     7,     8,     9,    10,    11,
      12,   233,    78,   234,   236,   241,    78,   113,   240,   114,
     206,    78,   177,   217,     0,     0,    74,    78,     0,    13,
       0,    14,     0,     0,    15,    16,    17,    18,     0,     0,
      19,    20,    21,    22,     0,     0,    23,     0,    24,     0,
      25,     1,     2,     3,     0,     4,     5,     0,     6,     7,
       8,     9,    10,    11,    12,     0,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,   184,     2,     3,    70,
       4,     5,    71,    13,     0,    14,     0,     0,    15,    16,
      17,    18,   119,     0,    19,    20,    21,    22,     0,     0,
      23,     0,    24,   157,    25,     1,     2,     3,    13,     4,
       5,     0,     6,     7,     8,     9,    10,    11,    12,   218,
     219,   220,   221,   222,   223,    23,     0,     0,     0,     0,
      98,     2,     3,     0,     4,     5,     0,    13,     0,    14,
       0,     0,    15,    16,    17,    18,     0,     0,    19,    20,
      21,    22,     0,     0,    23,     0,    24,   207,    25,     1,
       2,     3,    13,     4,     5,     0,     6,     7,     8,     9,
      10,    11,    12,   195,   196,   197,   198,    54,    55,    23,
      81,    82,    83,    84,    85,    86,    87,    88,   199,     0,
       0,    13,     0,    14,     0,     0,    15,    16,    17,    18,
       0,     0,    19,    20,    21,    22,     0,     0,    23,    89,
      24,   239,    25,     1,     2,     3,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     6,
       7,     8,     9,    10,     0,    13,     0,    14,     0,     0,
      15,    16,    17,    18,     0,     0,    19,    20,    21,    22,
     138,     0,    23,     0,    24,   244,    25,     1,     2,     3,
       0,     4,     5,     0,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,    13,
       0,    14,     0,     0,    15,    16,    17,    18,     0,     0,
      19,    20,    21,    22,   139,     0,    23,     0,    24,     0,
      25,    81,    82,    83,    84,    85,    86,    87,    88,    81,
      82,    83,    84,    85,    86,    87,    88,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,   142,    81,    82,    83,
      84,    85,    86,   -60,   -60,    81,    82,    83,    84,    85,
      86,    87,    88,     0,   125,   126,   127,   128,   129,   130,
     131,   132
};

static const yytype_int16 yycheck[] =
{
      16,    56,    52,    13,    11,    12,    76,    44,    45,    56,
      26,    52,    22,    23,    57,     3,     4,     5,    55,    62,
      63,    52,    65,    66,     3,     4,     5,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    52,
      50,    51,    52,    53,    25,    26,    56,    57,    50,    36,
      36,    53,    62,    63,    36,    65,    66,    50,    65,    35,
      53,    17,    18,     3,    52,    52,   121,    19,    20,    56,
      56,    52,   115,    52,    56,     3,    52,    40,   121,    56,
      56,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,    21,    22,    23,    24,    25,
      26,   144,   145,   146,   120,   115,    54,   150,   124,     3,
      36,   121,   182,    35,     3,     4,     5,     3,     7,     8,
      35,    25,    26,    44,    45,    52,    52,   170,    90,    91,
      52,    92,    93,   149,   144,   145,   146,    52,    56,    53,
     150,    50,    53,    36,    52,   215,    35,    53,   155,    56,
       3,    53,    53,   160,    53,    53,   199,   227,   201,    56,
     170,    56,    54,    52,    54,   235,    21,    22,    23,    24,
      25,    26,   242,    56,    53,    55,     3,   193,    56,    56,
      53,    36,   189,    53,   200,   195,   196,   197,   198,   199,
      56,   201,    36,   236,     0,    51,    56,     3,     4,     5,
      51,     7,     8,    39,    10,    11,    12,    13,    14,    15,
      16,    54,   228,    38,    52,    54,   232,    65,    53,    65,
     189,   237,   160,   203,    -1,    -1,   236,   243,    -1,    35,
      -1,    37,    -1,    -1,    40,    41,    42,    43,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    52,    -1,    54,    -1,
      56,     3,     4,     5,    -1,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    35,    -1,    37,    -1,    -1,    40,    41,
      42,    43,    53,    -1,    46,    47,    48,    49,    -1,    -1,
      52,    -1,    54,    55,    56,     3,     4,     5,    35,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,     4,
       5,     6,     7,     8,     9,    52,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,     8,    -1,    35,    -1,    37,
      -1,    -1,    40,    41,    42,    43,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,    52,    -1,    54,    55,    56,     3,
       4,     5,    35,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    21,    22,    23,    24,    25,    26,    52,
      27,    28,    29,    30,    31,    32,    33,    34,    36,    -1,
      -1,    35,    -1,    37,    -1,    -1,    40,    41,    42,    43,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    52,    56,
      54,    55,    56,     3,     4,     5,    -1,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    10,
      11,    12,    13,    14,    -1,    35,    -1,    37,    -1,    -1,
      40,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      56,    -1,    52,    -1,    54,    55,    56,     3,     4,     5,
      -1,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,    40,    41,    42,    43,    -1,    -1,
      46,    47,    48,    49,    56,    -1,    52,    -1,    54,    -1,
      56,    27,    28,    29,    30,    31,    32,    33,    34,    27,
      28,    29,    30,    31,    32,    33,    34,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    27,    28,    29,
      30,    31,    32,    33,    34,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    81,    82,    83,    84,    85,    86,
      87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    35,    37,    40,    41,    42,    43,    46,
      47,    48,    49,    52,    54,    56,    58,    59,    62,    64,
      65,    66,    67,    68,    72,    79,    82,    83,    84,    85,
      86,    87,    88,    89,    95,    96,    97,   100,   105,   106,
      21,    22,    23,    24,    25,    26,    36,    52,    62,    62,
       3,    82,    52,    52,    59,    52,    52,    56,    56,     3,
       6,     9,    61,    71,    82,    82,    60,     0,    59,     3,
      54,    27,    28,    29,    30,    31,    32,    33,    34,    56,
      17,    18,    19,    20,    82,    82,    82,    82,     3,    79,
      82,    61,    80,    81,     3,     3,    61,    61,    40,     3,
      56,    61,    62,    64,    65,    98,    61,    52,    56,    53,
      58,    36,    52,    56,    69,    84,    84,    84,    84,    84,
      84,    84,    84,     3,    87,    87,    88,    88,    56,    56,
      56,    56,    56,    53,    50,    36,    36,    56,    53,    53,
      52,    56,     3,    61,    53,    75,    76,    55,    61,    79,
      73,    74,    59,    56,    61,    61,    61,    54,    59,    61,
      56,    54,    62,    77,    78,    53,    56,    77,    53,    55,
      56,    56,    90,    53,     3,    61,    99,   101,     3,    50,
      53,    53,    70,    58,    56,    21,    22,    23,    24,    36,
      53,    44,    45,   103,   104,    36,    78,    55,    82,    82,
      82,    82,    61,    59,    61,    51,    55,   104,     4,     5,
       6,     7,     8,     9,    63,    91,    56,    51,    58,   102,
      39,    92,    58,    54,    38,    94,    52,    58,    61,    55,
      53,    54,    93,    58,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    59,
      59,    59,    61,    61,    61,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    66,    67,    67,    69,    70,
      68,    71,    71,    73,    72,    74,    72,    75,    72,    76,
      72,    77,    77,    78,    78,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    88,    90,    91,    89,
      93,    92,    94,    92,    92,    95,    96,    97,    98,    98,
      98,    98,    99,    99,    99,    99,    99,    99,    99,   101,
     102,   100,   103,   103,   104,   104,   105,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     3,     5,     4,     3,     6,     4,     6,     0,     0,
       6,     1,     0,     0,     6,     0,     5,     0,     6,     0,
       5,     3,     1,     2,     4,     5,     1,     0,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       1,     3,     3,     1,     1,     1,     3,     0,     0,    10,
       0,     9,     0,     5,     0,     5,     7,     8,     1,     1,
       2,     1,     4,     3,     3,     3,     3,     1,     0,     0,
       0,     9,     2,     1,     4,     3,     2,     2
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
  case 4: /* statement: expression SEMICOLON  */
#line 162 "parser.y"
                                {printf("Expression statement\n");}
#line 1423 "parser.tab.c"
    break;

  case 5: /* statement: assignment_statement  */
#line 163 "parser.y"
                                {printf("Assignment Statement \n");}
#line 1429 "parser.tab.c"
    break;

  case 6: /* statement: var_declaration  */
#line 164 "parser.y"
                                {printf("Variable declaration\n");}
#line 1435 "parser.tab.c"
    break;

  case 16: /* statement: function  */
#line 174 "parser.y"
                        {printf("Function statement\n");}
#line 1441 "parser.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 176 "parser.y"
                   {
		scopeno++;
		printf("Scope Opened\n");
	
	}
#line 1451 "parser.tab.c"
    break;

  case 19: /* statement: OPENCURL $@1 statements CLOSEDCURL  */
#line 180 "parser.y"
                                {
		endscope(scopeno);
		scopeno--;
		printf("Scope Closed\n");
	}
#line 1461 "parser.tab.c"
    break;

  case 20: /* statement: RETURN return_value SEMICOLON  */
#line 185 "parser.y"
                                                {printf("Return statement\n");}
#line 1467 "parser.tab.c"
    break;

  case 42: /* var_declaration: type IDENTIFIER EQUAL value SEMICOLON  */
#line 211 "parser.y"
                  {
			printf("identifier name %s\n", (yyvsp[-3].name));
			if (chekidentifiernameandScopeoutofscope((yyvsp[-3].name), scopeno) == 1){

				printf("variable is aleady declared\n");
			return 0;
			}
			int type = (yyvsp[-4].var_type);
			char* name = (yyvsp[-3].name);
			int value = (yyvsp[-1].lexicalstruct).type;
			char* valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			if (type != value){
				printf( "Type mismatch\n");
				return 0;
			}
			else{
				printf("iam here\n");
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-4].var_type),name , valueinstring,scopeno,true ,true, true, false, 0, 0);
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}

		  }
#line 1495 "parser.tab.c"
    break;

  case 44: /* var_declaration: type IDENTIFIER SEMICOLON  */
#line 237 "parser.y"
                                   {
			if (chekidentifiernameandScopeoutofscope((yyvsp[-1].name), scopeno) == 1){
				printf("variable is aleady declared\n");
				return 0;
			}
			int type = (yyvsp[-2].var_type);
			char* name = (yyvsp[-1].name);
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-2].var_type),name , "",scopeno, true,false, false, false, 0, 0);
			createnode(ptr, count++);
		}
#line 1510 "parser.tab.c"
    break;

  case 45: /* constant_declaration: CONST type IDENTIFIER EQUAL value SEMICOLON  */
#line 248 "parser.y"
                                                                     {printf("Constant declaration\n");
			if (chekidentifiernameandScopeoutofscope((yyvsp[-3].name), scopeno) == 1){
				printf("variable is aleady declared\n");
				return 0;
			}
			int type = (yyvsp[-4].var_type);

			char* name = (yyvsp[-3].name);
			int value = (yyvsp[-1].lexicalstruct).type;
			char* valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			if (type != value){
				printf( "Type mismatch\n");
				return 0;
			}

			else{
			if (type ==INTTYPE){
				type = CONSTINTTYPE;
			}
			else if (type ==FLOATTYPE){
				type = CONSTFLOATTYPE;
			}
			else if (type ==CHARTYPE){
				type = CONSTCHARTYPE;
			}
			else {
				printf("Type mismatch for constant declation it can be only int , float , char \n");
				return 0;
			}
				struct SymbolData *ptr = initalizesymboldata(type,name , valueinstring,scopeno,true, true, false, false, 0, 0);
				createnode(ptr, count++);
				printf("count of node %d\n",countnodes());
			}
				}
#line 1549 "parser.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 289 "parser.y"
                                                           {scopeno++;}
#line 1555 "parser.tab.c"
    break;

  case 49: /* $@3: %empty  */
#line 289 "parser.y"
                                                                                            {endscope(scopeno); scopeno--;}
#line 1561 "parser.tab.c"
    break;

  case 50: /* function: function_prototype OPENCURL $@2 statement CLOSEDCURL $@3  */
#line 289 "parser.y"
                                                                                                                            {printf("Function Definition\n");}
#line 1567 "parser.tab.c"
    break;

  case 53: /* $@4: %empty  */
#line 294 "parser.y"
                                {
		if (chekidentifiernameandScopeoutofscope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = (yyvsp[-2].var_type);
		char* name = (yyvsp[-1].name);
		struct SymbolData *ptr = initalizesymboldata((yyvsp[-2].var_type),name , "",scopeno, false,false, false, true, 0, 0);
		createnode(ptr, count++);

	}
#line 1583 "parser.tab.c"
    break;

  case 55: /* $@5: %empty  */
#line 305 "parser.y"
                                 {
		if (chekidentifiernameandScopeoutofscope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = (yyvsp[-2].var_type);
		char* name = (yyvsp[-1].name);
		struct SymbolData *ptr = initalizesymboldata((yyvsp[-2].var_type),name , "",scopeno, false,false, false, true, 0, 0);
		createnode(ptr, count++);

	}
#line 1599 "parser.tab.c"
    break;

  case 57: /* $@6: %empty  */
#line 317 "parser.y"
                                  {
		if (chekidentifiernameandScopeoutofscope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = VOIDTYPE;
		char* name = (yyvsp[-1].name);
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, 0, 0);
		createnode(ptr, count++);


	}
#line 1616 "parser.tab.c"
    break;

  case 59: /* $@7: %empty  */
#line 330 "parser.y"
                                 {
		if (chekidentifiernameandScopeoutofscope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = VOIDTYPE;
		char* name = (yyvsp[-1].name);
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, 0, 0);
		createnode(ptr, count++);
	}
#line 1631 "parser.tab.c"
    break;

  case 97: /* $@8: %empty  */
#line 412 "parser.y"
                                                   {scopeno++;}
#line 1637 "parser.tab.c"
    break;

  case 98: /* $@9: %empty  */
#line 412 "parser.y"
                                                                                     {endscope(scopeno); scopeno--;}
#line 1643 "parser.tab.c"
    break;

  case 99: /* if_statement: IF OPENBRACKET value CLOSEDBRACKET OPENCURL $@8 statements CLOSEDCURL $@9 else_if_statement  */
#line 412 "parser.y"
                                                                                                                                        {printf("If then statement\n");}
#line 1649 "parser.tab.c"
    break;

  case 100: /* $@10: %empty  */
#line 416 "parser.y"
                                                                     {scopeno++;}
#line 1655 "parser.tab.c"
    break;

  case 101: /* else_if_statement: else_if_statement ELSEIF OPENBRACKET value CLOSEDBRACKET OPENCURL $@10 statements CLOSEDCURL  */
#line 416 "parser.y"
                                                                                                        { endscope(scopeno); scopeno--;}
#line 1661 "parser.tab.c"
    break;

  case 102: /* $@11: %empty  */
#line 417 "parser.y"
                       {scopeno++;}
#line 1667 "parser.tab.c"
    break;

  case 103: /* else_if_statement: ELSE OPENCURL $@11 statements CLOSEDCURL  */
#line 417 "parser.y"
                                                          {endscope(scopeno); scopeno--;}
#line 1673 "parser.tab.c"
    break;

  case 105: /* while_statement: WHILE OPENBRACKET value CLOSEDBRACKET statement  */
#line 424 "parser.y"
                                                                  {printf("while loop\n");}
#line 1679 "parser.tab.c"
    break;

  case 106: /* do_while_statement: DO statement WHILE OPENBRACKET value CLOSEDBRACKET SEMICOLON  */
#line 430 "parser.y"
                                                                      {printf("do-while loop\n");}
#line 1685 "parser.tab.c"
    break;

  case 107: /* for_statement: FOR OPENBRACKET for_initialization value SEMICOLON for_expression CLOSEDBRACKET statement  */
#line 436 "parser.y"
                                                                                                  {printf("for loop\n");}
#line 1691 "parser.tab.c"
    break;

  case 119: /* $@12: %empty  */
#line 459 "parser.y"
                                                   {scopeno++;}
#line 1697 "parser.tab.c"
    break;

  case 120: /* $@13: %empty  */
#line 459 "parser.y"
                                                                                    {endscope(scopeno); scopeno--;}
#line 1703 "parser.tab.c"
    break;

  case 121: /* switch_statement: SWITCH OPENBRACKET value CLOSEDBRACKET OPENCURL $@12 case_list CLOSEDCURL $@13  */
#line 459 "parser.y"
                                                                                                                   {printf("switch case\n");}
#line 1709 "parser.tab.c"
    break;

  case 126: /* break_statement: BREAK SEMICOLON  */
#line 474 "parser.y"
                                 {printf("Break statement\n");}
#line 1715 "parser.tab.c"
    break;

  case 127: /* continue_statement: CONTINUE SEMICOLON  */
#line 475 "parser.y"
                                       {printf("Continue statement\n");}
#line 1721 "parser.tab.c"
    break;


#line 1725 "parser.tab.c"

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

#line 477 "parser.y"


int main (void)
{
	yyparse(); 
	printSymbolTable();
    return 0;
}
