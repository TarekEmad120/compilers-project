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
  YYSYMBOL_function = 68,                  /* function  */
  YYSYMBOL_69_2 = 69,                      /* $@2  */
  YYSYMBOL_70_3 = 70,                      /* $@3  */
  YYSYMBOL_71_4 = 71,                      /* $@4  */
  YYSYMBOL_return_value = 72,              /* return_value  */
  YYSYMBOL_function_prototype = 73,        /* function_prototype  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_75_6 = 75,                      /* $@6  */
  YYSYMBOL_76_7 = 76,                      /* $@7  */
  YYSYMBOL_77_8 = 77,                      /* $@8  */
  YYSYMBOL_parameters = 78,                /* parameters  */
  YYSYMBOL_single_parameter = 79,          /* single_parameter  */
  YYSYMBOL_function_call = 80,             /* function_call  */
  YYSYMBOL_81_9 = 81,                      /* $@9  */
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
  YYSYMBOL_92_10 = 92,                     /* $@10  */
  YYSYMBOL_93_11 = 93,                     /* $@11  */
  YYSYMBOL_94_12 = 94,                     /* $@12  */
  YYSYMBOL_95_13 = 95,                     /* $@13  */
  YYSYMBOL_96_14 = 96,                     /* $@14  */
  YYSYMBOL_elsestatement = 97,             /* elsestatement  */
  YYSYMBOL_98_15 = 98,                     /* $@15  */
  YYSYMBOL_else_if_statement = 99,         /* else_if_statement  */
  YYSYMBOL_100_16 = 100,                   /* $@16  */
  YYSYMBOL_101_17 = 101,                   /* $@17  */
  YYSYMBOL_102_18 = 102,                   /* $@18  */
  YYSYMBOL_103_19 = 103,                   /* $@19  */
  YYSYMBOL_while_statement = 104,          /* while_statement  */
  YYSYMBOL_105_20 = 105,                   /* $@20  */
  YYSYMBOL_106_21 = 106,                   /* $@21  */
  YYSYMBOL_107_22 = 107,                   /* $@22  */
  YYSYMBOL_108_23 = 108,                   /* $@23  */
  YYSYMBOL_109_24 = 109,                   /* $@24  */
  YYSYMBOL_do_while_statement = 110,       /* do_while_statement  */
  YYSYMBOL_111_25 = 111,                   /* $@25  */
  YYSYMBOL_112_26 = 112,                   /* $@26  */
  YYSYMBOL_113_27 = 113,                   /* $@27  */
  YYSYMBOL_114_28 = 114,                   /* $@28  */
  YYSYMBOL_115_29 = 115,                   /* $@29  */
  YYSYMBOL_116_30 = 116,                   /* $@30  */
  YYSYMBOL_for_statement = 117,            /* for_statement  */
  YYSYMBOL_118_31 = 118,                   /* $@31  */
  YYSYMBOL_119_32 = 119,                   /* $@32  */
  YYSYMBOL_120_33 = 120,                   /* $@33  */
  YYSYMBOL_121_34 = 121,                   /* $@34  */
  YYSYMBOL_122_35 = 122,                   /* $@35  */
  YYSYMBOL_123_36 = 123,                   /* $@36  */
  YYSYMBOL_124_37 = 124,                   /* $@37  */
  YYSYMBOL_125_38 = 125,                   /* $@38  */
  YYSYMBOL_126_39 = 126,                   /* $@39  */
  YYSYMBOL_127_40 = 127,                   /* $@40  */
  YYSYMBOL_128_41 = 128,                   /* $@41  */
  YYSYMBOL_129_42 = 129,                   /* $@42  */
  YYSYMBOL_for_initialization = 130,       /* for_initialization  */
  YYSYMBOL_for_expression = 131,           /* for_expression  */
  YYSYMBOL_switch_statement = 132,         /* switch_statement  */
  YYSYMBOL_133_43 = 133,                   /* $@43  */
  YYSYMBOL_134_44 = 134,                   /* $@44  */
  YYSYMBOL_135_45 = 135,                   /* $@45  */
  YYSYMBOL_136_46 = 136,                   /* $@46  */
  YYSYMBOL_137_47 = 137,                   /* $@47  */
  YYSYMBOL_case_list = 138,                /* case_list  */
  YYSYMBOL_case_statement = 139,           /* case_statement  */
  YYSYMBOL_140_48 = 140,                   /* $@48  */
  YYSYMBOL_141_49 = 141,                   /* $@49  */
  YYSYMBOL_142_50 = 142,                   /* $@50  */
  YYSYMBOL_143_51 = 143,                   /* $@51  */
  YYSYMBOL_break_statement = 144,          /* break_statement  */
  YYSYMBOL_continue_statement = 145        /* continue_statement  */
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
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   533

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

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
     220,   221,   226,   238,   244,   251,   251,   251,   251,   251,
     253,   253,   253,   253,   253,   253,   264,   318,   373,   426,
     479,   531,   535,   569,   631,   646,   689,   690,   717,   724,
     724,   717,   751,   794,   811,   811,   838,   838,   862,   862,
     884,   884,   908,   908,   910,   938,   962,   962,  1008,  1008,
    1010,  1016,  1028,  1041,  1051,  1144,  1232,  1277,  1322,  1367,
    1413,  1442,  1471,  1497,  1506,  1520,  1524,  1528,  1591,  1657,
    1727,  1782,  1786,  1787,  1842,  1901,  1910,  1918,  1968,  1984,
    1984,  1985,  1986,  1986,  1984,  1994,  1994,  1995,  1999,  1999,
    1999,  1999,  1999,  2000,  2007,  2007,  2007,  2007,  2007,  2007,
    2013,  2013,  2013,  2013,  2013,  2013,  2013,  2019,  2019,  2019,
    2020,  2023,  2024,  2027,  2029,  2031,  2031,  2031,  2031,  2019,
    2035,  2036,  2037,  2038,  2042,  2091,  2142,  2193,  2244,  2295,
    2296,  2302,  2302,  2302,  2302,  2302,  2302,  2306,  2307,  2311,
    2311,  2311,  2311,  2312,  2312,  2318,  2319
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
  "$@4", "return_value", "function_prototype", "$@5", "$@6", "$@7", "$@8",
  "parameters", "single_parameter", "function_call", "$@9",
  "call_parameters", "call_parameter", "expression", "boolean_expression",
  "arithmetic_expression", "unary_expression", "binary_expression", "term",
  "factor", "if_statement", "$@10", "$@11", "$@12", "$@13", "$@14",
  "elsestatement", "$@15", "else_if_statement", "$@16", "$@17", "$@18",
  "$@19", "while_statement", "$@20", "$@21", "$@22", "$@23", "$@24",
  "do_while_statement", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30",
  "for_statement", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37",
  "$@38", "$@39", "$@40", "$@41", "$@42", "for_initialization",
  "for_expression", "switch_statement", "$@43", "$@44", "$@45", "$@46",
  "$@47", "case_list", "case_statement", "$@48", "$@49", "$@50", "$@51",
  "break_statement", "continue_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     377,   380,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   121,   121,   101,   -89,   -89,   -89,   -89,   -89,   -38,
     -13,    12,    61,   101,   -89,   -89,   251,   -89,    58,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   177,   -89,   -89,   -89,
      28,    33,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     101,   101,   101,   101,   -89,   -89,   113,   -89,    71,    75,
      57,   469,    32,   -89,   -89,    47,   -89,   -89,   -89,    50,
     -89,   -89,   -89,    54,   491,   314,   377,   -89,   -89,    20,
      49,     3,     3,     3,     3,     3,     3,     3,     3,   -89,
      19,    19,    19,    19,   407,   415,   423,   453,    -5,   -89,
     461,    61,    76,     6,    61,    59,   377,    23,    62,    69,
     -89,   -89,   269,   191,    70,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,    33,    33,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,    72,    65,    61,    61,
     -89,    85,    61,   -89,   148,   -89,    68,   125,   -89,   -89,
     -89,    61,   121,    87,   -89,    73,   -89,   121,    88,   377,
      86,    61,    90,    91,    97,   102,   104,   -89,    21,    61,
     103,   151,   -41,   -89,   -89,   -89,   -36,   -89,   377,   -89,
     -89,   -89,   -89,   -89,   -89,   106,   -89,   107,   124,   121,
     -89,   -89,   109,   377,   377,    61,   -89,   -89,   216,   -89,
     -89,   377,   -89,   -89,   110,    43,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   112,   -89,   -89,   -89,   -89,   111,     4,
     -89,   -89,   -89,   126,   -89,    61,   -89,   -89,   -89,   -89,
     122,   348,   -89,   377,   -89,    52,   -89,   224,   -89,   127,
     130,   377,   -89,   -89,   123,   -89,   -89,   101,   101,   101,
     101,    61,   -89,   -89,   133,   -89,   -89,   491,   491,   491,
     491,   131,   -89,   377,    61,   377,   -89,   377,   377,   135,
     323,   -89,   132,   -89,   -89,   -89,   -89,   377,   -89,   377,
     -89,   137,   -89,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,    95,    96,    83,    84,    25,    26,    27,    29,
      28,     0,     0,     0,    99,   114,   120,   127,   151,     0,
       0,     0,    53,     0,    18,    21,     0,     3,     0,     5,
       6,     7,     8,    16,    48,    17,     0,    72,    73,    86,
      85,    91,    92,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    87,    88,     0,    66,     0,     0,
      97,    82,     0,   115,   121,     0,   152,   165,   166,     0,
      23,    24,    52,     0,    22,     0,     0,     1,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    41,
       0,    69,     0,     0,     0,     0,     0,     0,     0,    58,
      20,    98,     0,     0,    54,    44,    49,    79,    78,    76,
      77,    74,    75,    80,    81,    97,    89,    90,    93,    94,
      37,    38,    39,    40,    36,    71,     0,    68,     0,     0,
      46,     0,     0,   122,    97,   143,     0,     0,   140,   141,
     128,     0,     0,     0,    19,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,     0,     0,    63,    61,    42,     0,    57,    50,    67,
      70,    45,    47,   100,   116,     0,   129,     0,    64,     0,
      59,    55,     0,     0,     0,     0,   130,   153,     0,    62,
      51,   101,   117,   123,     0,     0,    30,    31,    32,    33,
      34,    35,    65,     0,   118,   124,   131,   159,     0,     0,
     158,   102,   119,     0,   132,     0,   163,   154,   157,   113,
       0,   150,   160,     0,   155,   107,   125,    97,   149,     0,
       0,   164,   156,   108,     0,   103,   126,     0,     0,     0,
       0,     0,   133,   161,     0,   105,   104,   145,   146,   147,
     148,     0,   134,     0,     0,     0,   144,     0,   162,     0,
       0,   135,     0,   106,   136,   109,   137,     0,   138,   110,
     139,     0,   111,   112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -74,   -26,   -89,   -88,    -7,   -89,    83,    94,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    36,    13,   -53,   -89,   -89,   -89,   -12,   -89,   445,
     -89,   -89,     7,     1,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,    -3,   -89,   -89,   -89,   -89,   -89,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    26,    27,    76,    72,    28,   212,    29,    30,    31,
      32,    33,    80,   159,   192,    73,    34,   157,   158,   152,
     153,   172,   173,    35,   101,   136,   137,    36,    37,    38,
      39,    40,    41,    42,    43,    62,   193,   213,   229,   256,
     245,   265,   235,   254,   277,   281,   283,    44,    63,   105,
     194,   214,   222,    45,    64,   106,   166,   215,   223,   246,
      46,    65,   169,   196,   204,   224,   231,   262,   267,   274,
     276,   278,   280,   150,   239,    47,    66,   108,   205,   234,
     242,   219,   220,   225,   240,   263,   233,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    61,   112,    99,    58,    59,    60,     2,     3,   189,
      74,    75,   190,   135,   189,    69,   141,   191,    67,   146,
      54,    55,   125,     2,     3,   155,   144,     2,     3,    70,
       4,     5,    71,     6,     7,     8,     9,    10,    94,    95,
      96,    97,   139,    68,   100,    90,    91,    57,   217,   218,
     162,   163,    92,    93,   165,    23,   113,   113,    13,   227,
     156,    79,   140,   170,    60,     2,     3,    70,     4,     5,
      71,    23,   114,   180,   102,    23,   115,   115,   103,   145,
     143,   186,    54,    55,   104,   178,    78,   217,   218,    74,
     243,   244,    74,   128,   129,    74,    13,   126,   127,   107,
     147,    74,   109,   116,    60,     2,     3,   203,     4,     5,
     110,   142,   138,    23,   151,   161,    98,     2,     3,   201,
       4,     5,   -60,   -56,   167,   160,    74,    74,   168,   175,
      74,     6,     7,     8,     9,    10,    13,   232,   164,    74,
     174,   177,   179,   238,   185,   171,   181,   182,    13,    74,
     171,   183,    78,    23,   188,   184,   187,    74,   195,   241,
     198,   197,   226,   261,   200,    23,   216,   221,   202,    50,
      51,    52,    53,    54,    55,    78,   269,   255,   236,   230,
     252,   253,   171,    74,    56,   264,   275,   266,   272,   268,
     148,   270,   282,   176,    98,     2,     3,    70,     4,     5,
      71,   149,   199,   279,    81,    82,    83,    84,    85,    86,
      87,    88,     0,    74,     0,    78,   228,     0,     0,    74,
     206,   207,   208,   209,   210,   211,    13,     0,     0,     0,
       0,     0,     0,    89,     0,   257,   258,   259,   260,    74,
       0,   271,    78,    23,    78,   247,   248,   249,   250,    54,
      55,    77,    74,    78,     1,     2,     3,     0,     4,     5,
     251,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,     1,     2,     3,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,     0,    14,     0,
       0,    15,    16,    17,    18,     0,     0,    19,    20,    21,
      22,     0,     0,    23,    13,    24,    14,    25,     0,    15,
      16,    17,    18,     0,     0,    19,    20,    21,    22,     0,
       0,    23,     0,    24,   154,    25,     1,     2,     3,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    11,    12,
       0,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,   237,     2,     3,    70,     4,     5,    71,    13,     0,
      14,     0,     0,    15,    16,    17,    18,   111,     0,    19,
      20,    21,    22,     0,     0,    23,     0,    24,   273,    25,
       1,     2,     3,    13,     4,     5,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,     0,     0,     0,
      23,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,    13,     0,    14,     0,    56,    15,    16,    17,
      18,     0,     0,    19,    20,    21,    22,     0,     0,    23,
       0,    24,    57,    25,    81,    82,    83,    84,    85,    86,
      87,    88,    81,    82,    83,    84,    85,    86,    87,    88,
      81,    82,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,   132,
      81,    82,    83,    84,    85,    86,    87,    88,    81,    82,
      83,    84,    85,    86,    87,    88,    81,    82,    83,    84,
      85,    86,   -61,   -61,     0,     0,     0,     0,     0,   133,
       0,     0,     0,     0,     0,     0,     0,   134,    81,    82,
      83,    84,    85,    86,    87,    88,   117,   118,   119,   120,
     121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      26,    13,    76,    56,    11,    12,     3,     4,     5,    50,
      22,    23,    53,   101,    50,     3,   104,    53,    56,   107,
      25,    26,     3,     4,     5,   113,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    50,    51,
      52,    53,    36,    56,    56,    17,    18,    52,    44,    45,
     138,   139,    19,    20,   142,    52,    36,    36,    35,    55,
     113,     3,    56,   151,     3,     4,     5,     6,     7,     8,
       9,    52,    52,   161,     3,    52,    56,    56,     3,    56,
     106,   169,    25,    26,    52,   159,   112,    44,    45,   101,
      38,    39,   104,    92,    93,   107,    35,    90,    91,    52,
     107,   113,    52,    54,     3,     4,     5,   195,     7,     8,
      56,    52,    36,    52,    52,    50,     3,     4,     5,   193,
       7,     8,    53,    53,    56,    53,   138,   139,     3,    56,
     142,    10,    11,    12,    13,    14,    35,   225,    53,   151,
      53,    53,    56,   231,    40,   152,    56,    56,    35,   161,
     157,    54,   178,    52,     3,    53,    53,   169,    52,   233,
      36,    54,    51,   251,    55,    52,    56,    55,   194,    21,
      22,    23,    24,    25,    26,   201,   264,    54,    56,    53,
      53,    51,   189,   195,    36,    52,    54,    56,    53,   263,
     107,   265,    55,   157,     3,     4,     5,     6,     7,     8,
       9,   107,   189,   277,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,   225,    -1,   241,   219,    -1,    -1,   231,
       4,     5,     6,     7,     8,     9,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,   247,   248,   249,   250,   251,
      -1,   267,   268,    52,   270,    21,    22,    23,    24,    25,
      26,     0,   264,   279,     3,     4,     5,    -1,     7,     8,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    35,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    -1,    -1,    52,    35,    54,    37,    56,    -1,    40,
      41,    42,    43,    -1,    -1,    46,    47,    48,    49,    -1,
      -1,    52,    -1,    54,    55,    56,     3,     4,     5,    -1,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    35,    -1,
      37,    -1,    -1,    40,    41,    42,    43,    53,    -1,    46,
      47,    48,    49,    -1,    -1,    52,    -1,    54,    55,    56,
       3,     4,     5,    35,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    -1,    36,    40,    41,    42,
      43,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    52,
      -1,    54,    52,    56,    27,    28,    29,    30,    31,    32,
      33,    34,    27,    28,    29,    30,    31,    32,    33,    34,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      27,    28,    29,    30,    31,    32,    33,    34,    27,    28,
      29,    30,    31,    32,    33,    34,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    27,    28,
      29,    30,    31,    32,    33,    34,    81,    82,    83,    84,
      85,    86,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    35,    37,    40,    41,    42,    43,    46,
      47,    48,    49,    52,    54,    56,    58,    59,    62,    64,
      65,    66,    67,    68,    73,    80,    84,    85,    86,    87,
      88,    89,    90,    91,   104,   110,   117,   132,   144,   145,
      21,    22,    23,    24,    25,    26,    36,    52,    62,    62,
       3,    84,    92,   105,   111,   118,   133,    56,    56,     3,
       6,     9,    61,    72,    84,    84,    60,     0,    59,     3,
      69,    27,    28,    29,    30,    31,    32,    33,    34,    56,
      17,    18,    19,    20,    84,    84,    84,    84,     3,    80,
      84,    81,     3,     3,    52,   106,   112,    52,   134,    52,
      56,    53,    58,    36,    52,    56,    54,    86,    86,    86,
      86,    86,    86,    86,    86,     3,    89,    89,    90,    90,
      56,    56,    56,    56,    56,    61,    82,    83,    36,    36,
      56,    61,    52,    59,     3,    56,    61,    62,    64,    65,
     130,    52,    76,    77,    55,    61,    80,    74,    75,    70,
      53,    50,    61,    61,    53,    61,   113,    56,     3,   119,
      61,    62,    78,    79,    53,    56,    78,    53,    58,    56,
      61,    56,    56,    54,    53,    40,    61,    53,     3,    50,
      53,    53,    71,    93,   107,    52,   120,    54,    36,    79,
      55,    58,    59,    61,   121,   135,     4,     5,     6,     7,
       8,     9,    63,    94,   108,   114,    56,    44,    45,   138,
     139,    55,   109,   115,   122,   140,    51,    55,   139,    95,
      53,   123,    61,   143,   136,    99,    56,     3,    61,   131,
     141,    58,   137,    38,    39,    97,   116,    21,    22,    23,
      24,    36,    53,    51,   100,    54,    96,    84,    84,    84,
      84,    61,   124,   142,    52,    98,    56,   125,    58,    61,
      58,    59,    53,    55,   126,    54,   127,   101,   128,    58,
     129,   102,    55,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    59,
      59,    59,    61,    61,    61,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    66,    67,    67,    69,    70,
      71,    68,    72,    72,    74,    73,    75,    73,    76,    73,
      77,    73,    78,    78,    79,    79,    81,    80,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    90,    92,
      93,    94,    95,    96,    91,    98,    97,    97,   100,   101,
     102,   103,    99,    99,   105,   106,   107,   108,   109,   104,
     111,   112,   113,   114,   115,   116,   110,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   117,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   133,   134,   135,   136,   137,   132,   138,   138,   140,
     141,   142,   139,   143,   139,   144,   145
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     3,     5,     4,     3,     6,     4,     6,     0,     0,
       0,     7,     1,     0,     0,     6,     0,     5,     0,     6,
       0,     5,     3,     1,     2,     4,     0,     6,     1,     0,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     1,     3,     3,     1,     1,     1,     3,     0,
       0,     0,     0,     0,    14,     0,     5,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       1,     1,     2,     1,     4,     3,     3,     3,     3,     1,
       0,     0,     0,     0,     0,     0,    12,     2,     1,     0,
       0,     0,     7,     0,     4,     2,     2
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
#line 1514 "parser.tab.c"
    break;

  case 5: /* statement: assignment_statement  */
#line 195 "parser.y"
                                {printf("Assignment Statement \n");}
#line 1520 "parser.tab.c"
    break;

  case 6: /* statement: var_declaration  */
#line 196 "parser.y"
                                {printf("Variable declaration\n");}
#line 1526 "parser.tab.c"
    break;

  case 13: /* statement: switch_statement  */
#line 203 "parser.y"
                       {caseCounter=0;}
#line 1532 "parser.tab.c"
    break;

  case 16: /* statement: function  */
#line 206 "parser.y"
                        {printf("Function statement\n");}
#line 1538 "parser.tab.c"
    break;

  case 17: /* statement: function_call  */
#line 207 "parser.y"
                       {printf("Function call statement\n");}
#line 1544 "parser.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 208 "parser.y"
                   {
		//when open curly bracket is found the scope is opened so scope number is increased
		scopeno++;
		printf("Scope Opened\n");
	
	}
#line 1555 "parser.tab.c"
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
#line 1567 "parser.tab.c"
    break;

  case 22: /* value: expression  */
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
#line 1583 "parser.tab.c"
    break;

  case 23: /* value: STRING_VAL  */
#line 238 "parser.y"
            {
	(yyval.lexicalstruct).type = STRINGTYPE;
	(yyval.lexicalstruct).stringval = (yyvsp[0].lexicalstruct).valueinstring;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;

}
#line 1594 "parser.tab.c"
    break;

  case 24: /* value: CHAR_VAL  */
#line 244 "parser.y"
           {
	(yyval.lexicalstruct).type = CHARTYPE;
	(yyval.lexicalstruct).charval = (yyvsp[0].lexicalstruct).charval;
	(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
	//PrintIDentifierAdress($$.charval);
 }
#line 1605 "parser.tab.c"
    break;

  case 36: /* assignment_statement: IDENTIFIER EQUAL expression SEMICOLON  */
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
						printsemanticerror("Type mismatch4",yylineno);
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
#line 1663 "parser.tab.c"
    break;

  case 37: /* assignment_statement: IDENTIFIER PLUS_EQ expression SEMICOLON  */
#line 319 "parser.y"
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
#line 1722 "parser.tab.c"
    break;

  case 38: /* assignment_statement: IDENTIFIER MINUS_EQ expression SEMICOLON  */
#line 374 "parser.y"
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
#line 1779 "parser.tab.c"
    break;

  case 39: /* assignment_statement: IDENTIFIER MULT_EQ expression SEMICOLON  */
#line 426 "parser.y"
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
#line 1837 "parser.tab.c"
    break;

  case 40: /* assignment_statement: IDENTIFIER DIV_EQ expression SEMICOLON  */
#line 479 "parser.y"
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
#line 1894 "parser.tab.c"
    break;

  case 42: /* var_declaration: type IDENTIFIER EQUAL value SEMICOLON  */
#line 536 "parser.y"
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
#line 1932 "parser.tab.c"
    break;

  case 43: /* var_declaration: type IDENTIFIER EQUAL function_call  */
#line 570 "parser.y"
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
#line 1995 "parser.tab.c"
    break;

  case 44: /* var_declaration: type IDENTIFIER SEMICOLON  */
#line 631 "parser.y"
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
#line 2014 "parser.tab.c"
    break;

  case 45: /* constant_declaration: CONST type IDENTIFIER EQUAL value SEMICOLON  */
#line 646 "parser.y"
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
#line 2058 "parser.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 717 "parser.y"
                                                   {
								if(scopeno > 0){
								char *str4 = currentfunctionname;	
								char* str = malloc(strlen("jmp return_label_") + strlen(str4) + 1);
								strcpy(str, "jmp return_label_");
								strcat(str, str4);
								printVM(str,-1);}
}
#line 2071 "parser.tab.c"
    break;

  case 49: /* $@3: %empty  */
#line 724 "parser.y"
          {scopeno++;}
#line 2077 "parser.tab.c"
    break;

  case 50: /* $@4: %empty  */
#line 724 "parser.y"
                                  {
	printf("functionname%s",currentfunctionname);
	if (checkidentifiername(currentfunctionname) == 1){
		struct SymbolNode *ptr = getsymbolAndScope(currentfunctionname, scopeno);
		printf("function name from table %s\n",ptr->data->name);
		if (ptr->data->type == VOIDTYPE){
			
			char *str4 = currentfunctionname;
						char *str3 = malloc(strlen("jmp return_") + strlen(str4) + 1);
						strcpy(str3, "jmp return_");
						strcat(str3, str4);
						printVM( str3 , -1 );
		}
	}
}
#line 2097 "parser.tab.c"
    break;

  case 51: /* function: function_prototype $@2 OPENCURL $@3 statements $@4 CLOSEDCURL  */
#line 741 "parser.y"
{
	endscope(scopeno); 
	scopeno--;
	currentfunctionname = "";
	argcount=0;

	printf("Function Definition\n");
}
#line 2110 "parser.tab.c"
    break;

  case 52: /* return_value: value  */
#line 752 "parser.y"
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
					else{
						printsemanticerror("Type mismatch",yylineno);
						programerror = true;
					}
				}
			}
#line 2156 "parser.tab.c"
    break;

  case 53: /* return_value: %empty  */
#line 794 "parser.y"
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
#line 2176 "parser.tab.c"
    break;

  case 54: /* $@5: %empty  */
#line 811 "parser.y"
                                 { 
		
		char *str = malloc(strlen(":") + strlen((yyvsp[-1].name)) + 1);
		strcpy(str, (yyvsp[-1].name));
		strcat(str, ":");
		printVM(str,-1);
		argcount = 0;

	}
#line 2190 "parser.tab.c"
    break;

  case 55: /* function_prototype: type IDENTIFIER OPENBRACKET $@5 parameters CLOSEDBRACKET  */
#line 819 "parser.y"
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
#line 2214 "parser.tab.c"
    break;

  case 56: /* $@6: %empty  */
#line 838 "parser.y"
                                 {
	
		char *str = malloc(strlen(":") + strlen((yyvsp[-1].name)) + 1);
		strcpy(str, (yyvsp[-1].name));
		strcat(str, ":");
		printVM(str,-1);

	}
#line 2227 "parser.tab.c"
    break;

  case 57: /* function_prototype: type IDENTIFIER OPENBRACKET $@6 CLOSEDBRACKET  */
#line 845 "parser.y"
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
#line 2249 "parser.tab.c"
    break;

  case 58: /* $@7: %empty  */
#line 862 "parser.y"
                                 {argcount=0;}
#line 2255 "parser.tab.c"
    break;

  case 59: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@7 parameters CLOSEDBRACKET  */
#line 863 "parser.y"
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
#line 2281 "parser.tab.c"
    break;

  case 60: /* $@8: %empty  */
#line 884 "parser.y"
                                 {
		char *str = malloc(strlen(":") + strlen((yyvsp[-1].name)) + 1);
		strcpy(str, (yyvsp[-1].name));
		strcat(str, ":");
		printVM(str,-1);
	}
#line 2292 "parser.tab.c"
    break;

  case 61: /* function_prototype: VOID IDENTIFIER OPENBRACKET $@8 CLOSEDBRACKET  */
#line 890 "parser.y"
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
#line 2313 "parser.tab.c"
    break;

  case 64: /* single_parameter: type IDENTIFIER  */
#line 911 "parser.y"
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
#line 2345 "parser.tab.c"
    break;

  case 65: /* single_parameter: type IDENTIFIER EQUAL constant  */
#line 939 "parser.y"
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
#line 2371 "parser.tab.c"
    break;

  case 66: /* $@9: %empty  */
#line 962 "parser.y"
                                                      {argcount=0;}
#line 2377 "parser.tab.c"
    break;

  case 67: /* function_call: IDENTIFIER OPENBRACKET $@9 call_parameters CLOSEDBRACKET SEMICOLON  */
#line 963 "parser.y"
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

							char *str = malloc(strlen("\tcall ") + strlen((yyvsp[-5].name)) + 1);
							strcpy(str, "call ");
							strcat(str, (yyvsp[-5].name));
							printVM(str,-1);


							char *str1 = malloc(strlen("return_") + strlen((yyvsp[-5].name)) + strlen(":") + 1);
							strcpy(str1, "return_");
							strcat(str1, (yyvsp[-5].name));
							strcat(str1, ":");
							printVM(str1,-1);
						}
#line 2425 "parser.tab.c"
    break;

  case 70: /* call_parameter: call_parameter COMMA value  */
#line 1011 "parser.y"
                                                {
							int type= (yyvsp[0].lexicalstruct) .type;
							funcargs[argcount] = type;
							argcount++;
						}
#line 2435 "parser.tab.c"
    break;

  case 71: /* call_parameter: value  */
#line 1017 "parser.y"
                                                 {
							int type= (yyvsp[0].lexicalstruct) .type;
							funcargs[argcount] = type;
							argcount++;
						 }
#line 2445 "parser.tab.c"
    break;

  case 72: /* expression: boolean_expression  */
#line 1028 "parser.y"
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
#line 2463 "parser.tab.c"
    break;

  case 73: /* expression: arithmetic_expression  */
#line 1042 "parser.y"
                {
			// $$.stringval = $1.stringval; // 8aleban malo4 lazma
		}
#line 2471 "parser.tab.c"
    break;

  case 74: /* boolean_expression: expression EQ_EQ arithmetic_expression  */
#line 1052 "parser.y"
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
#line 2568 "parser.tab.c"
    break;

  case 75: /* boolean_expression: expression NE arithmetic_expression  */
#line 1145 "parser.y"
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
#line 2660 "parser.tab.c"
    break;

  case 76: /* boolean_expression: expression GE arithmetic_expression  */
#line 1233 "parser.y"
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
#line 2709 "parser.tab.c"
    break;

  case 77: /* boolean_expression: expression LE arithmetic_expression  */
#line 1278 "parser.y"
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
#line 2758 "parser.tab.c"
    break;

  case 78: /* boolean_expression: expression GT arithmetic_expression  */
#line 1323 "parser.y"
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
#line 2807 "parser.tab.c"
    break;

  case 79: /* boolean_expression: expression LT arithmetic_expression  */
#line 1368 "parser.y"
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
#line 2857 "parser.tab.c"
    break;

  case 80: /* boolean_expression: expression AND arithmetic_expression  */
#line 1414 "parser.y"
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
#line 2890 "parser.tab.c"
    break;

  case 81: /* boolean_expression: expression OR arithmetic_expression  */
#line 1443 "parser.y"
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
#line 2923 "parser.tab.c"
    break;

  case 82: /* boolean_expression: NOT expression  */
#line 1472 "parser.y"
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
#line 2953 "parser.tab.c"
    break;

  case 83: /* boolean_expression: TRUE_VAL  */
#line 1498 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = true;
			(yyval.lexicalstruct).valueinstring = "1";
			
					printBoolenOp(10);
				
		}
#line 2966 "parser.tab.c"
    break;

  case 84: /* boolean_expression: FALSE_VAL  */
#line 1507 "parser.y"
                {
			(yyval.lexicalstruct).type = BOOLTYPE;
			(yyval.lexicalstruct).boolval = false;
			(yyval.lexicalstruct).valueinstring = "0";
			
					printBoolenOp(11);
			
		}
#line 2979 "parser.tab.c"
    break;

  case 85: /* arithmetic_expression: binary_expression  */
#line 1520 "parser.y"
                          { 
			// $$.stringval = $1.stringval;
			
		 }
#line 2988 "parser.tab.c"
    break;

  case 87: /* unary_expression: IDENTIFIER INC  */
#line 1528 "parser.y"
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
			if(programerror==false){
				printVM("INC ",ptr->data->memaddress);
			}
		}
		}
#line 3056 "parser.tab.c"
    break;

  case 88: /* unary_expression: IDENTIFIER DEC  */
#line 1592 "parser.y"
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
			if(programerror==false){
				printVM("DEC ",ptr->data->memaddress);
			}
			}
		}
#line 3123 "parser.tab.c"
    break;

  case 89: /* binary_expression: binary_expression PLUS term  */
#line 1658 "parser.y"
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
					printsemanticerror("Type mismatch0",yylineno);
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
					printsemanticerror("Type mismatch1",yylineno);
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
					printsemanticerror("Type mismatch2",yylineno);
					programerror = true;
				}
			}
			else{
				printsemanticerror("Type mismatch6",yylineno);
				programerror = true;
			}
			if (programerror==false){
				        printPushOp(1);
    
			}
			
		}
#line 3197 "parser.tab.c"
    break;

  case 90: /* binary_expression: binary_expression MINUS term  */
#line 1728 "parser.y"
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
#line 3256 "parser.tab.c"
    break;

  case 93: /* term: term MULT factor  */
#line 1788 "parser.y"
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
#line 3315 "parser.tab.c"
    break;

  case 94: /* term: term DIV factor  */
#line 1843 "parser.y"
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
#line 3374 "parser.tab.c"
    break;

  case 95: /* factor: INT_NUM  */
#line 1901 "parser.y"
                {
	
			(yyval.lexicalstruct).type = INTTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[0].lexicalstruct).intval;
			if (programerror==false){
				 printPushValue((yyvsp[0].lexicalstruct).valueinstring);
			}
		}
#line 3388 "parser.tab.c"
    break;

  case 96: /* factor: FLOAT_VAL  */
#line 1910 "parser.y"
                   {
			(yyval.lexicalstruct).type = FLOATTYPE;
			(yyval.lexicalstruct).valueinstring = (yyvsp[0].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).floatval = (yyvsp[0].lexicalstruct).floatval;
			if (programerror==false){
				printPushValue((yyvsp[0].lexicalstruct).valueinstring);
			}
		}
#line 3401 "parser.tab.c"
    break;

  case 97: /* factor: IDENTIFIER  */
#line 1919 "parser.y"
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
#line 3455 "parser.tab.c"
    break;

  case 98: /* factor: OPENBRACKET expression CLOSEDBRACKET  */
#line 1969 "parser.y"
                {
			(yyval.lexicalstruct).type = (yyvsp[-1].lexicalstruct).type;
			(yyval.lexicalstruct).valueinstring = (yyvsp[-1].lexicalstruct).valueinstring;
			(yyval.lexicalstruct).intval = (yyvsp[-1].lexicalstruct).intval;
			(yyval.lexicalstruct).floatval = (yyvsp[-1].lexicalstruct).floatval;
			(yyval.lexicalstruct).charval = (yyvsp[-1].lexicalstruct).charval;
			(yyval.lexicalstruct).stringval = (yyvsp[-1].lexicalstruct).stringval;
			(yyval.lexicalstruct).boolval = (yyvsp[-1].lexicalstruct).boolval;
		}
#line 3469 "parser.tab.c"
    break;

  case 99: /* $@10: %empty  */
#line 1984 "parser.y"
           {Ifcounter++;}
#line 3475 "parser.tab.c"
    break;

  case 100: /* $@11: %empty  */
#line 1984 "parser.y"
                                                                  {scopeno++;printVM("JumpFalse EndOFSection",Ifcounter);}
#line 3481 "parser.tab.c"
    break;

  case 101: /* $@12: %empty  */
#line 1985 "parser.y"
                           {printVM("Jump EndIF",EndIfcounter);}
#line 3487 "parser.tab.c"
    break;

  case 102: /* $@13: %empty  */
#line 1986 "parser.y"
                           {endscope(scopeno); scopeno--;printVM("EndOFSection",Ifcounter);}
#line 3493 "parser.tab.c"
    break;

  case 103: /* $@14: %empty  */
#line 1986 "parser.y"
                                                                                                                              {printVM("EndIF",EndIfcounter);EndIfcounter++;}
#line 3499 "parser.tab.c"
    break;

  case 104: /* if_statement: IF $@10 OPENBRACKET value CLOSEDBRACKET OPENCURL $@11 statements $@12 CLOSEDCURL $@13 else_if_statement elsestatement $@14  */
#line 1987 "parser.y"
                {

			printf("If then statement\n");
			// printf("variable name  ==  %s\n",$3.s);
		}
#line 3509 "parser.tab.c"
    break;

  case 105: /* $@15: %empty  */
#line 1994 "parser.y"
                             {scopeno++;}
#line 3515 "parser.tab.c"
    break;

  case 106: /* elsestatement: ELSE OPENCURL $@15 statements CLOSEDCURL  */
#line 1994 "parser.y"
                                                               {endscope(scopeno); scopeno--;}
#line 3521 "parser.tab.c"
    break;

  case 108: /* $@16: %empty  */
#line 1999 "parser.y"
                             {Ifcounter++;}
#line 3527 "parser.tab.c"
    break;

  case 109: /* $@17: %empty  */
#line 1999 "parser.y"
                                                                                       {scopeno++;  printVM("JumpFalse EndOFSection",Ifcounter); }
#line 3533 "parser.tab.c"
    break;

  case 110: /* $@18: %empty  */
#line 1999 "parser.y"
                                                                                                                                                                {printVM("Jump EndIF",EndIfcounter);}
#line 3539 "parser.tab.c"
    break;

  case 111: /* $@19: %empty  */
#line 1999 "parser.y"
                                                                                                                                                                                                                  {printVM("EndOFSection",Ifcounter);}
#line 3545 "parser.tab.c"
    break;

  case 112: /* else_if_statement: else_if_statement ELSEIF $@16 OPENBRACKET value CLOSEDBRACKET OPENCURL $@17 statements $@18 CLOSEDCURL $@19  */
#line 1999 "parser.y"
                                                                                                                                                                                                                                                       { endscope(scopeno); scopeno--;}
#line 3551 "parser.tab.c"
    break;

  case 114: /* $@20: %empty  */
#line 2007 "parser.y"
                      {whileCounter++;}
#line 3557 "parser.tab.c"
    break;

  case 115: /* $@21: %empty  */
#line 2007 "parser.y"
                                        {printJUMPtype(5);}
#line 3563 "parser.tab.c"
    break;

  case 116: /* $@22: %empty  */
#line 2007 "parser.y"
                                                                                              {printJUMPtype(7);}
#line 3569 "parser.tab.c"
    break;

  case 117: /* $@23: %empty  */
#line 2007 "parser.y"
                                                                                                                             {if(checkBreak){printVM("jump ENDWHILE_",whileCounter);} checkBreak=false; printJUMPtype(8);}
#line 3575 "parser.tab.c"
    break;

  case 118: /* $@24: %empty  */
#line 2007 "parser.y"
                                                                                                                                                                                                                            {printJUMPtype(6);}
#line 3581 "parser.tab.c"
    break;

  case 119: /* while_statement: WHILE $@20 $@21 OPENBRACKET value CLOSEDBRACKET $@22 statement $@23 $@24  */
#line 2007 "parser.y"
                                                                                                                                                                                                                                                {printf("while loop\n");}
#line 3587 "parser.tab.c"
    break;

  case 120: /* $@25: %empty  */
#line 2013 "parser.y"
           {doWhileCounter++;}
#line 3593 "parser.tab.c"
    break;

  case 121: /* $@26: %empty  */
#line 2013 "parser.y"
                               {printJUMPtype(9);}
#line 3599 "parser.tab.c"
    break;

  case 122: /* $@27: %empty  */
#line 2013 "parser.y"
                                                             {if(checkBreak) {printVM("jump ENDDoWHILE_",doWhileCounter);} checkBreak=false;}
#line 3605 "parser.tab.c"
    break;

  case 123: /* $@28: %empty  */
#line 2013 "parser.y"
                                                                                                                                                                        {printJUMPtype(10);}
#line 3611 "parser.tab.c"
    break;

  case 124: /* $@29: %empty  */
#line 2013 "parser.y"
                                                                                                                                                                                             {printJUMPtype(11);}
#line 3617 "parser.tab.c"
    break;

  case 125: /* $@30: %empty  */
#line 2013 "parser.y"
                                                                                                                                                                                                                                          {printJUMPtype(12);}
#line 3623 "parser.tab.c"
    break;

  case 126: /* do_while_statement: DO $@25 $@26 statement $@27 WHILE OPENBRACKET value $@28 $@29 CLOSEDBRACKET SEMICOLON $@30  */
#line 2013 "parser.y"
                                                                                                                                                                                                                                                               {printf("do-while loop\n");}
#line 3629 "parser.tab.c"
    break;

  case 127: /* $@31: %empty  */
#line 2019 "parser.y"
            {forCounter++;}
#line 3635 "parser.tab.c"
    break;

  case 128: /* $@32: %empty  */
#line 2019 "parser.y"
                                                            {printJUMPtype(16);}
#line 3641 "parser.tab.c"
    break;

  case 129: /* $@33: %empty  */
#line 2019 "parser.y"
                                                                                      { 
		}
#line 3648 "parser.tab.c"
    break;

  case 130: /* $@34: %empty  */
#line 2020 "parser.y"
                  {printJUMPtype(14);}
#line 3654 "parser.tab.c"
    break;

  case 131: /* $@35: %empty  */
#line 2023 "parser.y"
                {printVM("Jump startLoopBody",forCounter);}
#line 3660 "parser.tab.c"
    break;

  case 132: /* $@36: %empty  */
#line 2024 "parser.y"
                {printVM("incCounter",forCounter);}
#line 3666 "parser.tab.c"
    break;

  case 133: /* $@37: %empty  */
#line 2027 "parser.y"
                {printVM("jump endLoopBody",forCounter);}
#line 3672 "parser.tab.c"
    break;

  case 134: /* $@38: %empty  */
#line 2029 "parser.y"
                {printVM("startLoopBody",forCounter);}
#line 3678 "parser.tab.c"
    break;

  case 135: /* $@39: %empty  */
#line 2031 "parser.y"
                           {if(checkBreak){printVM("jump ENDFOR_",forCounter);}  checkBreak=false;   printVM("jump incCounter",forCounter);}
#line 3684 "parser.tab.c"
    break;

  case 136: /* $@40: %empty  */
#line 2031 "parser.y"
                                                                                                                                             {printVM("endLoopBody",forCounter);}
#line 3690 "parser.tab.c"
    break;

  case 137: /* $@41: %empty  */
#line 2031 "parser.y"
                                                                                                                                                                                  {printJUMPtype(17);}
#line 3696 "parser.tab.c"
    break;

  case 138: /* $@42: %empty  */
#line 2031 "parser.y"
                                                                                                                                                                                                       {printJUMPtype(18);}
#line 3702 "parser.tab.c"
    break;

  case 139: /* for_statement: FOR $@31 OPENBRACKET for_initialization $@32 value $@33 $@34 SEMICOLON $@35 $@36 for_expression CLOSEDBRACKET $@37 $@38 statement $@39 $@40 $@41 $@42  */
#line 2031 "parser.y"
                                                                                                                                                                                                                            {printf("for loop\n");}
#line 3708 "parser.tab.c"
    break;

  case 144: /* for_expression: IDENTIFIER EQUAL value SEMICOLON  */
#line 2043 "parser.y"
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
#line 3761 "parser.tab.c"
    break;

  case 145: /* for_expression: IDENTIFIER PLUS_EQ expression  */
#line 2092 "parser.y"
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
#line 3816 "parser.tab.c"
    break;

  case 146: /* for_expression: IDENTIFIER MINUS_EQ expression  */
#line 2143 "parser.y"
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
#line 3871 "parser.tab.c"
    break;

  case 147: /* for_expression: IDENTIFIER MULT_EQ expression  */
#line 2194 "parser.y"
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
#line 3926 "parser.tab.c"
    break;

  case 148: /* for_expression: IDENTIFIER DIV_EQ expression  */
#line 2245 "parser.y"
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
#line 3981 "parser.tab.c"
    break;

  case 151: /* $@43: %empty  */
#line 2302 "parser.y"
       {switchCounter++;}
#line 3987 "parser.tab.c"
    break;

  case 152: /* $@44: %empty  */
#line 2302 "parser.y"
                          {printVM("switchBegin",-1);}
#line 3993 "parser.tab.c"
    break;

  case 153: /* $@45: %empty  */
#line 2302 "parser.y"
                                                                                                      {scopeno++;}
#line 3999 "parser.tab.c"
    break;

  case 154: /* $@46: %empty  */
#line 2302 "parser.y"
                                                                                                                                         {endscope(scopeno); scopeno--;}
#line 4005 "parser.tab.c"
    break;

  case 155: /* $@47: %empty  */
#line 2302 "parser.y"
                                                                                                                                                                          {printVM("ENDSwitch",switchCounter);}
#line 4011 "parser.tab.c"
    break;

  case 156: /* switch_statement: SWITCH $@43 $@44 OPENBRACKET value CLOSEDBRACKET OPENCURL $@45 case_list CLOSEDCURL $@46 $@47  */
#line 2302 "parser.y"
                                                                                                                                                                                                                {printf("switch case\n");}
#line 4017 "parser.tab.c"
    break;

  case 159: /* $@48: %empty  */
#line 2311 "parser.y"
            {if (caseCounter!=0) printVM("\tPop",-1); }
#line 4023 "parser.tab.c"
    break;

  case 160: /* $@49: %empty  */
#line 2311 "parser.y"
                                                              {printVM("\tEQ",-1); }
#line 4029 "parser.tab.c"
    break;

  case 161: /* $@50: %empty  */
#line 2311 "parser.y"
                                                                                           {  { printVM("JumpFalse endCase:", caseCounter);}     printVM("case:", caseCounter++);  }
#line 4035 "parser.tab.c"
    break;

  case 162: /* case_statement: CASE $@48 value $@49 COLON $@50 statements  */
#line 2311 "parser.y"
                                                                                                                                                                                                 {if(checkBreak) {printJUMPtype(19);} if(!checkBreak){printVM("Jump Case:", caseCounter);} checkBreak=false ;   printVM("endCase",caseCounter-1); }
#line 4041 "parser.tab.c"
    break;

  case 163: /* $@51: %empty  */
#line 2312 "parser.y"
                     {printVM("default_case:",-1);}
#line 4047 "parser.tab.c"
    break;

  case 165: /* break_statement: BREAK SEMICOLON  */
#line 2318 "parser.y"
                                 {checkBreak=true; printf("Break statement\n");}
#line 4053 "parser.tab.c"
    break;

  case 166: /* continue_statement: CONTINUE SEMICOLON  */
#line 2319 "parser.y"
                                       {printf("Continue statement\n");}
#line 4059 "parser.tab.c"
    break;


#line 4063 "parser.tab.c"

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

#line 2321 "parser.y"



void printPushValue( char* x ){
		FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "\tPUSH \t%s\n", x);
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
				fprintf(VMcode, "\tEQUAL\n");
				break;
			case 2:
				fprintf(VMcode, "\tNOTEQUAL\n");
				break;
			case 3:
				fprintf(VMcode, "\tGREATERTOREQUAL\n");
				break;	
			case 4:
				fprintf(VMcode, "\tLESSOREQUAL\n");
				break;
			case 5:
				fprintf(VMcode, "\tGREATERTHAN\n");
				break;
			case 6:
				fprintf(VMcode, "\tLESSTHAN\n");
				break;
			case 7:
				fprintf(VMcode, "\tAND\n");
				break;
			case 8:
				fprintf(VMcode, "\tOR\n");
				break;
			case 9:
				fprintf(VMcode, "\tNOT\n");
				break;
			case 10:
				fprintf(VMcode, "\tTRUE\n");
				break;
			case 11:
				fprintf(VMcode, "\tFALSE\n");
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
				fprintf(VMcode, "\tADD\n");
				break;
			case 2:
				fprintf(VMcode, "\tMNIUS\n");
				break;
			case 3:
				fprintf(VMcode, "\tMUTI\n");
				break;	
			case 4:
				fprintf(VMcode, "\tDIV\n");
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
		fprintf(VMcode, "\tPUSHMEM \t%d\n", y);

		fclose(VMcode);
		}
		void PrintPopMem( int y){
			FILE *VMcode = fopen("VMcode.txt", "a");
		if(VMcode == NULL) {
			printf("can't open VMcode.txt file!\n");
			exit(1);
		}
		fprintf(VMcode, "\tPOPMEM \t%d\n", y);

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
