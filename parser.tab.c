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
  int EndIfcounter=0;
	int whileCounter=0;
	int doWhileCounter=0;
	int forCounter=0;
	int switchCounter=0;
	int caseCounter=0;
	int argcount = 0;
	int funcargs[30];
	extern bool programerror = false;
	bool checkBreak=false;

	//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	
	void printPushValue( char*  x );
	void printPushOp( int x );
	void PrintPopMem( int x );
	void printBoolenOp( int x );
	void printJUMPtype( int x );
	void printVM(char * s,int num);
	void PrintIDentifierAdress(int y);
	

#line 114 "parser.tab.c"

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
  YYSYMBOL_Return_Statement = 68,          /* Return_Statement  */
  YYSYMBOL_function = 69,                  /* function  */
  YYSYMBOL_70_2 = 70,                      /* $@2  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_return_value = 72,              /* return_value  */
  YYSYMBOL_function_prototype = 73,        /* function_prototype  */
  YYSYMBOL_74_4 = 74,                      /* $@4  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_76_6 = 76,                      /* $@6  */
  YYSYMBOL_77_7 = 77,                      /* $@7  */
  YYSYMBOL_parameters = 78,                /* parameters  */
  YYSYMBOL_single_parameter = 79,          /* single_parameter  */
  YYSYMBOL_function_call = 80,             /* function_call  */
  YYSYMBOL_81_8 = 81,                      /* $@8  */
  YYSYMBOL_call_parameters = 82,           /* call_parameters  */
  YYSYMBOL_call_parameter = 83,            /* call_parameter  */
  YYSYMBOL_expression = 84,                /* expression  */
  YYSYMBOL_boolean_expression = 85,        /* boolean_expression  */
  YYSYMBOL_arithmetic_expression = 86,     /* arithmetic_expression  */
  YYSYMBOL_unary_expression = 87,          /* unary_expression  */
  YYSYMBOL_binary_expression = 88,         /* binary_expression  */
  YYSYMBOL_term = 89,                      /* term  */
  YYSYMBOL_factor = 90,                    /* factor  */
  YYSYMBOL_if_statement = 91,              /* if_statement  */
  YYSYMBOL_92_9 = 92,                      /* $@9  */
  YYSYMBOL_93_10 = 93,                     /* $@10  */
  YYSYMBOL_94_11 = 94,                     /* $@11  */
  YYSYMBOL_95_12 = 95,                     /* $@12  */
  YYSYMBOL_96_13 = 96,                     /* $@13  */
  YYSYMBOL_elsestatement = 97,             /* elsestatement  */
  YYSYMBOL_98_14 = 98,                     /* $@14  */
  YYSYMBOL_else_if_statement = 99,         /* else_if_statement  */
  YYSYMBOL_100_15 = 100,                   /* $@15  */
  YYSYMBOL_101_16 = 101,                   /* $@16  */
  YYSYMBOL_102_17 = 102,                   /* $@17  */
  YYSYMBOL_103_18 = 103,                   /* $@18  */
  YYSYMBOL_while_statement = 104,          /* while_statement  */
  YYSYMBOL_105_19 = 105,                   /* $@19  */
  YYSYMBOL_106_20 = 106,                   /* $@20  */
  YYSYMBOL_107_21 = 107,                   /* $@21  */
  YYSYMBOL_108_22 = 108,                   /* $@22  */
  YYSYMBOL_109_23 = 109,                   /* $@23  */
  YYSYMBOL_do_while_statement = 110,       /* do_while_statement  */
  YYSYMBOL_111_24 = 111,                   /* $@24  */
  YYSYMBOL_112_25 = 112,                   /* $@25  */
  YYSYMBOL_113_26 = 113,                   /* $@26  */
  YYSYMBOL_114_27 = 114,                   /* $@27  */
  YYSYMBOL_115_28 = 115,                   /* $@28  */
  YYSYMBOL_for_statement = 116,            /* for_statement  */
  YYSYMBOL_117_29 = 117,                   /* $@29  */
  YYSYMBOL_118_30 = 118,                   /* $@30  */
  YYSYMBOL_119_31 = 119,                   /* $@31  */
  YYSYMBOL_120_32 = 120,                   /* $@32  */
  YYSYMBOL_121_33 = 121,                   /* $@33  */
  YYSYMBOL_122_34 = 122,                   /* $@34  */
  YYSYMBOL_123_35 = 123,                   /* $@35  */
  YYSYMBOL_124_36 = 124,                   /* $@36  */
  YYSYMBOL_for_initialization = 125,       /* for_initialization  */
  YYSYMBOL_for_expression = 126,           /* for_expression  */
  YYSYMBOL_switch_statement = 127,         /* switch_statement  */
  YYSYMBOL_128_37 = 128,                   /* $@37  */
  YYSYMBOL_129_38 = 129,                   /* $@38  */
  YYSYMBOL_130_39 = 130,                   /* $@39  */
  YYSYMBOL_131_40 = 131,                   /* $@40  */
  YYSYMBOL_132_41 = 132,                   /* $@41  */
  YYSYMBOL_case_list = 133,                /* case_list  */
  YYSYMBOL_case_statement = 134,           /* case_statement  */
  YYSYMBOL_135_42 = 135,                   /* $@42  */
  YYSYMBOL_136_43 = 136,                   /* $@43  */
  YYSYMBOL_137_44 = 137,                   /* $@44  */
  YYSYMBOL_138_45 = 138,                   /* $@45  */
  YYSYMBOL_break_statement = 139,          /* break_statement  */
  YYSYMBOL_continue_statement = 140        /* continue_statement  */
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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   565

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  279

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
       0,   189,   189,   190,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   208,
     221,   226,   238,   244,   251,   251,   251,   251,   251,   253,
     253,   253,   253,   253,   253,   264,   321,   376,   429,   482,
     534,   538,   572,   634,   649,   692,   693,   700,   718,   734,
     741,   734,   752,   780,   783,   783,   810,   810,   834,   834,
     856,   856,   880,   880,   882,   910,   934,   934,   980,   980,
     982,   988,  1000,  1013,  1023,  1116,  1204,  1249,  1294,  1339,
    1385,  1414,  1443,  1469,  1478,  1492,  1496,  1500,  1560,  1623,
    1693,  1748,  1752,  1753,  1808,  1867,  1876,  1884,  1938,  1954,
    1954,  1955,  1956,  1956,  1954,  1964,  1964,  1965,  1969,  1969,
    1969,  1969,  1969,  1970,  1977,  1977,  1977,  1977,  1977,  1977,
    1983,  1983,  1983,  1983,  1983,  1983,  1989,  1989,  1989,  1990,
    1990,  1990,  1990,  1990,  1989,  1994,  1995,  1996,  1997,  2001,
    2050,  2101,  2152,  2203,  2254,  2255,  2261,  2261,  2261,  2261,
    2261,  2261,  2265,  2266,  2270,  2270,  2270,  2270,  2271,  2271,
    2277,  2278
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
  "constant_declaration", "extern_declartion", "Return_Statement",
  "function", "$@2", "$@3", "return_value", "function_prototype", "$@4",
  "$@5", "$@6", "$@7", "parameters", "single_parameter", "function_call",
  "$@8", "call_parameters", "call_parameter", "expression",
  "boolean_expression", "arithmetic_expression", "unary_expression",
  "binary_expression", "term", "factor", "if_statement", "$@9", "$@10",
  "$@11", "$@12", "$@13", "elsestatement", "$@14", "else_if_statement",
  "$@15", "$@16", "$@17", "$@18", "while_statement", "$@19", "$@20",
  "$@21", "$@22", "$@23", "do_while_statement", "$@24", "$@25", "$@26",
  "$@27", "$@28", "for_statement", "$@29", "$@30", "$@31", "$@32", "$@33",
  "$@34", "$@35", "$@36", "for_initialization", "for_expression",
  "switch_statement", "$@37", "$@38", "$@39", "$@40", "$@41", "case_list",
  "case_statement", "$@42", "$@43", "$@44", "$@45", "break_statement",
  "continue_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     393,   390,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   160,   160,   151,   -87,   -87,   -87,   -87,   -87,   -54,
     -46,    16,   151,   -87,   -87,   249,   -87,    38,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   423,   -87,   -87,   -87,    45,
      47,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   151,
     151,   151,   151,   -87,   -87,   186,   -87,    55,    61,    43,
     515,    -2,   -87,   -87,    23,   -87,   -87,   -87,    34,   391,
     393,   -87,   -87,    -1,    26,    13,    13,    13,    13,    13,
      13,    13,    13,   -87,    40,    40,    40,    40,   431,   439,
     469,   477,   -18,   -87,   485,   101,    51,   -23,   101,    66,
     393,    18,    67,    50,   -87,   267,   108,    70,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,    47,
      47,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,    71,    83,   523,   101,   101,   -87,    82,   101,    80,
     106,   -87,    81,   135,   -87,   -87,   -87,   101,   160,    87,
     -87,    91,   -87,   160,    95,   393,    93,   101,   105,   107,
      97,   104,   110,   -87,     4,   101,   112,   163,   -39,   -87,
     -87,   -87,     6,   -87,   321,   -87,   -87,   -87,   -87,   -87,
     -87,   101,   -87,   133,   152,   160,   -87,   -87,   101,   137,
     393,   393,   -87,   -87,   -87,    92,   -87,   -87,   139,   -87,
     393,   -87,   -87,   -87,    28,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   141,   -87,   144,   143,   -87,   150,     2,
     -87,   -87,   -87,   146,   -87,   101,   -87,   -87,   -87,   -87,
     -87,   176,   -87,   393,   -87,    39,   -87,   183,   -87,   161,
     162,   393,   -87,   -87,   166,   -87,   151,   151,   151,   151,
     101,   393,   -87,   164,   -87,   -87,   523,   523,   523,   523,
     159,   -87,   393,   101,   393,   -87,   -87,   393,   169,   339,
     -87,   170,   -87,   -87,   393,   393,   168,   -87,   -87
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,    95,    96,    83,    84,    24,    25,    26,    28,
      27,     0,     0,     0,    99,   114,   120,   126,   146,     0,
       0,     0,     0,    18,    20,     0,     3,     0,     5,     6,
       7,     8,    16,    49,    17,     0,    72,    73,    86,    85,
      91,    92,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    87,    88,     0,    66,     0,     0,    97,
      82,     0,   115,   121,     0,   147,   160,   161,     0,     0,
       0,     1,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    40,     0,    69,     0,     0,     0,     0,
       0,     0,     0,    58,    98,     0,     0,    54,    43,    50,
      79,    78,    76,    77,    74,    75,    80,    81,    97,    89,
      90,    93,    94,    36,    37,    38,    39,    35,    22,    23,
      71,     0,    68,    21,     0,     0,    45,     0,     0,     0,
      97,   138,     0,     0,   135,   136,   127,     0,     0,     0,
      19,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,     0,     0,     0,     0,     0,    63,
      61,    41,     0,    57,    48,    67,    70,    44,    46,   100,
     116,     0,   128,     0,    64,     0,    59,    55,    53,     0,
       0,     0,   122,   129,   148,     0,    62,    52,     0,    51,
     101,   117,   123,   130,     0,    29,    30,    31,    32,    33,
      34,    65,    47,     0,   118,     0,     0,   154,     0,     0,
     153,   102,   119,     0,   131,     0,   158,   149,   152,   113,
     124,   145,   155,     0,   150,   107,   125,    97,   144,     0,
       0,   159,   151,   108,     0,   103,     0,     0,     0,     0,
       0,     0,   156,     0,   105,   104,   140,   141,   142,   143,
       0,   132,     0,     0,     0,   139,   133,   157,     0,     0,
     134,     0,   106,   109,     0,   110,     0,   111,   112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -64,   -24,   -87,   -86,    -7,   -87,   124,   125,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,    76,    46,   -52,   -87,   -87,   -87,   -13,   -87,   483,
     -87,   -87,     5,    -3,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,    11,   -87,   -87,
     -87,   -87,   -87,   -87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    26,    70,   130,    27,   211,    28,    29,    30,
      31,   189,    32,    74,   155,   198,    33,   153,   154,   148,
     149,   168,   169,    34,    95,   131,   132,    35,    36,    37,
      38,    39,    40,    41,    42,    61,   190,   213,   229,   255,
     245,   264,   235,   253,   274,   276,   278,    43,    62,    99,
     191,   214,   222,    44,    63,   100,   202,   215,   236,    45,
      64,   165,   193,   203,   216,   231,   266,   270,   146,   239,
      46,    65,   102,   204,   234,   242,   219,   220,   225,   240,
     262,   233,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    72,    66,    93,    57,    58,   105,    53,    54,    69,
      67,   185,   137,   135,   186,   142,    59,     2,     3,    68,
     151,   140,     2,     3,   128,     4,     5,   129,     6,     7,
       8,     9,    10,   136,    56,   106,    88,    89,    90,    91,
     106,    73,    94,   118,     2,     3,   217,   218,   158,   159,
      98,   107,   161,    13,   152,   108,   185,   227,    96,   187,
     108,   166,    84,    85,    97,    22,    86,    87,    53,    54,
      22,   176,   217,   218,   141,   101,   139,   243,   244,   182,
     109,    72,   133,   121,   122,   133,   103,   134,   133,   119,
     120,   174,    22,   133,   143,   192,   205,   206,   207,   208,
     209,   210,   197,   -60,    59,     2,     3,   128,     4,     5,
     129,    92,     2,     3,   128,     4,     5,   129,   138,   147,
     162,   133,   133,   -56,   156,   133,   200,    49,    50,    51,
      52,    53,    54,   157,   133,   160,    13,   163,   164,   232,
     170,   167,    55,    13,   133,   238,   167,   171,   173,   175,
      72,   179,   133,    22,    59,     2,     3,   180,     4,     5,
      22,   177,   181,   178,   260,   183,   184,   201,   133,   241,
       6,     7,     8,     9,    10,   133,    72,   268,   167,   237,
       2,     3,   128,     4,     5,   129,    13,   194,   195,    92,
       2,     3,   199,     4,     5,   212,   221,   223,   267,   224,
     269,   226,   230,    22,   246,   247,   248,   249,    53,    54,
     275,    13,   133,   252,   251,   265,   263,    72,   133,   250,
     254,    13,   271,   277,   273,   144,   145,   261,    22,   172,
     228,   196,     0,   256,   257,   258,   259,   133,    22,     0,
       0,     0,     0,    72,     0,    72,     0,     0,     0,    71,
     133,    72,     1,     2,     3,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
       1,     2,     3,     0,     4,     5,     0,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    14,     0,     0,    15,
      16,    17,    18,     0,     0,    19,    20,    21,     0,     0,
       0,    22,    13,    23,    14,    24,     0,    15,    16,    17,
      18,     0,     0,    19,    20,    21,     0,     0,     0,    22,
       0,    23,   150,    24,     1,     2,     3,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,     1,     2,     3,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,     0,    14,     0,
       0,    15,    16,    17,    18,     0,     0,    19,    20,    21,
     188,     0,     0,    22,    13,    23,    14,    24,     0,    15,
      16,    17,    18,     0,     0,    19,    20,    21,     0,     0,
       0,    22,     0,    23,   272,    24,     1,     2,     3,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    11,    12,
       0,    49,    50,    51,    52,    53,    54,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    55,     0,    13,     0,
      14,     0,     0,    15,    16,    17,    18,     0,     0,    19,
      20,    21,    56,     0,   104,    22,     0,    23,     0,    24,
      75,    76,    77,    78,    79,    80,    81,    82,    75,    76,
      77,    78,    79,    80,    81,    82,    75,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,   124,    75,    76,    77,    78,
      79,    80,    81,    82,    75,    76,    77,    78,    79,    80,
      81,    82,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,   127,    75,    76,    77,    78,    79,    80,   -61,   -61,
      75,    76,    77,    78,    79,    80,    81,    82,   110,   111,
     112,   113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      13,    25,    56,    55,    11,    12,    70,    25,    26,    22,
      56,    50,    98,    36,    53,   101,     3,     4,     5,     3,
     106,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    56,    52,    36,    49,    50,    51,    52,
      36,     3,    55,     3,     4,     5,    44,    45,   134,   135,
      52,    52,   138,    35,   106,    56,    50,    55,     3,    53,
      56,   147,    17,    18,     3,    52,    19,    20,    25,    26,
      52,   157,    44,    45,    56,    52,   100,    38,    39,   165,
      54,   105,    95,    86,    87,    98,    52,    36,   101,    84,
      85,   155,    52,   106,   101,   181,     4,     5,     6,     7,
       8,     9,   188,    53,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,    52,    52,
      40,   134,   135,    53,    53,   138,   190,    21,    22,    23,
      24,    25,    26,    50,   147,    53,    35,    56,     3,   225,
      53,   148,    36,    35,   157,   231,   153,    56,    53,    56,
     174,    54,   165,    52,     3,     4,     5,    53,     7,     8,
      52,    56,    52,    56,   250,    53,     3,   191,   181,   233,
      10,    11,    12,    13,    14,   188,   200,   263,   185,     3,
       4,     5,     6,     7,     8,     9,    35,    54,    36,     3,
       4,     5,    55,     7,     8,    56,    55,    53,   262,    56,
     264,    51,    56,    52,    21,    22,    23,    24,    25,    26,
     274,    35,   225,    51,    53,    56,    52,   241,   231,    36,
      54,    35,    53,    55,    54,   101,   101,   251,    52,   153,
     219,   185,    -1,   246,   247,   248,   249,   250,    52,    -1,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,     0,
     263,   275,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    35,    -1,    37,    -1,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    52,    35,    54,    37,    56,    -1,    40,    41,    42,
      43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,     3,     4,     5,    -1,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    35,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    -1,    -1,    52,    35,    54,    37,    56,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,     3,     4,     5,    -1,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    21,    22,    23,    24,    25,    26,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    -1,    35,    -1,
      37,    -1,    -1,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    52,    -1,    53,    52,    -1,    54,    -1,    56,
      27,    28,    29,    30,    31,    32,    33,    34,    27,    28,
      29,    30,    31,    32,    33,    34,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    27,    28,    29,    30,
      31,    32,    33,    34,    27,    28,    29,    30,    31,    32,
      33,    34,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    27,    28,    29,    30,    31,    32,    33,    34,
      27,    28,    29,    30,    31,    32,    33,    34,    75,    76,
      77,    78,    79,    80,    81,    82
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    35,    37,    40,    41,    42,    43,    46,
      47,    48,    52,    54,    56,    58,    59,    62,    64,    65,
      66,    67,    69,    73,    80,    84,    85,    86,    87,    88,
      89,    90,    91,   104,   110,   116,   127,   139,   140,    21,
      22,    23,    24,    25,    26,    36,    52,    62,    62,     3,
      84,    92,   105,   111,   117,   128,    56,    56,     3,    84,
      60,     0,    59,     3,    70,    27,    28,    29,    30,    31,
      32,    33,    34,    56,    17,    18,    19,    20,    84,    84,
      84,    84,     3,    80,    84,    81,     3,     3,    52,   106,
     112,    52,   129,    52,    53,    58,    36,    52,    56,    54,
      86,    86,    86,    86,    86,    86,    86,    86,     3,    89,
      89,    90,    90,    56,    56,    56,    56,    56,     6,     9,
      61,    82,    83,    84,    36,    36,    56,    61,    52,    59,
       3,    56,    61,    62,    64,    65,   125,    52,    76,    77,
      55,    61,    80,    74,    75,    71,    53,    50,    61,    61,
      53,    61,    40,    56,     3,   118,    61,    62,    78,    79,
      53,    56,    78,    53,    58,    56,    61,    56,    56,    54,
      53,    52,    61,    53,     3,    50,    53,    53,    49,    68,
      93,   107,    61,   119,    54,    36,    79,    61,    72,    55,
      58,    59,   113,   120,   130,     4,     5,     6,     7,     8,
       9,    63,    56,    94,   108,   114,   121,    44,    45,   133,
     134,    55,   109,    53,    56,   135,    51,    55,   134,    95,
      56,   122,    61,   138,   131,    99,   115,     3,    61,   126,
     136,    58,   132,    38,    39,    97,    21,    22,    23,    24,
      36,    53,    51,   100,    54,    96,    84,    84,    84,    84,
      61,    59,   137,    52,    98,    56,   123,    58,    61,    58,
     124,    53,    55,    54,   101,    58,   102,    55,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    59,
      59,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    66,    67,    67,    68,    68,    70,
      71,    69,    72,    72,    74,    73,    75,    73,    76,    73,
      77,    73,    78,    78,    79,    79,    81,    80,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    90,    92,
      93,    94,    95,    96,    91,    98,    97,    97,   100,   101,
     102,   103,    99,    99,   105,   106,   107,   108,   109,   104,
     111,   112,   113,   114,   115,   110,   117,   118,   119,   120,
     121,   122,   123,   124,   116,   125,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   128,   129,   130,   131,
     132,   127,   133,   133,   135,   136,   137,   134,   138,   134,
     139,   140
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       3,     5,     4,     3,     6,     4,     6,     3,     0,     0,
       0,     7,     1,     0,     0,     6,     0,     5,     0,     6,
       0,     5,     3,     1,     2,     4,     0,     6,     1,     0,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     1,     3,     3,     1,     1,     1,     3,     0,
       0,     0,     0,     0,    14,     0,     5,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     1,     1,     2,     1,     4,
       3,     3,     3,     3,     1,     0,     0,     0,     0,     0,
       0,    12,     2,     1,     0,     0,     0,     7,     0,     4,
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
#line 194 "parser.y"
                                {printf("Expression statement\n");}
#line 1512 "parser.tab.c"
    break;

  case 5: /* statement: assignment_statement  */
#line 195 "parser.y"
                                {printf("Assignment Statement \n");}
#line 1518 "parser.tab.c"
    break;

  case 6: /* statement: var_declaration  */
#line 196 "parser.y"
                                {printf("Variable declaration\n");}
#line 1524 "parser.tab.c"
    break;

  case 13: /* statement: switch_statement  */
#line 203 "parser.y"
                       {caseCounter=0;}
#line 1530 "parser.tab.c"
    break;

  case 16: /* statement: function  */
#line 206 "parser.y"
                        {printf("Function statement\n");}
#line 1536 "parser.tab.c"
    break;

  case 17: /* statement: function_call  */
#line 207 "parser.y"
                       {printf("Function call statement\n");}
#line 1542 "parser.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 208 "parser.y"
                   {
		//when open curly bracket is found the scope is opened so scope number is increased
		scopeno++;
		printf("Scope Opened\n");
	
	}
#line 1553 "parser.tab.c"
    break;

  case 19: /* statement: OPENCURL $@1 statements CLOSEDCURL  */
#line 213 "parser.y"
                                {
		//when close curly bracket is found the scope is closed so we use end scope function to close the scope
		// we decrease the scope number
		endscope(scopeno);
		scopeno--;
		printf("Scope Closed\n");
	}
#line 1565 "parser.tab.c"
    break;

  case 21: /* value: expression  */
#line 227 "parser.y"
{
	(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
	(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).boolval = (yyvsp[0].lexicalstruct).boolval;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).stringval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).type = (yyvsp[0].lexicalstruct).type;
	//PrintIDentifierAdress($$.intval);

}
#line 1581 "parser.tab.c"
    break;

  case 22: /* value: STRING_VAL  */
#line 238 "parser.y"
            {
	(yyval.lexicalstruct).type = STRINGTYPE;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;

}
#line 1592 "parser.tab.c"
    break;

  case 23: /* value: CHAR_VAL  */
#line 244 "parser.y"
           {
	(yyval.lexicalstruct).type = CHARTYPE;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
	//PrintIDentifierAdress($$.charval);
 }
#line 1603 "parser.tab.c"
    break;

  case 35: /* assignment_statement: IDENTIFIER EQUAL expression SEMICOLON  */
#line 265 "parser.y"
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
				PrintPopMem(ptr->data->memaddress);
				}
		  }
#line 1664 "parser.tab.c"
    break;

  case 36: /* assignment_statement: IDENTIFIER PLUS_EQ expression SEMICOLON  */
#line 322 "parser.y"
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
#line 1723 "parser.tab.c"
    break;

  case 37: /* assignment_statement: IDENTIFIER MINUS_EQ expression SEMICOLON  */
#line 377 "parser.y"
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
#line 1780 "parser.tab.c"
    break;

  case 38: /* assignment_statement: IDENTIFIER MULT_EQ expression SEMICOLON  */
#line 429 "parser.y"
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
#line 1838 "parser.tab.c"
    break;

  case 39: /* assignment_statement: IDENTIFIER DIV_EQ expression SEMICOLON  */
#line 482 "parser.y"
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
#line 1895 "parser.tab.c"
    break;

  case 41: /* var_declaration: type IDENTIFIER EQUAL value SEMICOLON  */
#line 539 "parser.y"
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
#line 1933 "parser.tab.c"
    break;

  case 42: /* var_declaration: type IDENTIFIER EQUAL function_call  */
#line 573 "parser.y"
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
#line 1996 "parser.tab.c"
    break;

  case 43: /* var_declaration: type IDENTIFIER SEMICOLON  */
#line 634 "parser.y"
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
#line 2015 "parser.tab.c"
    break;

  case 44: /* constant_declaration: CONST type IDENTIFIER EQUAL value SEMICOLON  */
#line 649 "parser.y"
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
#line 2059 "parser.tab.c"
    break;

  case 47: /* Return_Statement: RETURN return_value SEMICOLON  */
#line 701 "parser.y"
{	
						printf("Return statement\n");
						char *str4 = currentfunctionname;
						char *str3 = malloc(strlen("jmp return_") + strlen(str4) + 1);
						strcpy(str3, "jmp return_");
						strcat(str3, str4);
						printf("str333333333333333333 %s\n",str3);
						printVM( str3 , -1 );
						if(scopeno > 1 ){
						char* str = malloc(strlen("return_label_") + strlen(str4) + strlen(":") + 1);
						strcpy(str, "return_label_");
						strcat(str, str4);
						strcat(str, ":");
						printVM(str,-1);
						}
}
#line 2080 "parser.tab.c"
    break;

  case 48: /* Return_Statement: %empty  */
#line 718 "parser.y"
                                        {	char *str4 = currentfunctionname;
						char *str3 = malloc(strlen("jmp return_") + strlen(str4) + 1);
						strcpy(str3, "jmp return_");
						strcat(str3, str4);
						printf("str333333333333333333 %s\n",str3);
						printVM( str3 , -1 );

						if(scopeno > 1 ){
						char* str = malloc(strlen("return_label_") + strlen(str4) + strlen(":") + 1);
						strcpy(str, "return_label_");
						strcat(str, str4);
						strcat(str, ":");
						printVM(str,-1);
						}
					}
#line 2100 "parser.tab.c"
    break;

  case 49: /* $@2: %empty  */
#line 734 "parser.y"
                                                   {
								if(scopeno > 0){
								char *str4 = currentfunctionname;	
								char* str = malloc(strlen("jmp return_label_") + strlen(str4) + 1);
								strcpy(str, "jmp return_label_");
								strcat(str, str4);
								printVM(str,-1);}
}
#line 2113 "parser.tab.c"
    break;

  case 50: /* $@3: %empty  */
#line 741 "parser.y"
          {scopeno++;}
#line 2119 "parser.tab.c"
    break;

  case 51: /* function: function_prototype $@2 OPENCURL $@3 statements Return_Statement CLOSEDCURL  */
#line 742 "parser.y"
{
	endscope(scopeno); 
	scopeno--;
	currentfunctionname = "";
	argcount=0;

	printf("Function Definition\n");
}
#line 2132 "parser.tab.c"
    break;

  case 52: /* return_value: value  */
#line 753 "parser.y"
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
#line 2164 "parser.tab.c"
    break;

  case 54: /* $@4: %empty  */
#line 783 "parser.y"
                                 { 
		
		char *str = malloc(strlen(":") + strlen((yyvsp[-1].name)) + 1);
		strcpy(str, (yyvsp[-1].name));
		strcat(str, ":");
		printVM(str,-1);
		argcount = 0;

	}
#line 2178 "parser.tab.c"
    break;

  case 55: /* function_prototype: type IDENTIFIER OPENBRACKET $@4 parameters CLOSEDBRACKET  */
#line 791 "parser.y"
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
#line 2202 "parser.tab.c"
    break;

  case 56: /* $@5: %empty  */
#line 810 "parser.y"
                                 {
	
		char *str = malloc(strlen(":") + strlen((yyvsp[-1].name)) + 1);
		strcpy(str, (yyvsp[-1].name));
		strcat(str, ":");
		printVM(str,-1);

	}
#line 2215 "parser.tab.c"
    break;

  case 57: /* function_prototype: type IDENTIFIER OPENBRACKET $@5 CLOSEDBRACKET  */
#line 817 "parser.y"
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
#line 2237 "parser.tab.c"
    break;

  case 58: /* $@6: %empty  */
#line 834 "parser.y"
                                 {argcount=0;}
#line 2243 "parser.tab.c"
    break;

  case 59: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@6 parameters CLOSEDBRACKET  */
#line 835 "parser.y"
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
				char *str = malloc(strlen(":") + strlen((yyvsp[-4].name)) + 1);
				strcpy(str, (yyvsp[-4].name));
				strcat(str, ":");
				printVM(str,-1);
			}
		 }
#line 2269 "parser.tab.c"
    break;

  case 60: /* $@7: %empty  */
#line 856 "parser.y"
                                 {
		char *str = malloc(strlen(":") + strlen((yyvsp[-1].name)) + 1);
		strcpy(str, (yyvsp[-1].name));
		strcat(str, ":");
		printVM(str,-1);
	}
#line 2280 "parser.tab.c"
    break;

  case 61: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@7 CLOSEDBRACKET  */
#line 862 "parser.y"
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
#line 2301 "parser.tab.c"
    break;

  case 64: /* single_parameter: type IDENTIFIER  */
#line 883 "parser.y"
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
#line 2333 "parser.tab.c"
    break;

  case 65: /* single_parameter: type IDENTIFIER EQUAL constant  */
#line 911 "parser.y"
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
#line 2359 "parser.tab.c"
    break;

  case 66: /* $@8: %empty  */
#line 934 "parser.y"
                                                      {argcount=0;}
#line 2365 "parser.tab.c"
    break;

  case 67: /* function_call: IDENTIFIER OPENBRACKET $@8 call_parameters CLOSEDBRACKET SEMICOLON  */
#line 935 "parser.y"
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

							char *str = malloc(strlen("call ") + strlen((yyvsp[-5].name)) + 1);
							strcpy(str, "call ");
							strcat(str, (yyvsp[-5].name));
							printVM(str,-1);


							char *str1 = malloc(strlen("return_") + strlen((yyvsp[-5].name)) + strlen(":") + 1);
							strcpy(str1, "return_");
							strcat(str1, (yyvsp[-5].name));
							strcat(str1, ":");
							printVM(str1,-1);
						}
#line 2413 "parser.tab.c"
    break;

  case 70: /* call_parameter: call_parameter COMMA value  */
#line 983 "parser.y"
                                                {
							int type= (yyvsp[0].lexicalstruct) .type;
							funcargs[argcount] = type;
							argcount++;
						}
#line 2423 "parser.tab.c"
    break;

  case 71: /* call_parameter: value  */
#line 989 "parser.y"
                                                 {
							int type= (yyvsp[0].lexicalstruct) .type;
							funcargs[argcount] = type;
							argcount++;
						 }
#line 2433 "parser.tab.c"
    break;

  case 72: /* expression: boolean_expression  */
#line 1000 "parser.y"
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
#line 2451 "parser.tab.c"
    break;

  case 73: /* expression: arithmetic_expression  */
#line 1014 "parser.y"
                {
			// $$.stringval = $1.stringval; // 8aleban malo4 lazma
		}
#line 2459 "parser.tab.c"
    break;

  case 74: /* boolean_expression: expression EQ_EQ arithmetic_expression  */
#line 1024 "parser.y"
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
#line 2556 "parser.tab.c"
    break;

  case 75: /* boolean_expression: expression NE arithmetic_expression  */
#line 1117 "parser.y"
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
#line 2648 "parser.tab.c"
    break;

  case 76: /* boolean_expression: expression GE arithmetic_expression  */
#line 1205 "parser.y"
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
#line 2697 "parser.tab.c"
    break;

  case 77: /* boolean_expression: expression LE arithmetic_expression  */
#line 1250 "parser.y"
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
#line 2746 "parser.tab.c"
    break;

  case 78: /* boolean_expression: expression GT arithmetic_expression  */
#line 1295 "parser.y"
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
#line 2795 "parser.tab.c"
    break;

  case 79: /* boolean_expression: expression LT arithmetic_expression  */
#line 1340 "parser.y"
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
#line 2845 "parser.tab.c"
    break;

  case 80: /* boolean_expression: expression AND arithmetic_expression  */
#line 1386 "parser.y"
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
#line 2878 "parser.tab.c"
    break;

  case 81: /* boolean_expression: expression OR arithmetic_expression  */
#line 1415 "parser.y"
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
#line 2911 "parser.tab.c"
    break;

  case 82: /* boolean_expression: NOT expression  */
#line 1444 "parser.y"
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
#line 2941 "parser.tab.c"
    break;

  case 83: /* boolean_expression: TRUE_VAL  */
#line 1470 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = true;
			(yyval.lexicalstruct).valueinstring = "1";
			
					printBoolenOp(10);
				
		}
#line 2954 "parser.tab.c"
    break;

  case 84: /* boolean_expression: FALSE_VAL  */
#line 1479 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = false;
			(yyval.lexicalstruct).valueinstring = "0";
			
					printBoolenOp(11);
			
		}
#line 2967 "parser.tab.c"
    break;

  case 85: /* arithmetic_expression: binary_expression  */
#line 1492 "parser.y"
                          { 
			// $$.stringval = $1.stringval;
			
		 }
#line 2976 "parser.tab.c"
    break;

  case 87: /* unary_expression: IDENTIFIER INC  */
#line 1500 "parser.y"
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
#line 3041 "parser.tab.c"
    break;

  case 88: /* unary_expression: IDENTIFIER DEC  */
#line 1561 "parser.y"
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
#line 3105 "parser.tab.c"
    break;

  case 89: /* binary_expression: binary_expression PLUS term  */
#line 1624 "parser.y"
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
#line 3179 "parser.tab.c"
    break;

  case 90: /* binary_expression: binary_expression MINUS term  */
#line 1694 "parser.y"
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
#line 3238 "parser.tab.c"
    break;

  case 93: /* term: term MULT factor  */
#line 1754 "parser.y"
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
#line 3297 "parser.tab.c"
    break;

  case 94: /* term: term DIV factor  */
#line 1809 "parser.y"
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
#line 3356 "parser.tab.c"
    break;

  case 95: /* factor: INT_NUM  */
#line 1867 "parser.y"
                {
	
			(yyval.lexicalstruct).type = INTTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
			if (programerror==false){
				 printPushValue((yyvsp[0].lexicalstruct).valueinstring);
			}
		}
#line 3370 "parser.tab.c"
    break;

  case 96: /* factor: FLOAT_VAL  */
#line 1876 "parser.y"
                   {
			(yyval.lexicalstruct).type = FLOATTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
			if (programerror==false){
				printPushValue((yyvsp[0].lexicalstruct).valueinstring);
			}
		}
#line 3383 "parser.tab.c"
    break;

  case 97: /* factor: IDENTIFIER  */
#line 1885 "parser.y"
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
#line 3441 "parser.tab.c"
    break;

  case 98: /* factor: OPENBRACKET expression CLOSEDBRACKET  */
#line 1939 "parser.y"
                {
			(yyval.lexicalstruct).type = (yyvsp[-1].lexicalstruct).type;
			(yyval.lexicalstruct).valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[-1].lexicalstruct).intval;
			(yyval.lexicalstruct).floatval = (yyvsp[-1].lexicalstruct).floatval;
			(yyval.lexicalstruct).charval = (yyvsp[-1].lexicalstruct).charval;
			(yyval.lexicalstruct).stringval = (yyvsp[-1].lexicalstruct).stringval;
			(yyval.lexicalstruct).boolval = (yyvsp[-1].lexicalstruct).boolval;
		}
#line 3455 "parser.tab.c"
    break;

  case 99: /* $@9: %empty  */
#line 1954 "parser.y"
           {Ifcounter++;}
#line 3461 "parser.tab.c"
    break;

  case 100: /* $@10: %empty  */
#line 1954 "parser.y"
                                                                  {scopeno++;printVM("JumpFalse EndOFSection",Ifcounter);}
#line 3467 "parser.tab.c"
    break;

  case 101: /* $@11: %empty  */
#line 1955 "parser.y"
                           {printVM("Jump EndIF",EndIfcounter);}
#line 3473 "parser.tab.c"
    break;

  case 102: /* $@12: %empty  */
#line 1956 "parser.y"
                           {endscope(scopeno); scopeno--;printVM("EndOFSection",Ifcounter);}
#line 3479 "parser.tab.c"
    break;

  case 103: /* $@13: %empty  */
#line 1956 "parser.y"
                                                                                                                              {printVM("EndIF",EndIfcounter);EndIfcounter++;}
#line 3485 "parser.tab.c"
    break;

  case 104: /* if_statement: IF $@9 OPENBRACKET value CLOSEDBRACKET OPENCURL $@10 statements $@11 CLOSEDCURL $@12 else_if_statement elsestatement $@13  */
#line 1957 "parser.y"
                {

			printf("If then statement\n");
			// printf("variable name  ==  %s\n",$3.s);
		}
#line 3495 "parser.tab.c"
    break;

  case 105: /* $@14: %empty  */
#line 1964 "parser.y"
                             {scopeno++;}
#line 3501 "parser.tab.c"
    break;

  case 106: /* elsestatement: ELSE OPENCURL $@14 statements CLOSEDCURL  */
#line 1964 "parser.y"
                                                               {endscope(scopeno); scopeno--;}
#line 3507 "parser.tab.c"
    break;

  case 108: /* $@15: %empty  */
#line 1969 "parser.y"
                             {Ifcounter++;}
#line 3513 "parser.tab.c"
    break;

  case 109: /* $@16: %empty  */
#line 1969 "parser.y"
                                                                                       {scopeno++;  printVM("JumpFalse EndOFSection",Ifcounter); }
#line 3519 "parser.tab.c"
    break;

  case 110: /* $@17: %empty  */
#line 1969 "parser.y"
                                                                                                                                                                {printVM("Jump EndIF",EndIfcounter);}
#line 3525 "parser.tab.c"
    break;

  case 111: /* $@18: %empty  */
#line 1969 "parser.y"
                                                                                                                                                                                                                  {printVM("EndOFSection",Ifcounter);}
#line 3531 "parser.tab.c"
    break;

  case 112: /* else_if_statement: else_if_statement ELSEIF $@15 OPENBRACKET value CLOSEDBRACKET OPENCURL $@16 statements $@17 CLOSEDCURL $@18  */
#line 1969 "parser.y"
                                                                                                                                                                                                                                                       { endscope(scopeno); scopeno--;}
#line 3537 "parser.tab.c"
    break;

  case 114: /* $@19: %empty  */
#line 1977 "parser.y"
                      {whileCounter++;}
#line 3543 "parser.tab.c"
    break;

  case 115: /* $@20: %empty  */
#line 1977 "parser.y"
                                        {printJUMPtype(5);}
#line 3549 "parser.tab.c"
    break;

  case 116: /* $@21: %empty  */
#line 1977 "parser.y"
                                                                                              {printJUMPtype(7);}
#line 3555 "parser.tab.c"
    break;

  case 117: /* $@22: %empty  */
#line 1977 "parser.y"
                                                                                                                            {printJUMPtype(8);}
#line 3561 "parser.tab.c"
    break;

  case 118: /* $@23: %empty  */
#line 1977 "parser.y"
                                                                                                                                                 {printJUMPtype(6);}
#line 3567 "parser.tab.c"
    break;

  case 119: /* while_statement: WHILE $@19 $@20 OPENBRACKET value CLOSEDBRACKET $@21 statement $@22 $@23  */
#line 1977 "parser.y"
                                                                                                                                                                     {printf("while loop\n");}
#line 3573 "parser.tab.c"
    break;

  case 120: /* $@24: %empty  */
#line 1983 "parser.y"
           {doWhileCounter++;}
#line 3579 "parser.tab.c"
    break;

  case 121: /* $@25: %empty  */
#line 1983 "parser.y"
                               {printJUMPtype(9);}
#line 3585 "parser.tab.c"
    break;

  case 122: /* $@26: %empty  */
#line 1983 "parser.y"
                                                                                       {printJUMPtype(10);}
#line 3591 "parser.tab.c"
    break;

  case 123: /* $@27: %empty  */
#line 1983 "parser.y"
                                                                                                            {printJUMPtype(11);}
#line 3597 "parser.tab.c"
    break;

  case 124: /* $@28: %empty  */
#line 1983 "parser.y"
                                                                                                                                                         {printJUMPtype(12);}
#line 3603 "parser.tab.c"
    break;

  case 125: /* do_while_statement: DO $@24 $@25 statement WHILE OPENBRACKET value $@26 $@27 CLOSEDBRACKET SEMICOLON $@28  */
#line 1983 "parser.y"
                                                                                                                                                                              {printf("do-while loop\n");}
#line 3609 "parser.tab.c"
    break;

  case 126: /* $@29: %empty  */
#line 1989 "parser.y"
            {forCounter++;}
#line 3615 "parser.tab.c"
    break;

  case 127: /* $@30: %empty  */
#line 1989 "parser.y"
                                                            {printJUMPtype(16);}
#line 3621 "parser.tab.c"
    break;

  case 128: /* $@31: %empty  */
#line 1989 "parser.y"
                                                                                      { 
		}
#line 3628 "parser.tab.c"
    break;

  case 129: /* $@32: %empty  */
#line 1990 "parser.y"
                  {printJUMPtype(14);}
#line 3634 "parser.tab.c"
    break;

  case 130: /* $@33: %empty  */
#line 1990 "parser.y"
                                       {printJUMPtype(15);}
#line 3640 "parser.tab.c"
    break;

  case 131: /* $@34: %empty  */
#line 1990 "parser.y"
                                                                      {printJUMPtype(13);}
#line 3646 "parser.tab.c"
    break;

  case 132: /* $@35: %empty  */
#line 1990 "parser.y"
                                                                                                                                  {printJUMPtype(17);}
#line 3652 "parser.tab.c"
    break;

  case 133: /* $@36: %empty  */
#line 1990 "parser.y"
                                                                                                                                                       {printJUMPtype(18);}
#line 3658 "parser.tab.c"
    break;

  case 134: /* for_statement: FOR $@29 OPENBRACKET for_initialization $@30 value $@31 $@32 $@33 SEMICOLON $@34 for_expression CLOSEDBRACKET statement $@35 $@36  */
#line 1990 "parser.y"
                                                                                                                                                                            {printf("for loop\n");}
#line 3664 "parser.tab.c"
    break;

  case 139: /* for_expression: IDENTIFIER EQUAL value SEMICOLON  */
#line 2002 "parser.y"
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
#line 3717 "parser.tab.c"
    break;

  case 140: /* for_expression: IDENTIFIER PLUS_EQ expression  */
#line 2051 "parser.y"
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
#line 3772 "parser.tab.c"
    break;

  case 141: /* for_expression: IDENTIFIER MINUS_EQ expression  */
#line 2102 "parser.y"
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
#line 3827 "parser.tab.c"
    break;

  case 142: /* for_expression: IDENTIFIER MULT_EQ expression  */
#line 2153 "parser.y"
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
#line 3882 "parser.tab.c"
    break;

  case 143: /* for_expression: IDENTIFIER DIV_EQ expression  */
#line 2204 "parser.y"
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
#line 3937 "parser.tab.c"
    break;

  case 146: /* $@37: %empty  */
#line 2261 "parser.y"
       {switchCounter++;}
#line 3943 "parser.tab.c"
    break;

  case 147: /* $@38: %empty  */
#line 2261 "parser.y"
                          {printVM("switchBegin",-1);}
#line 3949 "parser.tab.c"
    break;

  case 148: /* $@39: %empty  */
#line 2261 "parser.y"
                                                                                                      {scopeno++;}
#line 3955 "parser.tab.c"
    break;

  case 149: /* $@40: %empty  */
#line 2261 "parser.y"
                                                                                                                                         {endscope(scopeno); scopeno--;}
#line 3961 "parser.tab.c"
    break;

  case 150: /* $@41: %empty  */
#line 2261 "parser.y"
                                                                                                                                                                          {printVM("ENDSwitch",switchCounter);}
#line 3967 "parser.tab.c"
    break;

  case 151: /* switch_statement: SWITCH $@37 $@38 OPENBRACKET value CLOSEDBRACKET OPENCURL $@39 case_list CLOSEDCURL $@40 $@41  */
#line 2261 "parser.y"
                                                                                                                                                                                                                {printf("switch case\n");}
#line 3973 "parser.tab.c"
    break;

  case 154: /* $@42: %empty  */
#line 2270 "parser.y"
            {if (caseCounter!=0) printVM("pop",-1); }
#line 3979 "parser.tab.c"
    break;

  case 155: /* $@43: %empty  */
#line 2270 "parser.y"
                                                            {printVM("EQ",-1); }
#line 3985 "parser.tab.c"
    break;

  case 156: /* $@44: %empty  */
#line 2270 "parser.y"
                                                                                       {  { printVM("JumpFalse endCase:", caseCounter);}     printVM("case:", caseCounter++);  }
#line 3991 "parser.tab.c"
    break;

  case 157: /* case_statement: CASE $@42 value $@43 COLON $@44 statements  */
#line 2270 "parser.y"
                                                                                                                                                                                             {if(checkBreak) {printJUMPtype(19);} if(!checkBreak){printVM("Jump Case:", caseCounter);} checkBreak=false ;   printVM("endCase",caseCounter-1); }
#line 3997 "parser.tab.c"
    break;

  case 158: /* $@45: %empty  */
#line 2271 "parser.y"
                     {printVM("default_case:",-1);}
#line 4003 "parser.tab.c"
    break;

  case 160: /* break_statement: BREAK SEMICOLON  */
#line 2277 "parser.y"
                                 {checkBreak=true; printf("Break statement\n");}
#line 4009 "parser.tab.c"
    break;

  case 161: /* continue_statement: CONTINUE SEMICOLON  */
#line 2278 "parser.y"
                                       {printf("Continue statement\n");}
#line 4015 "parser.tab.c"
    break;


#line 4019 "parser.tab.c"

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

#line 2280 "parser.y"



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
			case 5:
				fprintf(VMcode, "BEGINWHILE_ %d\n",whileCounter);
				break;
			case 6:
				fprintf(VMcode, "ENDWHILE_%d\n",whileCounter);
				break;
			case 7:
				fprintf(VMcode, "JumpFalse ENDWHILE_%d\n",whileCounter);
				break;
			case 8:
				fprintf(VMcode, "JumpTrue BEGINWHILE_%d\n",whileCounter);
				break;
			case 9:
				fprintf(VMcode, "BEGINDOWHILE_%d\n",doWhileCounter);
				break;
			
			case 10:
				fprintf(VMcode, "JumpFalse ENDDoWHILE_%d\n",doWhileCounter);
				break;
			case 11:
				fprintf(VMcode, "JumpTrue BEGINDOWHILE_%d\n",doWhileCounter);
				break;

			case 12:
				fprintf(VMcode, "ENDDoWHILE_%d\n",doWhileCounter);
				break;
			case 13:
				fprintf(VMcode, "BEGINFOR_%d\n",forCounter);
				break;
			
			case 14:
				fprintf(VMcode, "JumpFalse ENDFOR_%d\n",forCounter);
				break;
			case 15:	
				fprintf(VMcode, "JumpTrue BEGINFOR_%d\n",forCounter);
				break;
			case 16:
				fprintf(VMcode, "FORINIT_%d\n",forCounter);
				break;
			case 17:
				fprintf(VMcode, "Jump FORINIT_%d\n",forCounter);
				break;
			case 18:
				fprintf(VMcode, "ENDFOR_%d\n",forCounter);
				break;
			case 19:
				fprintf(VMcode, "Jump ENDSwitch%d\n",switchCounter);
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
		if(num != -1)
		fprintf(VMcode, "%s%d\n", s,num);
		else
		fprintf(VMcode, "%s\n", s);

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
