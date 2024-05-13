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
	#include <fcntl.h>
	#include "symboltable.h"
	extern FILE *yyin;

	extern int yylineno; /* Line Number tacker from lexer */
	extern int yylex(); 
	extern void yyerror(char *s);
	int count=0;
	int scopeno = 0;
	/* leave those for function declaration
	i will implement it later on thursday  or any one try to implement it first*/
	char* currentfunctionname = "";
	int memaddress=0;
	int Ifcounter=0;
	int argcount = 0;
	int funcargs[30];
	bool programerror = false;


	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	
	void printPushValue( char*  x );
	void printPushOp( int x );
	void PrintPopMem( int x );
	void printBoolenOp( int x );
	void printJUMPtype( int x );
	void printVM(char * s,int num);
	void PrintIDentifierAdress(int y);
	

#line 107 "parser.tab.c"

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
  YYSYMBOL_92_10 = 92,                     /* $@10  */
  YYSYMBOL_else_if_statement = 93,         /* else_if_statement  */
  YYSYMBOL_94_11 = 94,                     /* $@11  */
  YYSYMBOL_95_12 = 95,                     /* $@12  */
  YYSYMBOL_96_13 = 96,                     /* $@13  */
  YYSYMBOL_97_14 = 97,                     /* $@14  */
  YYSYMBOL_98_15 = 98,                     /* $@15  */
  YYSYMBOL_while_statement = 99,           /* while_statement  */
  YYSYMBOL_do_while_statement = 100,       /* do_while_statement  */
  YYSYMBOL_for_statement = 101,            /* for_statement  */
  YYSYMBOL_for_initialization = 102,       /* for_initialization  */
  YYSYMBOL_for_expression = 103,           /* for_expression  */
  YYSYMBOL_switch_statement = 104,         /* switch_statement  */
  YYSYMBOL_105_16 = 105,                   /* $@16  */
  YYSYMBOL_106_17 = 106,                   /* $@17  */
  YYSYMBOL_case_list = 107,                /* case_list  */
  YYSYMBOL_case_statement = 108,           /* case_statement  */
  YYSYMBOL_break_statement = 109,          /* break_statement  */
  YYSYMBOL_continue_statement = 110        /* continue_statement  */
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
#define YYLAST   609

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

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
       0,   182,   182,   183,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   201,
     213,   216,   221,   232,   238,   244,   244,   244,   244,   244,
     246,   246,   246,   246,   246,   246,   257,   313,   368,   421,
     474,   526,   530,   565,   600,   615,   658,   659,   665,   665,
     665,   668,   681,   684,   684,   703,   703,   719,   719,   735,
     735,   751,   751,   753,   779,   801,   817,   817,   819,   819,
     825,   838,   848,   941,  1029,  1074,  1119,  1164,  1210,  1239,
    1268,  1294,  1303,  1317,  1321,  1325,  1385,  1448,  1518,  1573,
    1577,  1578,  1633,  1691,  1698,  1704,  1758,  1774,  1774,  1776,
    1774,  1785,  1785,  1785,  1785,  1786,  1786,  1786,  1787,  1793,
    1799,  1805,  1809,  1810,  1811,  1812,  1816,  1865,  1916,  1967,
    2018,  2069,  2070,  2076,  2076,  2076,  2080,  2081,  2085,  2086,
    2091,  2092
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
  "factor", "if_statement", "$@8", "$@9", "$@10", "else_if_statement",
  "$@11", "$@12", "$@13", "$@14", "$@15", "while_statement",
  "do_while_statement", "for_statement", "for_initialization",
  "for_expression", "switch_statement", "$@16", "$@17", "case_list",
  "case_statement", "break_statement", "continue_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     499,    77,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   209,   209,   254,   -76,   -50,   499,   -44,   -32,     7,
      17,    47,    30,   254,   -76,   -76,   162,   -76,   102,   -76,
     -76,   -76,   -76,   -76,    56,   -76,   334,   -76,   -76,   -76,
      51,   101,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     254,   254,   254,   254,   -76,   -76,   308,    30,   114,   131,
      97,   545,    86,    30,    99,    18,    30,   -76,   -76,    91,
     -76,   -76,   -76,    88,   567,   220,   499,   -76,   -76,    10,
     -76,    12,    12,    12,    12,    12,    12,    12,    12,   -76,
      90,    90,    90,    90,   385,   439,   493,   529,    -7,   -76,
     537,   -76,    95,   100,   115,     4,    30,   111,   116,   333,
     -76,   123,   150,   -76,   -76,    30,   127,   128,   -76,   -76,
     229,    72,   129,   -76,   499,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   101,   101,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   137,    30,    30,    30,   -76,   141,   499,
      30,   -76,    15,   139,   142,   209,   145,   -76,   144,   -76,
     209,   148,   283,   -76,   -76,   157,   161,   152,   -76,   154,
      80,   -76,   222,     5,   -76,   -76,   -76,    61,   -76,   -76,
     -76,   -76,   -76,   170,   399,   -76,   174,    81,   192,   209,
     -76,   -76,   -76,   499,   -76,   254,   254,   254,   254,    30,
     499,    30,   178,    64,   -76,   151,   -76,   337,   567,   567,
     567,   567,   179,   -76,   187,   499,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   499,   499,   -76,
     207,   499,   -76,   217,   202,   -76,   -76,   208,   499,    30,
     391,   210,   -76,   -76,   211,   -76,   499,   445,   -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    95,    93,    94,    81,    82,    25,    26,    27,    29,
      28,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    18,    21,     0,     3,     0,     5,
       6,     7,     8,    16,     0,    17,     0,    70,    71,    84,
      83,    89,    90,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    85,    86,     0,    67,     0,     0,
      95,    80,     0,     0,     0,     0,     0,   130,   131,     0,
      23,    24,    51,     0,    22,     0,     0,     1,     2,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    41,
       0,    69,     0,    66,     0,     0,     0,     0,     0,    95,
     115,     0,     0,   112,   113,     0,     0,    57,    20,    96,
       0,     0,    53,    44,     0,    77,    76,    74,    75,    72,
      73,    78,    79,    95,    87,    88,    91,    92,    37,    38,
      39,    40,    36,     0,     0,     0,     0,    46,     0,     0,
       0,   114,     0,     0,     0,     0,     0,    19,     0,    43,
       0,     0,     0,    65,    68,     0,     0,     0,   109,     0,
     122,   123,     0,     0,    62,    60,    42,     0,    56,    49,
      45,    47,    98,     0,    95,   121,     0,     0,    63,     0,
      58,    54,    50,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,     0,    61,     0,   117,   118,
     119,   120,     0,   111,     0,     0,   124,   126,    30,    31,
      32,    33,    34,    35,    64,    99,   116,     0,   129,   125,
     108,   128,   105,   100,     0,   101,   106,     0,     0,     0,
       0,     0,   107,   102,     0,   103,     0,     0,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -75,   -16,   -76,   -54,    -6,   -76,   203,   214,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     107,    85,   -49,   -76,   -76,    -9,   -76,   521,   -76,   -76,
      37,    38,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,    79,   -76,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    76,    72,    28,   224,    29,    30,    31,
      32,    33,   124,   192,    73,    34,   160,   161,   155,   156,
     173,   174,    35,   102,   103,    36,    37,    38,    39,    40,
      41,    42,    43,    62,   193,   230,   233,   237,   244,   246,
     234,   238,    44,    45,    46,   115,   186,    47,   187,   229,
     203,   204,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   120,    63,   101,    61,    58,    59,    99,    65,   107,
      78,   111,   116,    74,    75,    60,     2,     3,    54,    55,
      66,   109,     2,     3,    70,     4,     5,    71,     6,     7,
       8,     9,    10,    60,     2,     3,    70,     4,     5,    71,
     146,    94,    95,    96,    97,    57,   121,   100,    74,   162,
      69,   121,   148,    13,    74,   189,    74,    74,   190,   112,
     147,   153,   122,    67,    23,    13,   123,   158,    90,    91,
      23,   123,   159,    68,   110,    98,     2,     3,    70,     4,
       5,    71,    23,   184,     2,     3,    70,     4,     5,    71,
     164,   165,   166,   133,     2,     3,   169,    74,    50,    51,
      52,    53,    54,    55,    78,    79,    74,    13,   201,   202,
      80,   189,    74,    56,   191,    13,   185,   104,   207,   216,
      92,    93,    54,    55,    23,   201,   202,   134,   135,    57,
     136,   137,    23,   168,   105,    74,    74,    74,   106,   108,
     228,    74,    23,   117,   118,   212,    78,   214,   143,   172,
     144,   145,   231,   152,   172,   218,   219,   220,   221,   222,
     223,    74,    77,   240,   149,     1,     2,     3,   150,     4,
       5,   247,     6,     7,     8,     9,    10,    11,    12,   151,
     154,   -59,   -55,   172,   213,   241,   208,   209,   210,   211,
      74,    78,    74,   163,   167,   170,   171,    13,   175,    14,
     176,   178,    15,    16,    17,    18,   182,   183,    19,    20,
      21,    22,    78,   180,    23,    78,    24,   181,    25,     6,
       7,     8,     9,    10,    78,   188,   194,   200,   205,   215,
      74,    78,     1,     2,     3,   226,     4,     5,   227,     6,
       7,     8,     9,    10,    11,    12,   232,    81,    82,    83,
      84,    85,    86,    87,    88,   235,   236,    60,     2,     3,
     239,     4,     5,   243,    13,   245,    14,   177,   113,    15,
      16,    17,    18,   119,   206,    19,    20,    21,    22,   114,
       0,    23,   217,    24,   157,    25,     1,     2,     3,    13,
       4,     5,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    98,     2,     3,     0,     4,     5,     0,    13,     0,
      14,     0,     0,    15,    16,    17,    18,     0,     0,    19,
      20,    21,    22,     0,     0,    23,     0,    24,   179,    25,
       1,     2,     3,    13,     4,     5,     0,     6,     7,     8,
       9,    10,    11,    12,    50,    51,    52,    53,    54,    55,
      23,    81,    82,    83,    84,    85,    86,    87,    88,    56,
       0,     0,    13,     0,    14,     0,     0,    15,    16,    17,
      18,     0,     0,    19,    20,    21,    22,     0,     0,    23,
      89,    24,   225,    25,     1,     2,     3,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
     195,   196,   197,   198,    54,    55,    13,     0,    14,     0,
       0,    15,    16,    17,    18,   199,     0,    19,    20,    21,
      22,   138,     0,    23,     0,    24,   242,    25,     1,     2,
       3,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
      13,     0,    14,     0,     0,    15,    16,    17,    18,     0,
       0,    19,    20,    21,    22,   139,     0,    23,     0,    24,
     248,    25,     1,     2,     3,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,    13,     0,    14,     0,     0,    15,
      16,    17,    18,     0,     0,    19,    20,    21,    22,   140,
       0,    23,     0,    24,     0,    25,    81,    82,    83,    84,
      85,    86,    87,    88,    81,    82,    83,    84,    85,    86,
      87,    88,    81,    82,    83,    84,    85,    86,   -60,   -60,
       0,     0,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   142,    81,    82,    83,    84,    85,    86,
      87,    88,   125,   126,   127,   128,   129,   130,   131,   132
};

static const yytype_int16 yycheck[] =
{
      16,    76,    52,    57,    13,    11,    12,    56,    52,    63,
      26,    65,    66,    22,    23,     3,     4,     5,    25,    26,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     3,     4,     5,     6,     7,     8,     9,
      36,    50,    51,    52,    53,    52,    36,    56,    57,   124,
       3,    36,   106,    35,    63,    50,    65,    66,    53,    65,
      56,   115,    52,    56,    52,    35,    56,   121,    17,    18,
      52,    56,   121,    56,    56,     3,     4,     5,     6,     7,
       8,     9,    52,     3,     4,     5,     6,     7,     8,     9,
     144,   145,   146,     3,     4,     5,   150,   106,    21,    22,
      23,    24,    25,    26,   120,     3,   115,    35,    44,    45,
      54,    50,   121,    36,    53,    35,   170,     3,   193,    55,
      19,    20,    25,    26,    52,    44,    45,    90,    91,    52,
      92,    93,    52,   149,     3,   144,   145,   146,    52,    40,
     215,   150,    52,    52,    56,   199,   162,   201,    53,   155,
      50,    36,   227,     3,   160,     4,     5,     6,     7,     8,
       9,   170,     0,   238,    53,     3,     4,     5,    52,     7,
       8,   246,    10,    11,    12,    13,    14,    15,    16,    56,
      53,    53,    53,   189,   200,   239,   195,   196,   197,   198,
     199,   207,   201,    56,    53,    56,    54,    35,    53,    37,
      56,    53,    40,    41,    42,    43,    54,    53,    46,    47,
      48,    49,   228,    56,    52,   231,    54,    56,    56,    10,
      11,    12,    13,    14,   240,     3,    56,    53,    36,    51,
     239,   247,     3,     4,     5,    56,     7,     8,    51,    10,
      11,    12,    13,    14,    15,    16,    39,    27,    28,    29,
      30,    31,    32,    33,    34,    38,    54,     3,     4,     5,
      52,     7,     8,    53,    35,    54,    37,   160,    65,    40,
      41,    42,    43,    53,   189,    46,    47,    48,    49,    65,
      -1,    52,   203,    54,    55,    56,     3,     4,     5,    35,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,     8,    -1,    35,    -1,
      37,    -1,    -1,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    -1,    -1,    52,    -1,    54,    55,    56,
       3,     4,     5,    35,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    21,    22,    23,    24,    25,    26,
      52,    27,    28,    29,    30,    31,    32,    33,    34,    36,
      -1,    -1,    35,    -1,    37,    -1,    -1,    40,    41,    42,
      43,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    52,
      56,    54,    55,    56,     3,     4,     5,    -1,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      21,    22,    23,    24,    25,    26,    35,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    36,    -1,    46,    47,    48,
      49,    56,    -1,    52,    -1,    54,    55,    56,     3,     4,
       5,    -1,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    -1,    -1,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    56,    -1,    52,    -1,    54,
      55,    56,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    56,
      -1,    52,    -1,    54,    -1,    56,    27,    28,    29,    30,
      31,    32,    33,    34,    27,    28,    29,    30,    31,    32,
      33,    34,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    27,    28,    29,    30,    31,    32,
      33,    34,    81,    82,    83,    84,    85,    86,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    35,    37,    40,    41,    42,    43,    46,
      47,    48,    49,    52,    54,    56,    58,    59,    62,    64,
      65,    66,    67,    68,    72,    79,    82,    83,    84,    85,
      86,    87,    88,    89,    99,   100,   101,   104,   109,   110,
      21,    22,    23,    24,    25,    26,    36,    52,    62,    62,
       3,    82,    90,    52,    59,    52,    52,    56,    56,     3,
       6,     9,    61,    71,    82,    82,    60,     0,    59,     3,
      54,    27,    28,    29,    30,    31,    32,    33,    34,    56,
      17,    18,    19,    20,    82,    82,    82,    82,     3,    79,
      82,    61,    80,    81,     3,     3,    52,    61,    40,     3,
      56,    61,    62,    64,    65,   102,    61,    52,    56,    53,
      58,    36,    52,    56,    69,    84,    84,    84,    84,    84,
      84,    84,    84,     3,    87,    87,    88,    88,    56,    56,
      56,    56,    56,    53,    50,    36,    36,    56,    61,    53,
      52,    56,     3,    61,    53,    75,    76,    55,    61,    79,
      73,    74,    58,    56,    61,    61,    61,    53,    59,    61,
      56,    54,    62,    77,    78,    53,    56,    77,    53,    55,
      56,    56,    54,    53,     3,    61,   103,   105,     3,    50,
      53,    53,    70,    91,    56,    21,    22,    23,    24,    36,
      53,    44,    45,   107,   108,    36,    78,    58,    82,    82,
      82,    82,    61,    59,    61,    51,    55,   108,     4,     5,
       6,     7,     8,     9,    63,    55,    56,    51,    58,   106,
      92,    58,    39,    93,    97,    38,    54,    94,    98,    52,
      58,    61,    55,    53,    95,    54,    96,    58,    55
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
      87,    87,    87,    88,    88,    88,    88,    90,    91,    92,
      89,    94,    95,    96,    93,    97,    98,    93,    93,    99,
     100,   101,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   105,   106,   104,   107,   107,   108,   108,
     109,   110
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
       1,     3,     3,     1,     1,     1,     3,     0,     0,     0,
      11,     0,     0,     0,    11,     0,     0,     6,     0,     5,
       7,     8,     1,     1,     2,     1,     4,     3,     3,     3,
       3,     1,     0,     0,     0,     9,     2,     1,     4,     3,
       2,     2
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
#line 187 "parser.y"
                                {printf("Expression statement\n");}
#line 1455 "parser.tab.c"
    break;

  case 5: /* statement: assignment_statement  */
#line 188 "parser.y"
                                {printf("Assignment Statement \n");}
#line 1461 "parser.tab.c"
    break;

  case 6: /* statement: var_declaration  */
#line 189 "parser.y"
                                {printf("Variable declaration\n");}
#line 1467 "parser.tab.c"
    break;

  case 16: /* statement: function  */
#line 199 "parser.y"
                        {printf("Function statement\n");}
#line 1473 "parser.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 201 "parser.y"
                   {
		//when open curly bracket is found the scope is opened so scope number is increased
		scopeno++;
		printf("Scope Opened\n");
	
	}
#line 1484 "parser.tab.c"
    break;

  case 19: /* statement: OPENCURL $@1 statements CLOSEDCURL  */
#line 206 "parser.y"
                                {
		//when close curly bracket is found the scope is closed so we use end scope function to close the scope
		// we decrease the scope number
		endscope(scopeno);
		scopeno--;
		printf("Scope Closed\n");
	}
#line 1496 "parser.tab.c"
    break;

  case 20: /* statement: RETURN return_value SEMICOLON  */
#line 214 "parser.y"
                {	printf("Return statement\n");
		}
#line 1503 "parser.tab.c"
    break;

  case 22: /* value: expression  */
#line 222 "parser.y"
{
	(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
	(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).boolval = (yyvsp[0].lexicalstruct).boolval;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).stringval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).type = (yyvsp[0].lexicalstruct).type;

}
#line 1518 "parser.tab.c"
    break;

  case 23: /* value: STRING_VAL  */
#line 232 "parser.y"
            {
	(yyval.lexicalstruct).type = STRINGTYPE;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;

}
#line 1529 "parser.tab.c"
    break;

  case 24: /* value: CHAR_VAL  */
#line 238 "parser.y"
           {
	(yyval.lexicalstruct).type = CHARTYPE;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
 }
#line 1539 "parser.tab.c"
    break;

  case 36: /* assignment_statement: IDENTIFIER EQUAL expression SEMICOLON  */
#line 258 "parser.y"
                  {
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-3].name))==1){
					ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
					scopevar= ptr->data->scope;
					printf("scopevar %d\n",scopevar);
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
				 printsemanticerror("variable is not declared",yylineno);
				 programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
				scopevar= ptr->data->scope;
			}

				//check the types
				if (programerror == false){
				int type = getsymboltype((yyvsp[-3].name));
				if(is_Modifiable((yyvsp[-3].name)) == false){
						 printsemanticerror("variable is not modifiable",yylineno);
				 programerror = true;
				}
				else if (type != (yyvsp[-1].lexicalstruct).type ){
					if(getsymboltype((yyvsp[-3].name)) == BOOLTYPE)
					{
						if(strcmp((yyvsp[-1].lexicalstruct).valueinstring,"0") == 0 )
						{
							Modify_Value((yyvsp[-3].name), "0",scopevar);
						}else
						{
							Modify_Value((yyvsp[-3].name), "1",scopevar);
						}
					}else
					{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
						//update the value of the variable
						printf("value in string %s\n",(yyvsp[-1].lexicalstruct).valueinstring);
						Modify_Value((yyvsp[-3].name), (yyvsp[-1].lexicalstruct).valueinstring,scopevar);
					
				}
				}
		  }
#line 1599 "parser.tab.c"
    break;

  case 37: /* assignment_statement: IDENTIFIER PLUS_EQ expression SEMICOLON  */
#line 314 "parser.y"
                {
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-3].name))==1){
					ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
				scopevar= ptr->data->scope;
			}
			if(programerror == false){
				//check the types
				int type = getsymboltype((yyvsp[-3].name));
				if(is_Modifiable((yyvsp[-3].name)) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != (yyvsp[-1].lexicalstruct).type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue((yyvsp[-3].name),scopevar) + (yyvsp[-1].lexicalstruct).intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue((yyvsp[-3].name),scopevar) + (yyvsp[-1].lexicalstruct).floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
			
		}
#line 1658 "parser.tab.c"
    break;

  case 38: /* assignment_statement: IDENTIFIER MINUS_EQ expression SEMICOLON  */
#line 369 "parser.y"
                {
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-3].name))==1){
					ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
				scopevar= ptr->data->scope;
			}
			if (programerror == false){
				//check the types
				int type = getsymboltype((yyvsp[-3].name));
				if(is_Modifiable((yyvsp[-3].name)) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != (yyvsp[-1].lexicalstruct).type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue((yyvsp[-3].name),scopevar) - (yyvsp[-1].lexicalstruct).intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue((yyvsp[-3].name),scopevar) - (yyvsp[-1].lexicalstruct).floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
		}
#line 1715 "parser.tab.c"
    break;

  case 39: /* assignment_statement: IDENTIFIER MULT_EQ expression SEMICOLON  */
#line 421 "parser.y"
                                                         {
					int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-3].name))==1){
					ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
				scopevar= ptr->data->scope;
			}
			if (programerror == false){
				//check the types
				int type = getsymboltype((yyvsp[-3].name));
				if(is_Modifiable((yyvsp[-3].name)) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != (yyvsp[-1].lexicalstruct).type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue((yyvsp[-3].name),scopevar) * (yyvsp[-1].lexicalstruct).intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue((yyvsp[-3].name),scopevar) * (yyvsp[-1].lexicalstruct).floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
		}
#line 1773 "parser.tab.c"
    break;

  case 40: /* assignment_statement: IDENTIFIER DIV_EQ expression SEMICOLON  */
#line 474 "parser.y"
                                                        {
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-3].name))==1){
					ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
				scopevar= ptr->data->scope;
			}
		if (programerror == false){
				//check the types
				int type = getsymboltype((yyvsp[-3].name));
				if(is_Modifiable((yyvsp[-3].name)) == false){
						printsemanticerror("variable is not modifiable",yylineno);
						programerror = true;
				}
				else if (type != (yyvsp[-1].lexicalstruct).type ){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				else{
					if (type ==INTTYPE){
						int value = getintvalue((yyvsp[-3].name),scopevar) / (yyvsp[-1].lexicalstruct).intval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%d", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else if (type ==FLOATTYPE){
						float value = getfloatvalue((yyvsp[-3].name),scopevar) / (yyvsp[-1].lexicalstruct).floatval;
						char* valueinstring = (char*)malloc(10);
						sprintf(valueinstring, "%f", value);
						Modify_Value((yyvsp[-3].name), valueinstring,scopevar);
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
					}
				}
			}
		}
#line 1830 "parser.tab.c"
    break;

  case 42: /* var_declaration: type IDENTIFIER EQUAL value SEMICOLON  */
#line 531 "parser.y"
                  {
			
			//here we check if the variable is already declared in the scope or not
			if (checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 1){

				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
			printf("identifier name %s\n", (yyvsp[-3].name));
			
			int type = (yyvsp[-4].var_type);// type of the variable
			char* name = (yyvsp[-3].name);// name of the variable
			int value = (yyvsp[-1].lexicalstruct).type;// value(type) of the variable
			printf("value is %d\n",value);
			char* valueinstring = (yyvsp[-1].lexicalstruct).valueinstring; // value in string
			if (type != value){// if the type of the variable and the value type is not same then we return the error
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			else{
				printf("iam here\n");
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-4].var_type),name , valueinstring,scopeno,true ,true, true, false, 0, 0,memaddress);
			
			memaddress++;
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}
			if(programerror ==false){
				PrintPopMem(memaddress-1);
			}
			
		}
		  }
#line 1869 "parser.tab.c"
    break;

  case 43: /* var_declaration: type IDENTIFIER EQUAL function_call  */
#line 566 "parser.y"
                {
			//here we check if the variable is already declared in the scope or not
			if (checkidentifiernameAndScope((yyvsp[-2].name), scopeno) == 1){

				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
			printf("identifier name %s\n", (yyvsp[-2].name));

			int type = (yyvsp[-3].var_type);// type of the variable
			char* name = (yyvsp[-2].name);// name of the variable
			char* valueinstring = NULL; // value in string
			printf("function name isssss  %s\n",(yyvsp[0].lexicalstruct).stringval );
			printf("type isssss  %d\n",(yyvsp[-3].var_type) );
			
			int value = (yyvsp[0].lexicalstruct).type;// value(type) of the variable
			
			if (type != getsymboltype((yyvsp[0].lexicalstruct).stringval) ){// if the type of the variable and the value type is not same then we return the error
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			else{
				printf("iam here\n");
				//we create the symbol data and add it to the symbol table
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-3].var_type),name , valueinstring,scopeno,true ,true, true, false, 0, 0,memaddress);
			memaddress++;
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}
			}
		}
#line 1906 "parser.tab.c"
    break;

  case 44: /* var_declaration: type IDENTIFIER SEMICOLON  */
#line 600 "parser.y"
                                   {
			// same as above 
			if (checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 1){
				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
			int type = (yyvsp[-2].var_type);
			char* name = (yyvsp[-1].name);
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-2].var_type),name , NULL,scopeno, true,false, false, false, 0, 0,memaddress);
			memaddress++;
			createnode(ptr, count++);
			}
		}
#line 1925 "parser.tab.c"
    break;

  case 45: /* constant_declaration: CONST type IDENTIFIER EQUAL value SEMICOLON  */
#line 615 "parser.y"
                                                                     {printf("Constant declaration\n");
			// same as above
			if (checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 1){
				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
			int type = (yyvsp[-4].var_type);

			char* name = (yyvsp[-3].name);
			int value = (yyvsp[-1].lexicalstruct).type;
			char* valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			if (type != value){
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}

			else{//cange the type of the variable to constant type
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
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			//create the symbol data and add it to the symbol table
				struct SymbolData *ptr = initalizesymboldata(type,name , valueinstring,scopeno,true, true, false, false, 0, 0,memaddress);
				memaddress++;
				createnode(ptr, count++);
				printf("count of node %d\n",countnodes());
			}
			}
				}
#line 1969 "parser.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 665 "parser.y"
                                                           {scopeno++;}
#line 1975 "parser.tab.c"
    break;

  case 49: /* $@3: %empty  */
#line 665 "parser.y"
                                                                                             {endscope(scopeno); scopeno--;}
#line 1981 "parser.tab.c"
    break;

  case 50: /* function: function_prototype OPENCURL $@2 statements CLOSEDCURL $@3  */
#line 665 "parser.y"
                                                                                                                             {printf("Function Definition\n");}
#line 1987 "parser.tab.c"
    break;

  case 51: /* return_value: value  */
#line 669 "parser.y"
                        {
				// print the return value
				printf("return value intval %s\n", (yyvsp[0].lexicalstruct).valueinstring);
				(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
				(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
				(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
				(yyval.lexicalstruct).boolval = (yyvsp[0].lexicalstruct).boolval;
				(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).stringval;
				(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
				(yyval.lexicalstruct).type = (yyvsp[0].lexicalstruct).type;
				
			}
#line 2004 "parser.tab.c"
    break;

  case 53: /* $@4: %empty  */
#line 684 "parser.y"
                                {
		//check if the function is already declared or not
		if (checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = (yyvsp[-2].var_type);//type of the function
		char* name = (yyvsp[-1].name);//name of the function
		argcount = 0;
		currentfunctionname = name;
		//create the symbol data and add it to the symbol table but it is not yet implemented
		struct SymbolData *ptr = initalizesymboldata((yyvsp[-2].var_type),name , "",scopeno, false,false, false, true, argcount, 0,memaddress);
		memaddress++;
		createnode(ptr, count++);

	}
#line 2025 "parser.tab.c"
    break;

  case 54: /* function_prototype: type IDENTIFIER OPENBRACKET $@4 parameters CLOSEDBRACKET  */
#line 699 "parser.y"
                                  {
		currentfunctionname = "";
		argcount = 0;
	}
#line 2034 "parser.tab.c"
    break;

  case 55: /* $@5: %empty  */
#line 703 "parser.y"
                                 {
		if (checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = (yyvsp[-2].var_type);
		char* name = (yyvsp[-1].name);
		currentfunctionname = name;
		argcount = 0;
		struct SymbolData *ptr = initalizesymboldata((yyvsp[-2].var_type),name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);

	}
#line 2053 "parser.tab.c"
    break;

  case 56: /* function_prototype: type IDENTIFIER OPENBRACKET $@5 CLOSEDBRACKET  */
#line 716 "parser.y"
                       { currentfunctionname = "";
		argcount = 0;
	}
#line 2061 "parser.tab.c"
    break;

  case 57: /* $@6: %empty  */
#line 719 "parser.y"
                                  {
		if (checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = VOIDTYPE;
		char* name = (yyvsp[-1].name);
		currentfunctionname = name;
		argcount = 0;
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);


	}
#line 2081 "parser.tab.c"
    break;

  case 58: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@6 parameters CLOSEDBRACKET  */
#line 734 "parser.y"
                                                { currentfunctionname = ""; argcount = 0;}
#line 2087 "parser.tab.c"
    break;

  case 59: /* $@7: %empty  */
#line 735 "parser.y"
                                 {
		if (checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 1){
			printf("function name is aleady declared at line %d\n",yylineno);
			return 0;
		}
		int type = VOIDTYPE;
		char* name = (yyvsp[-1].name);
		currentfunctionname = name;
		argcount = 0;
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);
	}
#line 2105 "parser.tab.c"
    break;

  case 60: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@7 CLOSEDBRACKET  */
#line 748 "parser.y"
                      { currentfunctionname = ""; argcount = 0;}
#line 2111 "parser.tab.c"
    break;

  case 63: /* single_parameter: type IDENTIFIER  */
#line 754 "parser.y"
                                                {
							//check if the variable is already declared or not but scope is increased by 1
							//because the varible  will be used in the function so it is in the scope of the function
							// so we increase the scope by 1 locally until the effect of scopeno is increased globaly so you can use it in the function
							/*
							dummy example :
							int a = 0; //global scope and scope number is 0
							int add(int a, int b) // scope number is 1 locally but globally it is 0
							{//scope number is 1 globally
							  -- so the a and b are in the scope number 1 and can be used in the function
								return a+b;
							}
							*/
							if (chekidentifiernameandScopeoutofscope((yyvsp[0].name), scopeno+1) == 1){
								printf("variable is aleady declared\n");
								return 0;
							}
							int type = (yyvsp[-1].var_type);
							char* name = (yyvsp[0].name);
							struct SymbolData *ptr = initalizesymboldata((yyvsp[-1].var_type),name , "",scopeno+1, true,false, false, false, 0, 0,memaddress);
							memaddress++;
							createnode(ptr, count++);
							funcargs[argcount] = type;
							argcount++;
						}
#line 2141 "parser.tab.c"
    break;

  case 64: /* single_parameter: type IDENTIFIER EQUAL constant  */
#line 780 "parser.y"
                                                {
							if (chekidentifiernameandScopeoutofscope((yyvsp[-2].name), scopeno+1) == 1){
								printf("variable is aleady declared\n");
								return 0;
							}
							int type = (yyvsp[-3].var_type);
							char* name = (yyvsp[-2].name);
							int value = (yyvsp[0].lexicalstruct).type;
							char* valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
							if (type != value){
								printf( "Type mismatch\n");
								return 0;
							}
							else{
								struct SymbolData *ptr = initalizesymboldata((yyvsp[-3].var_type),name , valueinstring,scopeno+1, true,false, false, false, 0, 0,memaddress);
								memaddress++;
								createnode(ptr, count++);
							}
						}
#line 2165 "parser.tab.c"
    break;

  case 65: /* function_call: IDENTIFIER OPENBRACKET call_parameters CLOSEDBRACKET SEMICOLON  */
#line 802 "parser.y"
                                                {
							//check if the function is declared or not
							if (checkidentifiernameAndScope((yyvsp[-4].name), scopeno) == 0){
								printf("%s function is not declared\n", (yyvsp[-4].name));
								return 0;
							}
							//check if the function is function or not
							if (is_Function((yyvsp[-4].name)) == false){
								printf("%s is variable is not a function\n", (yyvsp[-4].name));
								return 0;
							}
							(yyval.lexicalstruct).stringval = (yyvsp[-4].name);
						}
#line 2183 "parser.tab.c"
    break;

  case 70: /* expression: boolean_expression  */
#line 825 "parser.y"
                            {
			char* var_name = (yyvsp[0].lexicalstruct).stringval;
			// printf("variable name  =   =  %s\n",var_name);
			if(var_name != NULL){
				if(is_Initialized(var_name) == false){
					printsemanticerror("variable is not initialized",yylineno);
					programerror = true;
				}
				else{
					printf("variable is initialized\n");
				}
			}
		}
#line 2201 "parser.tab.c"
    break;

  case 71: /* expression: arithmetic_expression  */
#line 839 "parser.y"
                {
			// $$.stringval = $1.stringval; // 8aleban malo4 lazma
		}
#line 2209 "parser.tab.c"
    break;

  case 72: /* boolean_expression: expression EQ_EQ arithmetic_expression  */
#line 849 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					if ((yyvsp[-2].lexicalstruct).intval == (yyvsp[0].lexicalstruct).intval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					if ((yyvsp[-2].lexicalstruct).floatval == (yyvsp[0].lexicalstruct).floatval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == CHARTYPE || (yyvsp[-2].lexicalstruct).type == CONSTCHARTYPE){
				if ((yyvsp[0].lexicalstruct).type == CHARTYPE || (yyvsp[0].lexicalstruct).type == CONSTCHARTYPE){
					if ((yyvsp[-2].lexicalstruct).charval == (yyvsp[0].lexicalstruct).charval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == STRINGTYPE){
				if ((yyvsp[0].lexicalstruct).type == STRINGTYPE){
					if (strcmp((yyvsp[-2].lexicalstruct).stringval, (yyvsp[0].lexicalstruct).stringval) == 0){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == BOOLTYPE){
				if ((yyvsp[0].lexicalstruct).type == BOOLTYPE){
					if ((yyvsp[-2].lexicalstruct).boolval == (yyvsp[0].lexicalstruct).boolval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(1);
			}
		}
#line 2306 "parser.tab.c"
    break;

  case 73: /* boolean_expression: expression NE arithmetic_expression  */
#line 942 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					if ((yyvsp[-2].lexicalstruct).intval != (yyvsp[0].lexicalstruct).intval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = true;
					(yyval.lexicalstruct).valueinstring = "1";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					if ((yyvsp[-2].lexicalstruct).floatval != (yyvsp[0].lexicalstruct).floatval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = true;
					(yyval.lexicalstruct).valueinstring = "1";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == CHARTYPE || (yyvsp[-2].lexicalstruct).type == CONSTCHARTYPE){
				if ((yyvsp[0].lexicalstruct).type == CHARTYPE || (yyvsp[0].lexicalstruct).type == CONSTCHARTYPE){
					if ((yyvsp[-2].lexicalstruct).charval != (yyvsp[0].lexicalstruct).charval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = true;
					(yyval.lexicalstruct).valueinstring = "1";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == STRINGTYPE){
				if ((yyvsp[0].lexicalstruct).type == STRINGTYPE){
					if (strcmp((yyvsp[-2].lexicalstruct).stringval, (yyvsp[0].lexicalstruct).stringval) != 0){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
			}else if ((yyvsp[-2].lexicalstruct).type == BOOLTYPE){
				if ((yyvsp[0].lexicalstruct).type == BOOLTYPE){
					if ((yyvsp[-2].lexicalstruct).boolval != (yyvsp[0].lexicalstruct).boolval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = true;
					(yyval.lexicalstruct).valueinstring = "1";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(2);
			}
		}
#line 2398 "parser.tab.c"
    break;

  case 74: /* boolean_expression: expression GE arithmetic_expression  */
#line 1030 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					if ((yyvsp[-2].lexicalstruct).intval >= (yyvsp[0].lexicalstruct).intval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					if ((yyvsp[-2].lexicalstruct).floatval >= (yyvsp[0].lexicalstruct).floatval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(3);
			}
		}
#line 2447 "parser.tab.c"
    break;

  case 75: /* boolean_expression: expression LE arithmetic_expression  */
#line 1075 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					if ((yyvsp[-2].lexicalstruct).intval <= (yyvsp[0].lexicalstruct).intval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					if ((yyvsp[-2].lexicalstruct).floatval <= (yyvsp[0].lexicalstruct).floatval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(4);
			}
		}
#line 2496 "parser.tab.c"
    break;

  case 76: /* boolean_expression: expression GT arithmetic_expression  */
#line 1120 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					if ((yyvsp[-2].lexicalstruct).intval > (yyvsp[0].lexicalstruct).intval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					if ((yyvsp[-2].lexicalstruct).floatval > (yyvsp[0].lexicalstruct).floatval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				printBoolenOp(5);
			}
		}
#line 2545 "parser.tab.c"
    break;

  case 77: /* boolean_expression: expression LT arithmetic_expression  */
#line 1165 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					if ((yyvsp[-2].lexicalstruct).intval < (yyvsp[0].lexicalstruct).intval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
				
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					if ((yyvsp[-2].lexicalstruct).floatval < (yyvsp[0].lexicalstruct).floatval){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
					printBoolenOp(6);
				}
		}
#line 2595 "parser.tab.c"
    break;

  case 78: /* boolean_expression: expression AND arithmetic_expression  */
#line 1211 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == BOOLTYPE){
				if ((yyvsp[0].lexicalstruct).type == BOOLTYPE){
					if ((yyvsp[-2].lexicalstruct).boolval == true && (yyvsp[0].lexicalstruct).boolval == true){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
					printBoolenOp(7);
				}
		}
#line 2628 "parser.tab.c"
    break;

  case 79: /* boolean_expression: expression OR arithmetic_expression  */
#line 1240 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[-2].lexicalstruct).type == BOOLTYPE){
				if ((yyvsp[0].lexicalstruct).type == BOOLTYPE){
					if ((yyvsp[-2].lexicalstruct).boolval == true || (yyvsp[0].lexicalstruct).boolval == true){
						(yyval.lexicalstruct).boolval = true;
						(yyval.lexicalstruct).valueinstring = "1";
					}
					else{
						(yyval.lexicalstruct).boolval = false;
						(yyval.lexicalstruct).valueinstring = "0";
					}
				}
				else{
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
					printBoolenOp(8);
				}
		}
#line 2661 "parser.tab.c"
    break;

  case 80: /* boolean_expression: NOT expression  */
#line 1269 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			//check if the expression is true or false
			//check if both expression are same or not int and constint are same 
			if ((yyvsp[0].lexicalstruct).type == BOOLTYPE){
				if ((yyvsp[0].lexicalstruct).boolval == true){
					(yyval.lexicalstruct).boolval = false;
					(yyval.lexicalstruct).valueinstring = "0";
				}
				else{
					(yyval.lexicalstruct).boolval = true;
					(yyval.lexicalstruct).valueinstring = "1";
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if(programerror==false){
				print
			}
			if(programerror==false){
					printBoolenOp(9);
				}
		}
#line 2691 "parser.tab.c"
    break;

  case 81: /* boolean_expression: TRUE_VAL  */
#line 1295 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = true;
			(yyval.lexicalstruct).valueinstring = "1";
			
					printBoolenOp(10);
				
		}
#line 2704 "parser.tab.c"
    break;

  case 82: /* boolean_expression: FALSE_VAL  */
#line 1304 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = false;
			(yyval.lexicalstruct).valueinstring = "0";
			
					printBoolenOp(11);
			
		}
#line 2717 "parser.tab.c"
    break;

  case 83: /* arithmetic_expression: binary_expression  */
#line 1317 "parser.y"
                          { 
			// $$.stringval = $1.stringval;
			
		 }
#line 2726 "parser.tab.c"
    break;

  case 85: /* unary_expression: IDENTIFIER INC  */
#line 1325 "parser.y"
                      {
			//check if the variable is declared or not
			//check if the variable is declared or not
						int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-1].name))==1){
					ptr =getsymbolAndScope((yyvsp[-1].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-1].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-1].name)) == false){
				printsemanticerror("variable is not initialized",yylineno);
				programerror = true;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-1].name)) == false){
				printsemanticerror("variable is not modifiable",yylineno);
				programerror = true;
			}
			//increment the value of the variable
			if (programerror==false){
			if (getsymboltype((yyvsp[-1].name)) == INTTYPE || getsymboltype((yyvsp[-1].name)) == CONSTINTTYPE){
				int value = getintvalue((yyvsp[-1].name),scopevar) + 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value((yyvsp[-1].name), valueinstring,scopevar);
				(yyval.lexicalstruct).type = INTTYPE;
				(yyval.lexicalstruct).valueinstring = valueinstring;
				(yyval.lexicalstruct).intval = value;
			}
			else if (getsymboltype((yyvsp[-1].name)) == FLOATTYPE || getsymboltype((yyvsp[-1].name)) == CONSTFLOATTYPE){
				float value = getfloatvalue((yyvsp[-1].name),scopevar) + 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value((yyvsp[-1].name), valueinstring,scopevar);
				(yyval.lexicalstruct).type = FLOATTYPE;
				(yyval.lexicalstruct).valueinstring = valueinstring;
				(yyval.lexicalstruct).floatval = value;
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
		}
		}
#line 2791 "parser.tab.c"
    break;

  case 86: /* unary_expression: IDENTIFIER DEC  */
#line 1386 "parser.y"
                {
			//check if the variable is declared or not
						int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-1].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-1].name))==1){
					ptr =getsymbolAndScope((yyvsp[-1].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-1].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-1].name)) == false){
				printsemanticerror("variable is not initialized",yylineno);
				programerror = true;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-1].name)) == false){
				printsemanticerror("variable is not modifiable",yylineno);
				programerror = true;
			}
			//decrement the value of the variable
			if (programerror==false){
			if (getsymboltype((yyvsp[-1].name)) == INTTYPE || getsymboltype((yyvsp[-1].name)) == CONSTINTTYPE){
				int value = getintvalue((yyvsp[-1].name),scopevar) - 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value((yyvsp[-1].name), valueinstring,scopevar);
				(yyval.lexicalstruct).type = INTTYPE;
				(yyval.lexicalstruct).valueinstring = valueinstring;
				(yyval.lexicalstruct).intval = value;
			}
			else if (getsymboltype((yyvsp[-1].name)) == FLOATTYPE || getsymboltype((yyvsp[-1].name)) == CONSTFLOATTYPE){
				float value = getfloatvalue((yyvsp[-1].name),scopevar) - 1;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value((yyvsp[-1].name), valueinstring,scopevar);
				(yyval.lexicalstruct).type = FLOATTYPE;
				(yyval.lexicalstruct).valueinstring = valueinstring;
				(yyval.lexicalstruct).floatval = value;
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			}
		}
#line 2855 "parser.tab.c"
    break;

  case 87: /* binary_expression: binary_expression PLUS term  */
#line 1449 "parser.y"
                {
			//check on the type of the expression
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					int value = (yyvsp[-2].lexicalstruct).intval + (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					(yyval.lexicalstruct).type = INTTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).intval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).intval + (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval + (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval + (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else if ((yyvsp[-2].lexicalstruct).type == STRINGTYPE){
				if ((yyvsp[0].lexicalstruct).type == STRINGTYPE){
					char* value = (char*)malloc(strlen((yyvsp[-2].lexicalstruct).stringval) + strlen((yyvsp[0].lexicalstruct).stringval) + 1);
					strcpy(value, (yyvsp[-2].lexicalstruct).stringval);
					strcat(value, (yyvsp[0].lexicalstruct).stringval);
					(yyval.lexicalstruct).type = STRINGTYPE;
					(yyval.lexicalstruct).valueinstring = value;
					(yyval.lexicalstruct).stringval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(1);
    
			}
			
		}
#line 2929 "parser.tab.c"
    break;

  case 88: /* binary_expression: binary_expression MINUS term  */
#line 1519 "parser.y"
                {
			//check on the type of the expression
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					int value = (yyvsp[-2].lexicalstruct).intval - (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					(yyval.lexicalstruct).type = INTTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).intval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).intval - (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval - (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval - (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(2);
    
			}
		}
#line 2988 "parser.tab.c"
    break;

  case 91: /* term: term MULT factor  */
#line 1579 "parser.y"
                {
			//check on the type of the expression
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					int value = (yyvsp[-2].lexicalstruct).intval * (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					(yyval.lexicalstruct).type = INTTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).intval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).intval * (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval * (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval * (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(3);
	
			}
		}
#line 3047 "parser.tab.c"
    break;

  case 92: /* term: term DIV factor  */
#line 1634 "parser.y"
                {
			//check on the type of the expression
			if ((yyvsp[-2].lexicalstruct).type == INTTYPE || (yyvsp[-2].lexicalstruct).type == CONSTINTTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					int value = (yyvsp[-2].lexicalstruct).intval / (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%d", value);
					(yyval.lexicalstruct).type = INTTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).intval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).intval / (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}
			else if ((yyvsp[-2].lexicalstruct).type == FLOATTYPE || (yyvsp[-2].lexicalstruct).type == CONSTFLOATTYPE){
				if ((yyvsp[0].lexicalstruct).type == INTTYPE || (yyvsp[0].lexicalstruct).type == CONSTINTTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval / (yyvsp[0].lexicalstruct).intval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else if ((yyvsp[0].lexicalstruct).type == FLOATTYPE || (yyvsp[0].lexicalstruct).type == CONSTFLOATTYPE){
					float value = (yyvsp[-2].lexicalstruct).floatval / (yyvsp[0].lexicalstruct).floatval;
					char* valueinstring = (char*)malloc(10);
					sprintf(valueinstring, "%f", value);
					(yyval.lexicalstruct).type = FLOATTYPE;
					(yyval.lexicalstruct).valueinstring = valueinstring;
					(yyval.lexicalstruct).floatval = value;
				}
				else{
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
			}else{
				printsemanticerror("Type mismatch",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(4);
	
			}
		}
#line 3106 "parser.tab.c"
    break;

  case 93: /* factor: INT_NUM  */
#line 1691 "parser.y"
                {
	
			(yyval.lexicalstruct).type = INTTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
			printPushValue((yyvsp[0].lexicalstruct).valueinstring);
		}
#line 3118 "parser.tab.c"
    break;

  case 94: /* factor: FLOAT_VAL  */
#line 1698 "parser.y"
                   {
			(yyval.lexicalstruct).type = FLOATTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
			printPushValue((yyvsp[0].lexicalstruct).valueinstring);
		}
#line 3129 "parser.tab.c"
    break;

  case 95: /* factor: IDENTIFIER  */
#line 1705 "parser.y"
                {
			// check if the variable is declared or not
			//check if the variable is declared or not
						int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[0].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[0].name))==1){
					ptr =getsymbolAndScope((yyvsp[0].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[0].name), scopeno);
				scopevar= ptr->data->scope;
			}
			// check if the variable is initialized or not
			if(is_Initialized((yyvsp[0].name)) == false){
				printsemanticerror("variable is not initialized",yylineno);
				programerror = true;
			}
			if (programerror==false){
			(yyval.lexicalstruct).type= getsymboltype((yyvsp[0].name));
			(yyval.lexicalstruct).valueinstring=getvalue((yyvsp[0].name),scopevar);
			if ((yyval.lexicalstruct).type==INTTYPE || (yyval.lexicalstruct).type==CONSTINTTYPE){
				(yyval.lexicalstruct).intval= getintvalue((yyvsp[0].name),scopevar);
			}
			else if ((yyval.lexicalstruct).type==FLOATTYPE|| (yyval.lexicalstruct).type==CONSTFLOATTYPE){
				(yyval.lexicalstruct).floatval= getfloatvalue((yyvsp[0].name),scopevar);
			}
			else if ((yyval.lexicalstruct).type==CHARTYPE || (yyval.lexicalstruct).type==CONSTCHARTYPE){
				(yyval.lexicalstruct).charval= getcharvalue((yyvsp[0].name),scopevar);
			}
			else if ((yyval.lexicalstruct).type==STRINGTYPE){
				(yyval.lexicalstruct).stringval= getstringvalue((yyvsp[0].name),scopevar);
			}else if((yyval.lexicalstruct).type==BOOLTYPE){
				printf("boolval = %d\n", ptr->data->value);
				(yyval.lexicalstruct).boolval= getboolvalue((yyvsp[0].name),scopevar);
				printf("boolval = %d\n", (yyval.lexicalstruct).boolval);
			}
			if(programerror==false){
				PrintIDentifierAdress(ptr->data->memaddress);
			}
			}
		}
#line 3187 "parser.tab.c"
    break;

  case 96: /* factor: OPENBRACKET expression CLOSEDBRACKET  */
#line 1759 "parser.y"
                {
			(yyval.lexicalstruct).type = (yyvsp[-1].lexicalstruct).type;
			(yyval.lexicalstruct).valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[-1].lexicalstruct).intval;
			(yyval.lexicalstruct).floatval = (yyvsp[-1].lexicalstruct).floatval;
			(yyval.lexicalstruct).charval = (yyvsp[-1].lexicalstruct).charval;
			(yyval.lexicalstruct).stringval = (yyvsp[-1].lexicalstruct).stringval;
			(yyval.lexicalstruct).boolval = (yyvsp[-1].lexicalstruct).boolval;
		}
#line 3201 "parser.tab.c"
    break;

  case 97: /* $@8: %empty  */
#line 1774 "parser.y"
           {Ifcounter++;}
#line 3207 "parser.tab.c"
    break;

  case 98: /* $@9: %empty  */
#line 1774 "parser.y"
                                                                  {scopeno++;printJUMPtype(1);}
#line 3213 "parser.tab.c"
    break;

  case 99: /* $@10: %empty  */
#line 1776 "parser.y"
                           {endscope(scopeno); scopeno--;printJUMPtype(2);}
#line 3219 "parser.tab.c"
    break;

  case 100: /* if_statement: IF $@8 OPENBRACKET value CLOSEDBRACKET OPENCURL $@9 statements CLOSEDCURL $@10 else_if_statement  */
#line 1777 "parser.y"
                {

			printf("If then statement\n");
			// printf("variable name  ==  %s\n",$3.s);
		}
#line 3229 "parser.tab.c"
    break;

  case 101: /* $@11: %empty  */
#line 1785 "parser.y"
                            {printJUMPtype(3);}
#line 3235 "parser.tab.c"
    break;

  case 102: /* $@12: %empty  */
#line 1785 "parser.y"
                                                                                {printJUMPtype(4);}
#line 3241 "parser.tab.c"
    break;

  case 103: /* $@13: %empty  */
#line 1785 "parser.y"
                                                                                                            {scopeno++;}
#line 3247 "parser.tab.c"
    break;

  case 104: /* else_if_statement: else_if_statement ELSEIF $@11 OPENBRACKET value CLOSEDBRACKET $@12 OPENCURL $@13 statements CLOSEDCURL  */
#line 1785 "parser.y"
                                                                                                                                               { endscope(scopeno); scopeno--;}
#line 3253 "parser.tab.c"
    break;

  case 105: /* $@14: %empty  */
#line 1786 "parser.y"
               {printVM("ELSE_",Ifcounter);}
#line 3259 "parser.tab.c"
    break;

  case 106: /* $@15: %empty  */
#line 1786 "parser.y"
                                                     {scopeno++;}
#line 3265 "parser.tab.c"
    break;

  case 107: /* else_if_statement: ELSE $@14 OPENCURL $@15 statements CLOSEDCURL  */
#line 1786 "parser.y"
                                                                                        {endscope(scopeno); scopeno--;}
#line 3271 "parser.tab.c"
    break;

  case 108: /* else_if_statement: %empty  */
#line 1787 "parser.y"
          {printVM("ENDELSE",Ifcounter);}
#line 3277 "parser.tab.c"
    break;

  case 109: /* while_statement: WHILE OPENBRACKET value CLOSEDBRACKET statement  */
#line 1793 "parser.y"
                                                                  {printf("while loop\n");}
#line 3283 "parser.tab.c"
    break;

  case 110: /* do_while_statement: DO statement WHILE OPENBRACKET value CLOSEDBRACKET SEMICOLON  */
#line 1799 "parser.y"
                                                                      {printf("do-while loop\n");}
#line 3289 "parser.tab.c"
    break;

  case 111: /* for_statement: FOR OPENBRACKET for_initialization value SEMICOLON for_expression CLOSEDBRACKET statement  */
#line 1805 "parser.y"
                                                                                                  {printf("for loop\n");}
#line 3295 "parser.tab.c"
    break;

  case 116: /* for_expression: IDENTIFIER EQUAL value SEMICOLON  */
#line 1817 "parser.y"
                 {
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-3].name))==1){
					ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",(yyvsp[-3].name),yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-3].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-3].name)) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-3].name)) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype((yyvsp[-3].name)) == INTTYPE || getsymboltype((yyvsp[-3].name)) == CONSTINTTYPE){
				int value = (yyvsp[-1].lexicalstruct).intval;
				char* valuesstring = (yyvsp[-1].lexicalstruct).valueinstring;
				Modify_Value((yyvsp[-3].name), valuesstring,scopevar);
			}
			else if (getsymboltype((yyvsp[-3].name)) == FLOATTYPE || getsymboltype((yyvsp[-3].name)) == CONSTFLOATTYPE){
				float value = (yyvsp[-1].lexicalstruct).floatval;
				char* valuesstring = (yyvsp[-1].lexicalstruct).valueinstring;
				Modify_Value((yyvsp[-3].name), valuesstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		 }
#line 3348 "parser.tab.c"
    break;

  case 117: /* for_expression: IDENTIFIER PLUS_EQ expression  */
#line 1866 "parser.y"
                {
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-2].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-2].name))==1){
					ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",(yyvsp[-2].name),yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-2].name)) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-2].name)) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype((yyvsp[-2].name)) == INTTYPE || getsymboltype((yyvsp[-2].name)) == CONSTINTTYPE){
				int value = getintvalue((yyvsp[-2].name),scopevar) + (yyvsp[0].lexicalstruct).intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else if (getsymboltype((yyvsp[-2].name)) == FLOATTYPE || getsymboltype((yyvsp[-2].name)) == CONSTFLOATTYPE){
				float value = getfloatvalue((yyvsp[-2].name),scopevar) + (yyvsp[0].lexicalstruct).floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
#line 3403 "parser.tab.c"
    break;

  case 118: /* for_expression: IDENTIFIER MINUS_EQ expression  */
#line 1917 "parser.y"
                {
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-2].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-2].name))==1){
					ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",(yyvsp[-2].name),yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-2].name)) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-2].name)) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype((yyvsp[-2].name)) == INTTYPE || getsymboltype((yyvsp[-2].name)) == CONSTINTTYPE){
				int value = getintvalue((yyvsp[-2].name),scopevar) - (yyvsp[0].lexicalstruct).intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else if (getsymboltype((yyvsp[-2].name)) == FLOATTYPE || getsymboltype((yyvsp[-2].name)) == CONSTFLOATTYPE){
				float value = getfloatvalue((yyvsp[-2].name),scopevar) - (yyvsp[0].lexicalstruct).floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
#line 3458 "parser.tab.c"
    break;

  case 119: /* for_expression: IDENTIFIER MULT_EQ expression  */
#line 1968 "parser.y"
                {
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-2].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-2].name))==1){
					ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",(yyvsp[-2].name),yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-2].name)) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-2].name)) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype((yyvsp[-2].name)) == INTTYPE || getsymboltype((yyvsp[-2].name)) == CONSTINTTYPE){
				int value = getintvalue((yyvsp[-2].name),scopevar) * (yyvsp[0].lexicalstruct).intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else if (getsymboltype((yyvsp[-2].name)) == FLOATTYPE || getsymboltype((yyvsp[-2].name)) == CONSTFLOATTYPE){
				float value = getfloatvalue((yyvsp[-2].name),scopevar) * (yyvsp[0].lexicalstruct).floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
#line 3513 "parser.tab.c"
    break;

  case 120: /* for_expression: IDENTIFIER DIV_EQ expression  */
#line 2019 "parser.y"
                {
			//check if the variable is declared or not
			int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-2].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-2].name))==1){
					ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
					scopevar= ptr->data->scope;
					//check if they expression and the variable are the same type
					if (ptr->data->type!= INTTYPE && ptr->data->type!= FLOATTYPE){
						printf("Type mismatch\n");
						return 0;
					}
				}
				else{
					printf("variable %s is not declared at line %d\n",(yyvsp[-2].name),yylineno);
					return 0;
				}
			}
			else{
				ptr =getsymbolAndScope((yyvsp[-2].name), scopeno);
				scopevar= ptr->data->scope;
			}
			//check if the variable is initialized or not
			if(is_Initialized((yyvsp[-2].name)) == false){
				printf("variable is not initialized\n");
				return 0;
			}
			//check if the variable is modifiable or not
			if(is_Modifiable((yyvsp[-2].name)) == false){
				printf("variable is not modifiable\n");
				return 0;
			}
			if (getsymboltype((yyvsp[-2].name)) == INTTYPE || getsymboltype((yyvsp[-2].name)) == CONSTINTTYPE){
				int value = getintvalue((yyvsp[-2].name),scopevar) / (yyvsp[0].lexicalstruct).intval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%d", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else if (getsymboltype((yyvsp[-2].name)) == FLOATTYPE || getsymboltype((yyvsp[-2].name)) == CONSTFLOATTYPE){
				float value = getfloatvalue((yyvsp[-2].name),scopevar) / (yyvsp[0].lexicalstruct).floatval;
				char* valueinstring = (char*)malloc(10);
				sprintf(valueinstring, "%f", value);
				Modify_Value((yyvsp[-2].name), valueinstring,scopevar);
			}
			else{
				printf("Type mismatch\n");
				return 0;
			}
		}
#line 3568 "parser.tab.c"
    break;

  case 123: /* $@16: %empty  */
#line 2076 "parser.y"
                                                   {scopeno++;}
#line 3574 "parser.tab.c"
    break;

  case 124: /* $@17: %empty  */
#line 2076 "parser.y"
                                                                                    {endscope(scopeno); scopeno--;}
#line 3580 "parser.tab.c"
    break;

  case 125: /* switch_statement: SWITCH OPENBRACKET value CLOSEDBRACKET OPENCURL $@16 case_list CLOSEDCURL $@17  */
#line 2076 "parser.y"
                                                                                                                   {printf("switch case\n");}
#line 3586 "parser.tab.c"
    break;

  case 130: /* break_statement: BREAK SEMICOLON  */
#line 2091 "parser.y"
                                 {printf("Break statement\n");}
#line 3592 "parser.tab.c"
    break;

  case 131: /* continue_statement: CONTINUE SEMICOLON  */
#line 2092 "parser.y"
                                       {printf("Continue statement\n");}
#line 3598 "parser.tab.c"
    break;


#line 3602 "parser.tab.c"

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

#line 2094 "parser.y"



void printPushValue( char* x ){
		FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "PUSH \t%s\n", x);
		fclose(VMcode);
	}
void printBoolenOp( int x ){
	FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		switch(x)
		{
			case 1:
				fprintf(VMcode, "EQUAL\n");
				break;
			case 2:
				fprintf(VMcode, "NOTEQUAL\n");
				break;
			case 3:
				fprintf(VMcode, "GREATERTOREQUAL\n");
				break;	
			case 4:
				fprintf(VMcode, "LESSOREQUAL\n");
				break;
			case 5:
				fprintf(VMcode, "GREATERTHAN\n");
				break;
			case 6:
				fprintf(VMcode, "LESSTHAN\n");
				break;
			case 7:
				fprintf(VMcode, "AND\n");
				break;
			case 8:
				fprintf(VMcode, "OR\n");
				break;
			case 9:
				fprintf(VMcode, "NOT\n");
				break;
			case 10:
				fprintf(VMcode, "TRUE\n");
				break;
			case 11:
				fprintf(VMcode, "FALSE\n");
				break;														
		}
		fclose(VMcode);
}
void printPushOp( int x ){
		FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		switch(x)
		{
			case 1:
				fprintf(VMcode, "ADD\n");
				break;
			case 2:
				fprintf(VMcode, "MNIUS\n");
				break;
			case 3:
				fprintf(VMcode, "MUTI\n");
				break;	
			case 4:
				fprintf(VMcode, "DIV\n");
				break;		
		}

		fclose(VMcode);
	}
void printJUMPtype( int x ){
	FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		switch(x)
		{
			case 1:
				fprintf(VMcode, "JumpFalse ELSE_%d\n",Ifcounter);
				break;
			case 2:
				fprintf(VMcode, "ENDIF_%d:\n",Ifcounter);
				break;
			case 3:
				fprintf(VMcode, "JumpFalse ENDELSIF_%d\n",Ifcounter);
				break;
			case 4:
				fprintf(VMcode, "ENDELSIF_%d:\n",Ifcounter);
				break;		
		}

		fclose(VMcode);
}

void printVM(char * s,int num){
	FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "%s%d\n", s,num);

		fclose(VMcode);
}
	void PrintIDentifierAdress( int y){
			FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "PUSHMEM \t%d\n", y);

		fclose(VMcode);
		}
		void PrintPopMem( int y){
			FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "POPMEM \t%d\n", y);

		fclose(VMcode);
	}

int main (void)
{
	yyparse(); 
	printSymbolTable();
    return 0;
}
