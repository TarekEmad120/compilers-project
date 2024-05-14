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
	int functiontype = 0;
	int memaddress=0;
	int Ifcounter=0;
	int argcount = 0;
	int funcargs[30];
	extern bool programerror = false;


	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	
	void printPushValue( char*  x );
	void printPushOp( int x );
	void PrintPopMem( int x );
	void printBoolenOp( int x );
	void printJUMPtype( int x );
	void printVM(char * s,int num);
	void PrintIDentifierAdress(int y);
	

#line 108 "parser.tab.c"

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
  YYSYMBOL_80_8 = 80,                      /* $@8  */
  YYSYMBOL_call_parameters = 81,           /* call_parameters  */
  YYSYMBOL_call_parameter = 82,            /* call_parameter  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_boolean_expression = 84,        /* boolean_expression  */
  YYSYMBOL_arithmetic_expression = 85,     /* arithmetic_expression  */
  YYSYMBOL_unary_expression = 86,          /* unary_expression  */
  YYSYMBOL_binary_expression = 87,         /* binary_expression  */
  YYSYMBOL_term = 88,                      /* term  */
  YYSYMBOL_factor = 89,                    /* factor  */
  YYSYMBOL_if_statement = 90,              /* if_statement  */
  YYSYMBOL_91_9 = 91,                      /* $@9  */
  YYSYMBOL_92_10 = 92,                     /* $@10  */
  YYSYMBOL_93_11 = 93,                     /* $@11  */
  YYSYMBOL_else_if_statement = 94,         /* else_if_statement  */
  YYSYMBOL_95_12 = 95,                     /* $@12  */
  YYSYMBOL_96_13 = 96,                     /* $@13  */
  YYSYMBOL_97_14 = 97,                     /* $@14  */
  YYSYMBOL_98_15 = 98,                     /* $@15  */
  YYSYMBOL_99_16 = 99,                     /* $@16  */
  YYSYMBOL_while_statement = 100,          /* while_statement  */
  YYSYMBOL_do_while_statement = 101,       /* do_while_statement  */
  YYSYMBOL_for_statement = 102,            /* for_statement  */
  YYSYMBOL_for_initialization = 103,       /* for_initialization  */
  YYSYMBOL_for_expression = 104,           /* for_expression  */
  YYSYMBOL_switch_statement = 105,         /* switch_statement  */
  YYSYMBOL_106_17 = 106,                   /* $@17  */
  YYSYMBOL_107_18 = 107,                   /* $@18  */
  YYSYMBOL_case_list = 108,                /* case_list  */
  YYSYMBOL_case_statement = 109,           /* case_statement  */
  YYSYMBOL_break_statement = 110,          /* break_statement  */
  YYSYMBOL_continue_statement = 111        /* continue_statement  */
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
#define YYLAST   622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

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
       0,   183,   183,   184,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   202,
     214,   217,   222,   233,   239,   245,   245,   245,   245,   245,
     247,   247,   247,   247,   247,   247,   258,   314,   369,   422,
     475,   527,   531,   565,   627,   642,   685,   686,   692,   692,
     692,   695,   723,   726,   726,   748,   748,   768,   768,   786,
     786,   807,   807,   809,   837,   861,   861,   895,   895,   897,
     903,   915,   928,   938,  1031,  1119,  1164,  1209,  1254,  1300,
    1329,  1358,  1384,  1393,  1407,  1411,  1415,  1475,  1538,  1608,
    1663,  1667,  1668,  1723,  1781,  1790,  1798,  1852,  1868,  1868,
    1870,  1868,  1879,  1879,  1879,  1879,  1880,  1880,  1880,  1881,
    1887,  1893,  1899,  1903,  1904,  1905,  1906,  1910,  1959,  2010,
    2061,  2112,  2163,  2164,  2170,  2170,  2170,  2174,  2175,  2179,
    2180,  2185,  2186
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
  "parameters", "single_parameter", "function_call", "$@8",
  "call_parameters", "call_parameter", "expression", "boolean_expression",
  "arithmetic_expression", "unary_expression", "binary_expression", "term",
  "factor", "if_statement", "$@9", "$@10", "$@11", "else_if_statement",
  "$@12", "$@13", "$@14", "$@15", "$@16", "while_statement",
  "do_while_statement", "for_statement", "for_initialization",
  "for_expression", "switch_statement", "$@17", "$@18", "case_list",
  "case_statement", "break_statement", "continue_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     531,   215,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   116,   116,    66,   -74,   -45,   531,   -37,     1,     2,
       8,    59,    13,    66,   -74,   -74,   207,   -74,    64,   -74,
     -74,   -74,   -74,   -74,    29,   -74,   255,   -74,   -74,   -74,
       6,    74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
      66,    66,    66,    66,   -74,   -74,   134,   -74,    88,    93,
      94,   569,    25,    13,    60,    26,    13,   -74,   -74,    51,
     -74,   -74,   -74,    49,   577,   561,   531,   -74,   -74,    24,
     -74,    47,    47,    47,    47,    47,    47,    47,    47,   -74,
     109,   109,   109,   109,   309,   363,   417,   471,    20,   -74,
     525,    13,    73,   -30,    13,    62,    65,   269,   -74,    68,
     131,   -74,   -74,    13,    95,    99,   -74,   -74,   261,    81,
     100,   -74,   531,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,    74,    74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   103,   107,    13,    13,   -74,   105,   531,    13,
     -74,    23,   111,   114,   116,   106,   -74,   115,   -74,   116,
     110,   315,   117,    13,   119,   120,   118,   -74,   112,   191,
     -74,   167,   -42,   -74,   -74,   -74,   -41,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   121,   323,   -74,   125,    78,   143,
     116,   -74,   -74,   -74,   531,   -74,    66,    66,    66,    66,
      13,   531,    13,   130,    53,   -74,   394,   -74,   369,   577,
     577,   577,   577,   126,   -74,   132,   531,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   531,   531,
     -74,   145,   531,   -74,   163,   149,   -74,   -74,   152,   531,
      13,   423,   153,   -74,   -74,   151,   -74,   531,   477,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,    94,    95,    82,    83,    25,    26,    27,    29,
      28,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    18,    21,     0,     3,     0,     5,
       6,     7,     8,    16,     0,    17,     0,    71,    72,    85,
      84,    90,    91,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    86,    87,     0,    65,     0,     0,
      96,    81,     0,     0,     0,     0,     0,   131,   132,     0,
      23,    24,    51,     0,    22,     0,     0,     1,     2,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    41,
       0,    68,     0,     0,     0,     0,     0,    96,   116,     0,
       0,   113,   114,     0,     0,    57,    20,    97,     0,     0,
      53,    44,     0,    78,    77,    75,    76,    73,    74,    79,
      80,    96,    88,    89,    92,    93,    37,    38,    39,    40,
      36,    70,     0,    67,     0,     0,    46,     0,     0,     0,
     115,     0,     0,     0,     0,     0,    19,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,   123,
     124,     0,     0,    62,    60,    42,     0,    56,    49,    66,
      69,    45,    47,    99,     0,    96,   122,     0,     0,    63,
       0,    58,    54,    50,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,     0,    61,     0,   118,
     119,   120,   121,     0,   112,     0,     0,   125,   127,    30,
      31,    32,    33,    34,    35,    64,   100,   117,     0,   130,
     126,   109,   129,   106,   101,     0,   102,   107,     0,     0,
       0,     0,     0,   108,   103,     0,   104,     0,     0,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -73,   -16,   -74,   -38,   -10,   -74,   144,   159,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
      69,    18,   -51,   -74,   -74,   -74,    -9,   -74,   534,   -74,
     -74,    56,    58,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,    30,   -74,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    76,    72,    28,   225,    29,    30,    31,
      32,    33,   122,   193,    73,    34,   159,   160,   154,   155,
     172,   173,    35,   101,   142,   143,    36,    37,    38,    39,
      40,    41,    42,    43,    62,   194,   231,   234,   238,   245,
     247,   235,   239,    44,    45,    46,   113,   187,    47,   188,
     230,   204,   205,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,    58,    59,   118,    61,    99,   145,    63,   190,   190,
      78,   191,   192,    74,    75,    65,    60,     2,     3,    70,
       4,     5,    71,    90,    91,   105,   146,   109,   114,   107,
       2,     3,    70,     4,     5,    71,     6,     7,     8,     9,
      10,    94,    95,    96,    97,    54,    55,   100,    13,   161,
      60,     2,     3,    66,    74,   110,    74,    74,    67,   119,
     119,    13,    69,   141,    68,    23,   147,    79,   158,    60,
       2,     3,    57,     4,     5,   152,   120,   104,    23,   121,
     121,   157,   108,    80,    98,     2,     3,    70,     4,     5,
      71,   102,    74,    92,    93,    74,   103,   202,   203,    23,
     106,    13,    78,   115,    74,   116,   164,   165,   217,   144,
      74,   168,   131,     2,     3,   148,    13,   149,    23,    54,
      55,   208,   202,   203,   150,   180,     6,     7,     8,     9,
      10,   186,   167,    23,   151,    74,    74,    98,     2,     3,
      74,     4,     5,   229,   171,    78,   132,   133,   153,   171,
     134,   135,   -59,   -55,    74,   232,   162,   163,   166,   174,
      74,    23,   213,   177,   215,   184,   241,   169,   170,    13,
     189,   175,   183,   179,   248,   181,   182,   195,   201,   206,
     171,   216,   227,   228,   233,   214,    23,   209,   210,   211,
     212,    74,    78,    74,   185,     2,     3,    70,     4,     5,
      71,   236,   242,   237,   240,   246,   244,    77,   207,   111,
       1,     2,     3,    78,     4,     5,    78,     6,     7,     8,
       9,    10,    11,    12,   112,    78,    13,     0,   176,     0,
       0,    74,    78,     0,   218,     0,    50,    51,    52,    53,
      54,    55,    13,    23,    14,     0,     0,    15,    16,    17,
      18,    56,     0,    19,    20,    21,    22,     0,     0,    23,
       0,    24,     0,    25,     1,     2,     3,    57,     4,     5,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      50,    51,    52,    53,    54,    55,    13,     0,    14,     0,
       0,    15,    16,    17,    18,    56,     0,    19,    20,    21,
      22,    89,     0,    23,     0,    24,   156,    25,     1,     2,
       3,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,   196,   197,   198,   199,    54,    55,
      13,     0,    14,     0,     0,    15,    16,    17,    18,   200,
       0,    19,    20,    21,    22,   136,     0,    23,     0,    24,
     178,    25,     1,     2,     3,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,   219,   220,
     221,   222,   223,   224,    13,     0,    14,     0,     0,    15,
      16,    17,    18,     0,     0,    19,    20,    21,    22,   137,
       0,    23,     0,    24,   226,    25,     1,     2,     3,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,    13,     0,
      14,     0,     0,    15,    16,    17,    18,     0,     0,    19,
      20,    21,    22,   138,     0,    23,     0,    24,   243,    25,
       1,     2,     3,     0,     4,     5,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,    13,     0,    14,     0,     0,    15,    16,    17,
      18,     0,     0,    19,    20,    21,    22,   139,     0,    23,
       0,    24,   249,    25,     1,     2,     3,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,    13,     0,    14,     0,
       0,    15,    16,    17,    18,     0,     0,    19,    20,    21,
      22,   140,     0,    23,     0,    24,     0,    25,    81,    82,
      83,    84,    85,    86,    87,    88,    81,    82,    83,    84,
      85,    86,   -60,   -60,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,   117,   123,   124,   125,   126,   127,
     128,   129,   130
};

static const yytype_int16 yycheck[] =
{
      16,    11,    12,    76,    13,    56,    36,    52,    50,    50,
      26,    53,    53,    22,    23,    52,     3,     4,     5,     6,
       7,     8,     9,    17,    18,    63,    56,    65,    66,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    50,    51,    52,    53,    25,    26,    56,    35,   122,
       3,     4,     5,    52,    63,    65,    65,    66,    56,    36,
      36,    35,     3,   101,    56,    52,   104,     3,   119,     3,
       4,     5,    52,     7,     8,   113,    52,    52,    52,    56,
      56,   119,    56,    54,     3,     4,     5,     6,     7,     8,
       9,     3,   101,    19,    20,   104,     3,    44,    45,    52,
      40,    35,   118,    52,   113,    56,   144,   145,    55,    36,
     119,   149,     3,     4,     5,    53,    35,    52,    52,    25,
      26,   194,    44,    45,    56,   163,    10,    11,    12,    13,
      14,   169,   148,    52,     3,   144,   145,     3,     4,     5,
     149,     7,     8,   216,   154,   161,    90,    91,    53,   159,
      92,    93,    53,    53,   163,   228,    53,    50,    53,    53,
     169,    52,   200,    53,   202,    53,   239,    56,    54,    35,
       3,    56,    54,    56,   247,    56,    56,    56,    53,    36,
     190,    51,    56,    51,    39,   201,    52,   196,   197,   198,
     199,   200,   208,   202,     3,     4,     5,     6,     7,     8,
       9,    38,   240,    54,    52,    54,    53,     0,   190,    65,
       3,     4,     5,   229,     7,     8,   232,    10,    11,    12,
      13,    14,    15,    16,    65,   241,    35,    -1,   159,    -1,
      -1,   240,   248,    -1,   204,    -1,    21,    22,    23,    24,
      25,    26,    35,    52,    37,    -1,    -1,    40,    41,    42,
      43,    36,    -1,    46,    47,    48,    49,    -1,    -1,    52,
      -1,    54,    -1,    56,     3,     4,     5,    52,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      21,    22,    23,    24,    25,    26,    35,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    36,    -1,    46,    47,    48,
      49,    56,    -1,    52,    -1,    54,    55,    56,     3,     4,
       5,    -1,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    21,    22,    23,    24,    25,    26,
      35,    -1,    37,    -1,    -1,    40,    41,    42,    43,    36,
      -1,    46,    47,    48,    49,    56,    -1,    52,    -1,    54,
      55,    56,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,     4,     5,
       6,     7,     8,     9,    35,    -1,    37,    -1,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    56,
      -1,    52,    -1,    54,    55,    56,     3,     4,     5,    -1,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    -1,    -1,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    56,    -1,    52,    -1,    54,    55,    56,
       3,     4,     5,    -1,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    -1,    -1,    40,    41,    42,
      43,    -1,    -1,    46,    47,    48,    49,    56,    -1,    52,
      -1,    54,    55,    56,     3,     4,     5,    -1,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    56,    -1,    52,    -1,    54,    -1,    56,    27,    28,
      29,    30,    31,    32,    33,    34,    27,    28,    29,    30,
      31,    32,    33,    34,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    53,    81,    82,    83,    84,    85,
      86,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    35,    37,    40,    41,    42,    43,    46,
      47,    48,    49,    52,    54,    56,    58,    59,    62,    64,
      65,    66,    67,    68,    72,    79,    83,    84,    85,    86,
      87,    88,    89,    90,   100,   101,   102,   105,   110,   111,
      21,    22,    23,    24,    25,    26,    36,    52,    62,    62,
       3,    83,    91,    52,    59,    52,    52,    56,    56,     3,
       6,     9,    61,    71,    83,    83,    60,     0,    59,     3,
      54,    27,    28,    29,    30,    31,    32,    33,    34,    56,
      17,    18,    19,    20,    83,    83,    83,    83,     3,    79,
      83,    80,     3,     3,    52,    61,    40,     3,    56,    61,
      62,    64,    65,   103,    61,    52,    56,    53,    58,    36,
      52,    56,    69,    85,    85,    85,    85,    85,    85,    85,
      85,     3,    88,    88,    89,    89,    56,    56,    56,    56,
      56,    61,    81,    82,    36,    36,    56,    61,    53,    52,
      56,     3,    61,    53,    75,    76,    55,    61,    79,    73,
      74,    58,    53,    50,    61,    61,    53,    59,    61,    56,
      54,    62,    77,    78,    53,    56,    77,    53,    55,    56,
      61,    56,    56,    54,    53,     3,    61,   104,   106,     3,
      50,    53,    53,    70,    92,    56,    21,    22,    23,    24,
      36,    53,    44,    45,   108,   109,    36,    78,    58,    83,
      83,    83,    83,    61,    59,    61,    51,    55,   109,     4,
       5,     6,     7,     8,     9,    63,    55,    56,    51,    58,
     107,    93,    58,    39,    94,    98,    38,    54,    95,    99,
      52,    58,    61,    55,    53,    96,    54,    97,    58,    55
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
      72,    77,    77,    78,    78,    80,    79,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    86,    87,    87,
      87,    88,    88,    88,    89,    89,    89,    89,    91,    92,
      93,    90,    95,    96,    97,    94,    98,    99,    94,    94,
     100,   101,   102,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   106,   107,   105,   108,   108,   109,
     109,   110,   111
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
       5,     3,     1,     2,     4,     0,     6,     1,     0,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     1,     3,     3,     1,     1,     1,     3,     0,     0,
       0,    11,     0,     0,     0,    11,     0,     0,     6,     0,
       5,     7,     8,     1,     1,     2,     1,     4,     3,     3,
       3,     3,     1,     0,     0,     0,     9,     2,     1,     4,
       3,     2,     2
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
#line 188 "parser.y"
                                {printf("Expression statement\n");}
#line 1461 "parser.tab.c"
    break;

  case 5: /* statement: assignment_statement  */
#line 189 "parser.y"
                                {printf("Assignment Statement \n");}
#line 1467 "parser.tab.c"
    break;

  case 6: /* statement: var_declaration  */
#line 190 "parser.y"
                                {printf("Variable declaration\n");}
#line 1473 "parser.tab.c"
    break;

  case 16: /* statement: function  */
#line 200 "parser.y"
                        {printf("Function statement\n");}
#line 1479 "parser.tab.c"
    break;

  case 17: /* statement: function_call  */
#line 201 "parser.y"
                       {printf("Function call statement\n");}
#line 1485 "parser.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 202 "parser.y"
                   {
		//when open curly bracket is found the scope is opened so scope number is increased
		scopeno++;
		printf("Scope Opened\n");
	
	}
#line 1496 "parser.tab.c"
    break;

  case 19: /* statement: OPENCURL $@1 statements CLOSEDCURL  */
#line 207 "parser.y"
                                {
		//when close curly bracket is found the scope is closed so we use end scope function to close the scope
		// we decrease the scope number
		endscope(scopeno);
		scopeno--;
		printf("Scope Closed\n");
	}
#line 1508 "parser.tab.c"
    break;

  case 20: /* statement: RETURN return_value SEMICOLON  */
#line 215 "parser.y"
                {	printf("Return statement\n");
		}
#line 1515 "parser.tab.c"
    break;

  case 22: /* value: expression  */
#line 223 "parser.y"
{
	(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
	(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).boolval = (yyvsp[0].lexicalstruct).boolval;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).stringval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).type = (yyvsp[0].lexicalstruct).type;

}
#line 1530 "parser.tab.c"
    break;

  case 23: /* value: STRING_VAL  */
#line 233 "parser.y"
            {
	(yyval.lexicalstruct).type = STRINGTYPE;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;

}
#line 1541 "parser.tab.c"
    break;

  case 24: /* value: CHAR_VAL  */
#line 239 "parser.y"
           {
	(yyval.lexicalstruct).type = CHARTYPE;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
 }
#line 1551 "parser.tab.c"
    break;

  case 36: /* assignment_statement: IDENTIFIER EQUAL expression SEMICOLON  */
#line 259 "parser.y"
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
#line 1611 "parser.tab.c"
    break;

  case 37: /* assignment_statement: IDENTIFIER PLUS_EQ expression SEMICOLON  */
#line 315 "parser.y"
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
#line 1670 "parser.tab.c"
    break;

  case 38: /* assignment_statement: IDENTIFIER MINUS_EQ expression SEMICOLON  */
#line 370 "parser.y"
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
#line 1727 "parser.tab.c"
    break;

  case 39: /* assignment_statement: IDENTIFIER MULT_EQ expression SEMICOLON  */
#line 422 "parser.y"
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
#line 1785 "parser.tab.c"
    break;

  case 40: /* assignment_statement: IDENTIFIER DIV_EQ expression SEMICOLON  */
#line 475 "parser.y"
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
#line 1842 "parser.tab.c"
    break;

  case 42: /* var_declaration: type IDENTIFIER EQUAL value SEMICOLON  */
#line 532 "parser.y"
                  {
			
			//here we check if the variable is already declared in the scope or not
			if (checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 1){

				printsemanticerror("variable is aleady declared",yylineno);
				programerror = true;
			}
			
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
			if (programerror == false){
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
#line 1880 "parser.tab.c"
    break;

  case 43: /* var_declaration: type IDENTIFIER EQUAL function_call  */
#line 566 "parser.y"
                {
			struct SymbolNode *ptr ;
			int scopevar = 0;
			printf("function name isssss  %s\n",(yyvsp[0].lexicalstruct).name2);
			if (programerror == false){
			//here we check if the variable is already declared in the scope or not
			if (checkidentifiernameAndScope((yyvsp[0].lexicalstruct).name2, scopeno) == 0){
				if (checkidentifiername((yyvsp[0].lexicalstruct).name2)==1){
					ptr =getsymbolAndScope((yyvsp[0].lexicalstruct).name2, scopeno);
					scopevar= ptr->data->scope;
					if (ptr->data->type != (yyvsp[-3].var_type)){
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
					else if (ptr->data->isfunc == false){
						printsemanticerror("variable is not a function",yylineno);
						programerror = true;
					}

				}
				else{
					printsemanticerror("variable is not declared",yylineno);
					programerror = true;
				}
			}
			else{
				printf("iam here1\n");
				ptr =getsymbolAndScope((yyvsp[0].lexicalstruct).name2, scopeno);
				scopevar= ptr->data->scope;
				if (ptr->data->type != (yyvsp[-3].var_type)){
					printsemanticerror("Type mismatch",yylineno);
					programerror = true;
				}
				if (ptr->data->isfunc == false){
					printsemanticerror("variable is not a function",yylineno);
					programerror = true;
				}
			}
			

			if (programerror == false){
		printf("identifier name %s\n", (yyvsp[-2].name));

			int type = (yyvsp[-3].var_type);// type of the variable
			char* name = (yyvsp[-2].name);// name of the variable
			char* valueinstring = NULL; // value in string
			printf("function name isssss  %s\n",(yyvsp[0].lexicalstruct).name2);
			printf("type isssss  %d\n",(yyvsp[-3].var_type) );
			
			int value = (yyvsp[0].lexicalstruct).type;// value(type) of the variable
				//we create the symbol data and add it to the symbol table
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-3].var_type),name , valueinstring,scopeno,true ,true, true, false, 0, 0,memaddress);
			memaddress++;
    		createnode(ptr, count++);
			printf("count of node %d\n",countnodes());
			}
			}
		}
#line 1943 "parser.tab.c"
    break;

  case 44: /* var_declaration: type IDENTIFIER SEMICOLON  */
#line 627 "parser.y"
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
#line 1962 "parser.tab.c"
    break;

  case 45: /* constant_declaration: CONST type IDENTIFIER EQUAL value SEMICOLON  */
#line 642 "parser.y"
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
#line 2006 "parser.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 692 "parser.y"
                                                           {scopeno++;}
#line 2012 "parser.tab.c"
    break;

  case 49: /* $@3: %empty  */
#line 692 "parser.y"
                                                                                             {endscope(scopeno); scopeno--;currentfunctionname = "";argcount=0;}
#line 2018 "parser.tab.c"
    break;

  case 50: /* function: function_prototype OPENCURL $@2 statements CLOSEDCURL $@3  */
#line 692 "parser.y"
                                                                                                                                                                 {printf("Function Definition\n");}
#line 2024 "parser.tab.c"
    break;

  case 51: /* return_value: value  */
#line 696 "parser.y"
                        {
				if (currentfunctionname == ""){
					printsemanticerror("return statement is not in the function",yylineno);
					programerror = true;
				}
				if (functiontype==VOIDTYPE){
					printsemanticerror("return statement is not in the function",yylineno);
					programerror = true;
				}
				if (programerror == false){
					if (functiontype == (yyvsp[0].lexicalstruct).type){
						//check if the return type is the same as the function type
						//if it is the same then we return the value
						(yyval.lexicalstruct).type = (yyvsp[0].lexicalstruct).type;
						(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
						(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
						(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
						(yyval.lexicalstruct).boolval = (yyvsp[0].lexicalstruct).boolval;
						(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).stringval;
						(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
					}
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
#line 2056 "parser.tab.c"
    break;

  case 53: /* $@4: %empty  */
#line 726 "parser.y"
                                {
		argcount = 0;

	}
#line 2065 "parser.tab.c"
    break;

  case 54: /* function_prototype: type IDENTIFIER OPENBRACKET $@4 parameters CLOSEDBRACKET  */
#line 729 "parser.y"
                                  {
				//check if the function is already declared or not
		if (checkidentifiernameAndScope((yyvsp[-4].name), scopeno) == 1){
			printsemanticerror("function name is aleady declared",yylineno);
			programerror = true;
		}
		if (programerror == false){
			int type = (yyvsp[-5].var_type);//type of the function
			char* name = (yyvsp[-4].name);//name of the function
			currentfunctionname = name;
			functiontype=type;
			//create the symbol data and add it to the symbol table but it is not yet implemented
			struct SymbolData *ptr = initalizesymboldata((yyvsp[-5].var_type),name , "",scopeno, false,false, false, true, argcount, 0,memaddress);
			setfunction(argcount, funcargs, ptr);
			memaddress++;
			createnode(ptr, count++);
		}
		argcount = 0;
	}
#line 2089 "parser.tab.c"
    break;

  case 55: /* $@5: %empty  */
#line 748 "parser.y"
                                 {
	

	}
#line 2098 "parser.tab.c"
    break;

  case 56: /* function_prototype: type IDENTIFIER OPENBRACKET $@5 CLOSEDBRACKET  */
#line 751 "parser.y"
                       { 
		if (checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 1){
			printsemanticerror("function name is aleady declared",yylineno);
			programerror = true;
		}
		if (programerror == false){

		
		int type = (yyvsp[-4].var_type);
		char* name = (yyvsp[-3].name);
		currentfunctionname = name;
		functiontype=type;
		struct SymbolData *ptr = initalizesymboldata((yyvsp[-4].var_type),name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);
		}
	}
#line 2120 "parser.tab.c"
    break;

  case 57: /* $@6: %empty  */
#line 768 "parser.y"
                                 {argcount=0;}
#line 2126 "parser.tab.c"
    break;

  case 58: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@6 parameters CLOSEDBRACKET  */
#line 769 "parser.y"
                                {
			if (checkidentifiernameAndScope((yyvsp[-4].name), scopeno) == 1){
				printsemanticerror("function name is aleady declared",yylineno);
				programerror = true;
			}
			if (programerror == false){
				int type = VOIDTYPE;
				char* name = (yyvsp[-4].name);
				currentfunctionname = name;
				functiontype= type;
				struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
				setfunction(argcount, funcargs, ptr);
				memaddress++;
				createnode(ptr, count++);
				argcount = 0;
			}
		 }
#line 2148 "parser.tab.c"
    break;

  case 59: /* $@7: %empty  */
#line 786 "parser.y"
                                 {
	
	}
#line 2156 "parser.tab.c"
    break;

  case 60: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@7 CLOSEDBRACKET  */
#line 789 "parser.y"
                      { 
		if (checkidentifiernameAndScope((yyvsp[-3].name), scopeno) == 1){
			printsemanticerror("function name is aleady declared",yylineno);
			programerror = true;
		}
		if (programerror == false){
		int type = VOIDTYPE;
		char* name = (yyvsp[-3].name);
		currentfunctionname = name;
		functiontype= type;
		struct SymbolData *ptr = initalizesymboldata(VOIDTYPE,name , "",scopeno, false,false, false, true, argcount, 0,memaddress++);
		memaddress++;
		createnode(ptr, count++);
		 argcount = 0;
		 }
	 }
#line 2177 "parser.tab.c"
    break;

  case 63: /* single_parameter: type IDENTIFIER  */
#line 810 "parser.y"
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
								printsemanticerror("variable is aleady declared",yylineno);
								programerror = true;
							}
							if (programerror == false){
							int type = (yyvsp[-1].var_type);
							char* name = (yyvsp[0].name);
							struct SymbolData *ptr = initalizesymboldata((yyvsp[-1].var_type),name , "",scopeno+1, true,false, false, false, 0, 0,memaddress);
							memaddress++;
							createnode(ptr, count++);
							funcargs[argcount] = type;
							argcount++;
							}
						}
#line 2209 "parser.tab.c"
    break;

  case 64: /* single_parameter: type IDENTIFIER EQUAL constant  */
#line 838 "parser.y"
                                                {
							if (chekidentifiernameandScopeoutofscope((yyvsp[-2].name), scopeno+1) == 1){
								printsemanticerror("variable is aleady declared",yylineno);
								programerror = true;
							}
							int type = (yyvsp[-3].var_type);
							char* name = (yyvsp[-2].name);
							int value = (yyvsp[0].lexicalstruct).type;
							char* valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
							if (type != value){
								printsemanticerror("Type mismatch",yylineno);
								programerror = true;
							}
							if (programerror == false){
								struct SymbolData *ptr = initalizesymboldata((yyvsp[-3].var_type),name , valueinstring,scopeno+1, true,false, false, false, 0, 0,memaddress);
								memaddress++;
								funcargs[argcount] = type;
								argcount++;
								createnode(ptr, count++);
							}
						}
#line 2235 "parser.tab.c"
    break;

  case 65: /* $@8: %empty  */
#line 861 "parser.y"
                                                      {argcount=0;}
#line 2241 "parser.tab.c"
    break;

  case 66: /* function_call: IDENTIFIER OPENBRACKET $@8 call_parameters CLOSEDBRACKET SEMICOLON  */
#line 862 "parser.y"
                                                {
							int scopevar;
			struct SymbolNode *ptr;
			if(checkidentifiernameAndScope((yyvsp[-5].name), scopeno) == 0){
				if (checkidentifiername((yyvsp[-5].name))==1){
					ptr =getsymbolAndScope((yyvsp[-5].name), scopeno);
					scopevar= ptr->data->scope;
				}
				else{
					printsemanticerror("Function variable is not declared",yylineno);
					programerror = true;
				}
			}else{
				ptr =getsymbolAndScope((yyvsp[-5].name), scopeno);
				scopevar= ptr->data->scope;
			}
			if (programerror==false){
			//check on argcount and argtypes using bool checkargs
				if (checkargs(argcount,funcargs,ptr) == false){
					printsemanticerror("Function arguments mismatch",yylineno);
					printf("argcount %d\n",argcount);
					programerror = true;
				
				}
			}
			if (programerror == false){
				(yyval.lexicalstruct).name2 = (yyvsp[-5].name);

			}
			printf("Function call\n");
						}
#line 2277 "parser.tab.c"
    break;

  case 69: /* call_parameter: call_parameter COMMA value  */
#line 898 "parser.y"
                                                {
							int type= (yyvsp[0].lexicalstruct) .type;
							funcargs[argcount] = type;
							argcount++;
						}
#line 2287 "parser.tab.c"
    break;

  case 70: /* call_parameter: value  */
#line 904 "parser.y"
                                                 {
							int type= (yyvsp[0].lexicalstruct) .type;
							funcargs[argcount] = type;
							argcount++;
						 }
#line 2297 "parser.tab.c"
    break;

  case 71: /* expression: boolean_expression  */
#line 915 "parser.y"
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
#line 2315 "parser.tab.c"
    break;

  case 72: /* expression: arithmetic_expression  */
#line 929 "parser.y"
                {
			// $$.stringval = $1.stringval; // 8aleban malo4 lazma
		}
#line 2323 "parser.tab.c"
    break;

  case 73: /* boolean_expression: expression EQ_EQ arithmetic_expression  */
#line 939 "parser.y"
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
#line 2420 "parser.tab.c"
    break;

  case 74: /* boolean_expression: expression NE arithmetic_expression  */
#line 1032 "parser.y"
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
#line 2512 "parser.tab.c"
    break;

  case 75: /* boolean_expression: expression GE arithmetic_expression  */
#line 1120 "parser.y"
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
#line 2561 "parser.tab.c"
    break;

  case 76: /* boolean_expression: expression LE arithmetic_expression  */
#line 1165 "parser.y"
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
#line 2610 "parser.tab.c"
    break;

  case 77: /* boolean_expression: expression GT arithmetic_expression  */
#line 1210 "parser.y"
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
#line 2659 "parser.tab.c"
    break;

  case 78: /* boolean_expression: expression LT arithmetic_expression  */
#line 1255 "parser.y"
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
#line 2709 "parser.tab.c"
    break;

  case 79: /* boolean_expression: expression AND arithmetic_expression  */
#line 1301 "parser.y"
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
#line 2742 "parser.tab.c"
    break;

  case 80: /* boolean_expression: expression OR arithmetic_expression  */
#line 1330 "parser.y"
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
#line 2775 "parser.tab.c"
    break;

  case 81: /* boolean_expression: NOT expression  */
#line 1359 "parser.y"
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
				
			}
			if(programerror==false){
					printBoolenOp(9);
				}
		}
#line 2805 "parser.tab.c"
    break;

  case 82: /* boolean_expression: TRUE_VAL  */
#line 1385 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = true;
			(yyval.lexicalstruct).valueinstring = "1";
			
					printBoolenOp(10);
				
		}
#line 2818 "parser.tab.c"
    break;

  case 83: /* boolean_expression: FALSE_VAL  */
#line 1394 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = false;
			(yyval.lexicalstruct).valueinstring = "0";
			
					printBoolenOp(11);
			
		}
#line 2831 "parser.tab.c"
    break;

  case 84: /* arithmetic_expression: binary_expression  */
#line 1407 "parser.y"
                          { 
			// $$.stringval = $1.stringval;
			
		 }
#line 2840 "parser.tab.c"
    break;

  case 86: /* unary_expression: IDENTIFIER INC  */
#line 1415 "parser.y"
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
#line 2905 "parser.tab.c"
    break;

  case 87: /* unary_expression: IDENTIFIER DEC  */
#line 1476 "parser.y"
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
#line 2969 "parser.tab.c"
    break;

  case 88: /* binary_expression: binary_expression PLUS term  */
#line 1539 "parser.y"
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
#line 3043 "parser.tab.c"
    break;

  case 89: /* binary_expression: binary_expression MINUS term  */
#line 1609 "parser.y"
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
#line 3102 "parser.tab.c"
    break;

  case 92: /* term: term MULT factor  */
#line 1669 "parser.y"
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
#line 3161 "parser.tab.c"
    break;

  case 93: /* term: term DIV factor  */
#line 1724 "parser.y"
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
#line 3220 "parser.tab.c"
    break;

  case 94: /* factor: INT_NUM  */
#line 1781 "parser.y"
                {
	
			(yyval.lexicalstruct).type = INTTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
			if (programerror==false){
				printPushValue((yyvsp[0].lexicalstruct).valueinstring);
			}
		}
#line 3234 "parser.tab.c"
    break;

  case 95: /* factor: FLOAT_VAL  */
#line 1790 "parser.y"
                   {
			(yyval.lexicalstruct).type = FLOATTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
			if (programerror==false){
				printPushValue((yyvsp[0].lexicalstruct).valueinstring);
			}
		}
#line 3247 "parser.tab.c"
    break;

  case 96: /* factor: IDENTIFIER  */
#line 1799 "parser.y"
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
#line 3305 "parser.tab.c"
    break;

  case 97: /* factor: OPENBRACKET expression CLOSEDBRACKET  */
#line 1853 "parser.y"
                {
			(yyval.lexicalstruct).type = (yyvsp[-1].lexicalstruct).type;
			(yyval.lexicalstruct).valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[-1].lexicalstruct).intval;
			(yyval.lexicalstruct).floatval = (yyvsp[-1].lexicalstruct).floatval;
			(yyval.lexicalstruct).charval = (yyvsp[-1].lexicalstruct).charval;
			(yyval.lexicalstruct).stringval = (yyvsp[-1].lexicalstruct).stringval;
			(yyval.lexicalstruct).boolval = (yyvsp[-1].lexicalstruct).boolval;
		}
#line 3319 "parser.tab.c"
    break;

  case 98: /* $@9: %empty  */
#line 1868 "parser.y"
           {Ifcounter++;}
#line 3325 "parser.tab.c"
    break;

  case 99: /* $@10: %empty  */
#line 1868 "parser.y"
                                                                  {scopeno++;printJUMPtype(1);}
#line 3331 "parser.tab.c"
    break;

  case 100: /* $@11: %empty  */
#line 1870 "parser.y"
                           {endscope(scopeno); scopeno--;printJUMPtype(2);}
#line 3337 "parser.tab.c"
    break;

  case 101: /* if_statement: IF $@9 OPENBRACKET value CLOSEDBRACKET OPENCURL $@10 statements CLOSEDCURL $@11 else_if_statement  */
#line 1871 "parser.y"
                {

			printf("If then statement\n");
			// printf("variable name  ==  %s\n",$3.s);
		}
#line 3347 "parser.tab.c"
    break;

  case 102: /* $@12: %empty  */
#line 1879 "parser.y"
                            {printJUMPtype(3);}
#line 3353 "parser.tab.c"
    break;

  case 103: /* $@13: %empty  */
#line 1879 "parser.y"
                                                                                {printJUMPtype(4);}
#line 3359 "parser.tab.c"
    break;

  case 104: /* $@14: %empty  */
#line 1879 "parser.y"
                                                                                                            {scopeno++;}
#line 3365 "parser.tab.c"
    break;

  case 105: /* else_if_statement: else_if_statement ELSEIF $@12 OPENBRACKET value CLOSEDBRACKET $@13 OPENCURL $@14 statements CLOSEDCURL  */
#line 1879 "parser.y"
                                                                                                                                               { endscope(scopeno); scopeno--;}
#line 3371 "parser.tab.c"
    break;

  case 106: /* $@15: %empty  */
#line 1880 "parser.y"
               {printVM("ELSE_",Ifcounter);}
#line 3377 "parser.tab.c"
    break;

  case 107: /* $@16: %empty  */
#line 1880 "parser.y"
                                                     {scopeno++;}
#line 3383 "parser.tab.c"
    break;

  case 108: /* else_if_statement: ELSE $@15 OPENCURL $@16 statements CLOSEDCURL  */
#line 1880 "parser.y"
                                                                                        {endscope(scopeno); scopeno--;}
#line 3389 "parser.tab.c"
    break;

  case 109: /* else_if_statement: %empty  */
#line 1881 "parser.y"
          {printVM("ENDELSE",Ifcounter);}
#line 3395 "parser.tab.c"
    break;

  case 110: /* while_statement: WHILE OPENBRACKET value CLOSEDBRACKET statement  */
#line 1887 "parser.y"
                                                                  {printf("while loop\n");}
#line 3401 "parser.tab.c"
    break;

  case 111: /* do_while_statement: DO statement WHILE OPENBRACKET value CLOSEDBRACKET SEMICOLON  */
#line 1893 "parser.y"
                                                                      {printf("do-while loop\n");}
#line 3407 "parser.tab.c"
    break;

  case 112: /* for_statement: FOR OPENBRACKET for_initialization value SEMICOLON for_expression CLOSEDBRACKET statement  */
#line 1899 "parser.y"
                                                                                                  {printf("for loop\n");}
#line 3413 "parser.tab.c"
    break;

  case 117: /* for_expression: IDENTIFIER EQUAL value SEMICOLON  */
#line 1911 "parser.y"
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
#line 3466 "parser.tab.c"
    break;

  case 118: /* for_expression: IDENTIFIER PLUS_EQ expression  */
#line 1960 "parser.y"
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
#line 3521 "parser.tab.c"
    break;

  case 119: /* for_expression: IDENTIFIER MINUS_EQ expression  */
#line 2011 "parser.y"
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
#line 3576 "parser.tab.c"
    break;

  case 120: /* for_expression: IDENTIFIER MULT_EQ expression  */
#line 2062 "parser.y"
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
#line 3631 "parser.tab.c"
    break;

  case 121: /* for_expression: IDENTIFIER DIV_EQ expression  */
#line 2113 "parser.y"
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
#line 3686 "parser.tab.c"
    break;

  case 124: /* $@17: %empty  */
#line 2170 "parser.y"
                                                   {scopeno++;}
#line 3692 "parser.tab.c"
    break;

  case 125: /* $@18: %empty  */
#line 2170 "parser.y"
                                                                                    {endscope(scopeno); scopeno--;}
#line 3698 "parser.tab.c"
    break;

  case 126: /* switch_statement: SWITCH OPENBRACKET value CLOSEDBRACKET OPENCURL $@17 case_list CLOSEDCURL $@18  */
#line 2170 "parser.y"
                                                                                                                   {printf("switch case\n");}
#line 3704 "parser.tab.c"
    break;

  case 131: /* break_statement: BREAK SEMICOLON  */
#line 2185 "parser.y"
                                 {printf("Break statement\n");}
#line 3710 "parser.tab.c"
    break;

  case 132: /* continue_statement: CONTINUE SEMICOLON  */
#line 2186 "parser.y"
                                       {printf("Continue statement\n");}
#line 3716 "parser.tab.c"
    break;


#line 3720 "parser.tab.c"

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

#line 2188 "parser.y"



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

	yyin = fopen("instructions.txt", "r");
	if(yyin == NULL) {
		printf("can't open input.txt file!\n");
		exit(1);
	}
	//read the input file to parse it 
	yyparse();

	printSymbolTable();
    return 0;
}
