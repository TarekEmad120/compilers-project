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
  YYSYMBOL_EXTERN = 8,                     /* EXTERN  */
  YYSYMBOL_STATIC = 9,                     /* STATIC  */
  YYSYMBOL_CONST = 10,                     /* CONST  */
  YYSYMBOL_VOLATILE = 11,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 12,                      /* BOOL  */
  YYSYMBOL_SHORT = 13,                     /* SHORT  */
  YYSYMBOL_INT = 14,                       /* INT  */
  YYSYMBOL_LONG = 15,                      /* LONG  */
  YYSYMBOL_FLOAT = 16,                     /* FLOAT  */
  YYSYMBOL_VOID = 17,                      /* VOID  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_DEFAULT = 20,                   /* DEFAULT  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_SWITCH = 23,                    /* SWITCH  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_INC_OP = 30,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 31,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 32,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 33,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 34,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 35,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 36,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 37,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 38,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 39,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 40,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 41,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 42,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 43,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 44,                /* SUB_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 45,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 46,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 47,                 /* OR_ASSIGN  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* '.'  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '&'  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '+'  */
  YYSYMBOL_59_ = 59,                       /* '-'  */
  YYSYMBOL_60_ = 60,                       /* '~'  */
  YYSYMBOL_61_ = 61,                       /* '!'  */
  YYSYMBOL_62_ = 62,                       /* '/'  */
  YYSYMBOL_63_ = 63,                       /* '%'  */
  YYSYMBOL_64_ = 64,                       /* '<'  */
  YYSYMBOL_65_ = 65,                       /* '>'  */
  YYSYMBOL_66_ = 66,                       /* '^'  */
  YYSYMBOL_67_ = 67,                       /* '|'  */
  YYSYMBOL_68_ = 68,                       /* '?'  */
  YYSYMBOL_69_ = 69,                       /* ':'  */
  YYSYMBOL_70_ = 70,                       /* '='  */
  YYSYMBOL_71_ = 71,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_primary_expression = 73,        /* primary_expression  */
  YYSYMBOL_constant = 74,                  /* constant  */
  YYSYMBOL_string = 75,                    /* string  */
  YYSYMBOL_postfix_expression = 76,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 77,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 78,          /* unary_expression  */
  YYSYMBOL_unary_operator = 79,            /* unary_operator  */
  YYSYMBOL_cast_expression = 80,           /* cast_expression  */
  YYSYMBOL_mulexp = 81,                    /* mulexp  */
  YYSYMBOL_addexp = 82,                    /* addexp  */
  YYSYMBOL_shift_expression = 83,          /* shift_expression  */
  YYSYMBOL_rel_exp = 84,                   /* rel_exp  */
  YYSYMBOL_equals_ex = 85,                 /* equals_ex  */
  YYSYMBOL_and_exp = 86,                   /* and_exp  */
  YYSYMBOL_xor_exp = 87,                   /* xor_exp  */
  YYSYMBOL_or_exp = 88,                    /* or_exp  */
  YYSYMBOL_and_operant = 89,               /* and_operant  */
  YYSYMBOL_or_operant = 90,                /* or_operant  */
  YYSYMBOL_condition_exp = 91,             /* condition_exp  */
  YYSYMBOL_assignment_exp = 92,            /* assignment_exp  */
  YYSYMBOL_assignment_operator = 93,       /* assignment_operator  */
  YYSYMBOL_exp = 94,                       /* exp  */
  YYSYMBOL_constant_expression = 95,       /* constant_expression  */
  YYSYMBOL_declaration = 96,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 97,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 98,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 99,           /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 100,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 101,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 102, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 103,           /* type_qualifier  */
  YYSYMBOL_declarator = 104,               /* declarator  */
  YYSYMBOL_direct_declarator = 105,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list = 106,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 107,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 108,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 109,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 110,          /* identifier_list  */
  YYSYMBOL_type_name = 111,                /* type_name  */
  YYSYMBOL_abstract_declarator = 112,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 113, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 114,              /* initializer  */
  YYSYMBOL_initializer_list = 115,         /* initializer_list  */
  YYSYMBOL_designation = 116,              /* designation  */
  YYSYMBOL_designator_list = 117,          /* designator_list  */
  YYSYMBOL_designator = 118,               /* designator  */
  YYSYMBOL_stmt = 119,                     /* stmt  */
  YYSYMBOL_label_stmt = 120,               /* label_stmt  */
  YYSYMBOL_compound_stmt = 121,            /* compound_stmt  */
  YYSYMBOL_block_item_list = 122,          /* block_item_list  */
  YYSYMBOL_block_item = 123,               /* block_item  */
  YYSYMBOL_exp_stmt = 124,                 /* exp_stmt  */
  YYSYMBOL_selection_stmt = 125,           /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 126,           /* iteration_stmt  */
  YYSYMBOL_jmp_stmt = 127,                 /* jmp_stmt  */
  YYSYMBOL_translation_unit = 128,         /* translation_unit  */
  YYSYMBOL_external_declaration = 129,     /* external_declaration  */
  YYSYMBOL_func_def = 130,                 /* func_def  */
  YYSYMBOL_declaration_list = 131          /* declaration_list  */
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
#define YYLAST   1241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  347

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
       2,     2,     2,    61,     2,     2,     2,    63,    56,     2,
      48,    49,    57,    58,    55,    59,    52,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    71,
      64,    70,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    67,    54,    60,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    39,    40,    46,    47,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    66,
      67,    71,    72,    73,    74,    78,    79,    80,    81,    82,
      83,    87,    88,    92,    93,    94,    95,    99,   100,   101,
     105,   106,   107,   111,   112,   113,   114,   115,   119,   120,
     121,   125,   126,   130,   131,   135,   136,   140,   141,   145,
     146,   150,   151,   155,   156,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   172,   173,   177,   181,   182,   186,
     187,   188,   189,   190,   191,   195,   196,   200,   201,   205,
     206,   210,   211,   212,   213,   214,   215,   216,   222,   223,
     224,   225,   233,   234,   241,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   260,   261,   266,
     270,   271,   275,   276,   277,   281,   282,   286,   287,   291,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   317,
     318,   319,   323,   324,   325,   326,   330,   334,   335,   339,
     340,   346,   347,   348,   349,   350,   351,   355,   356,   357,
     361,   362,   366,   367,   371,   372,   376,   377,   381,   382,
     383,   388,   389,   390,   391,   392,   393,   397,   398,   399,
     400,   404,   405,   409,   410,   414,   415,   419,   420
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
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "EXTERN",
  "STATIC", "CONST", "VOLATILE", "BOOL", "SHORT", "INT", "LONG", "FLOAT",
  "VOID", "CHAR", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "CONTINUE", "BREAK", "RETURN", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "'('", "')'", "'['", "']'",
  "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "$accept", "primary_expression", "constant", "string",
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

#define YYPACT_NINF (-240)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     452,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,     1,   452,   452,   452,   702,  -240,  -240,
    -240,     6,  -240,   -19,  -240,   389,     0,  -240,  -240,  -240,
    -240,  -240,    15,     6,  -240,   296,   935,  -240,     1,  -240,
    1161,  1150,   603,  -240,  -240,   -55,   -51,  -240,  -240,  -240,
    -240,  1069,   -45,    42,    47,    54,   424,    58,    59,    64,
     486,  1075,  1075,   587,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,    81,   288,  1069,  -240,     3,
      60,   123,    11,   121,    65,    48,    72,   110,   -26,  -240,
    -240,   -15,  -240,  -240,  -240,  -240,   365,  -240,  -240,  -240,
    -240,  -240,  -240,   897,  -240,  -240,  -240,  -240,  -240,  -240,
       5,   102,   105,  -240,    19,   903,  -240,   112,  -240,   619,
     424,  -240,  -240,   117,   424,  1069,  1069,  1069,   164,   493,
    -240,  -240,  -240,   -14,   587,  -240,  -240,    49,   185,    13,
     185,   155,  -240,  -240,   967,  1069,   207,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  1069,  -240,  1069,  1069,
    1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,
    1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,  -240,  -240,
    -240,  1069,   209,  -240,   130,   935,   -31,  -240,  1134,   678,
    -240,  -240,    23,  -240,   452,  -240,   210,   165,   903,  -240,
    1069,  -240,   166,  -240,  -240,   424,  -240,    50,    61,    68,
     170,   525,   525,  -240,   173,  -240,  -240,  1177,  -240,  -240,
     999,  -240,    73,  -240,    26,  -240,  -240,  -240,  -240,  -240,
       3,     3,    60,    60,   123,   123,   123,   123,    11,    11,
     121,    65,    48,    72,   110,   -18,  -240,   168,  -240,  -240,
     692,  -240,  -240,  -240,  -240,   180,   189,   903,  -240,   188,
     751,  1192,   765,  -240,  -240,  -240,   191,   192,  -240,  -240,
     424,   424,   424,  1069,  1005,  1037,   187,   897,  -240,  -240,
    1069,  -240,  1069,  -240,  -240,  -240,   935,  -240,  -240,   194,
     903,  -240,  1069,  -240,   195,  -240,   198,   903,  -240,   197,
     824,  -240,  -240,   227,  -240,  -240,    85,   424,    87,   424,
      88,   136,  -240,  -240,  -240,  -240,   201,   204,  -240,  -240,
     206,   903,  -240,  1069,  -240,   208,   424,   199,  -240,   424,
    -240,   424,  -240,   838,  -240,  -240,  -240,   211,   214,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,    90,   102,   103,    97,    93,    94,    95,    96,
      91,    92,   194,     0,    80,    82,    84,     0,   191,   193,
     105,     0,    77,     0,    85,    88,   104,    79,    81,    83,
       1,   192,     0,     0,    78,     0,     0,   197,     0,   196,
       0,     0,     0,   106,    86,    88,     2,     6,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,    25,    26,    27,    28,    29,
      30,   176,    10,     3,     4,    21,    31,     0,    33,    37,
      40,    43,    48,    51,    53,    55,    57,    59,    61,    63,
      74,     0,   174,   175,   161,   162,     0,   172,   163,   164,
     165,   166,     2,     0,   151,    87,   198,   195,   125,   115,
     124,     0,   119,   120,     0,     0,   107,     0,   117,     0,
       0,    31,    76,     0,     0,     0,     0,     0,     0,     0,
     187,   188,   189,     0,     0,    22,    23,     0,    99,   128,
     101,     0,    15,    16,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    65,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,   171,
     173,     0,     0,   153,     0,     0,     0,   157,     0,     0,
     122,   123,   129,   114,     0,   116,     0,     0,     0,   113,
       0,   112,     0,   118,   167,     0,   169,     0,     0,     0,
       0,     0,     0,   190,     0,     5,    98,     0,   127,   100,
       0,    12,     0,    19,     0,    14,    64,    34,    35,    36,
      38,    39,    41,    42,    46,    47,    44,    45,    49,    50,
      52,    54,    56,    58,    60,     0,    75,     0,   160,   149,
       0,   152,   156,   158,   145,     0,     0,     0,   131,     0,
       0,     0,     0,   121,   126,   109,     0,     0,   111,   168,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    13,
       0,    11,     0,   159,   150,   155,     0,   146,   130,     0,
       0,   137,     0,   136,     0,   147,     0,     0,   138,     0,
       0,   108,   110,   178,   180,   181,     0,     0,     0,     0,
       0,     0,    20,    62,   154,   133,     0,     0,   135,   148,
       0,     0,   144,     0,   143,     0,     0,     0,   185,     0,
     183,     0,    17,     0,   132,   134,   140,     0,     0,   141,
     179,   182,   186,   184,    18,   139,   142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,  -240,  -240,  -240,  -240,  -240,     8,  -240,   -33,    31,
      43,   -21,    39,    95,    86,    98,    94,    97,  -240,   -49,
     -36,  -240,   -38,    92,    -5,    17,  -240,   241,  -240,   -25,
    -111,   -37,   -10,  -240,  -103,   -34,  -240,    82,  -240,   141,
     -96,  -240,   -35,     2,  -239,  -240,    91,   -40,  -240,    22,
    -240,   184,  -119,  -240,  -240,  -240,  -240,   264,  -240,  -240
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    72,    73,    74,    75,   222,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   156,    91,   123,    12,    38,    23,    24,    14,    15,
     139,    16,    32,    26,   119,   255,   112,   113,   114,   141,
     256,   192,   183,   184,   185,   186,   187,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    17,    18,    19,    40
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   105,   122,    25,    20,   118,   117,   111,    20,    20,
     212,   286,   198,   175,   191,    36,   128,    13,   120,   181,
      37,   182,   133,    45,   124,   137,   140,   216,    45,   219,
      92,    27,    28,    29,    13,   106,    33,   177,   138,   252,
     177,   177,   176,   218,   157,   165,   166,    39,    41,    21,
      42,   282,    34,   188,    21,   189,   178,   213,   110,   121,
     158,   217,   107,   189,    43,   159,   160,   104,   195,   135,
     136,   261,    22,   262,   196,   167,   168,   281,   118,   197,
     204,   177,   203,   202,   206,   121,   260,   207,   208,   209,
     125,    92,   274,   275,   286,   126,   137,   140,   215,   270,
     190,   140,   127,   140,   177,   177,   129,   224,   223,   138,
     271,   142,   143,   138,   172,   138,   177,   272,   161,   162,
     226,   171,   279,   177,   211,   227,   228,   229,   280,   144,
     130,   145,   122,   146,   327,   131,   329,   331,   245,   173,
     177,   246,   177,   177,   234,   235,   236,   237,   174,   104,
     251,   193,   118,   259,   290,   163,   164,   169,   170,   300,
     194,   203,   266,   199,   267,   269,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   249,   250,   205,   278,   210,   121,
     332,   333,   230,   231,   321,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   220,   110,   232,   233,   238,   239,
     225,   110,   248,   264,   104,   285,   265,   268,   273,   283,
     118,   289,   276,   203,   294,   118,   299,   296,   121,   287,
     303,   304,   305,   313,   110,   306,   308,   310,   288,   291,
     277,   104,   301,   302,   312,   315,   318,   319,   322,   326,
     104,   314,   334,   203,   316,   335,   317,   336,   241,   339,
     118,   320,   345,   203,   325,   346,   240,   328,   243,   330,
     341,   242,   244,   247,    44,   214,   263,   253,   110,   311,
     180,    31,     0,     0,   203,   337,   340,   338,     0,   342,
     121,   343,     0,     0,     0,     0,     0,   104,   285,    46,
      47,    48,    49,    50,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    51,    52,    53,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   147,   148,
     149,   150,   151,   152,   153,   154,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,    35,
      64,     0,    65,    66,    67,    68,    69,    70,   155,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    46,    47,
      48,    49,    50,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    51,    52,    53,     0,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     0,    35,   179,
       0,    65,    66,    67,    68,    69,    70,    46,    47,    48,
      49,    50,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,    35,    51,    52,    53,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,    36,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    63,     0,     0,     0,     0,    35,     0,     0,
      65,    66,    67,    68,    69,    70,     0,     0,     0,   102,
      47,    48,    49,    50,     0,    71,   102,    47,    48,    49,
      50,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     0,     0,    61,    62,     0,     0,     0,   102,    47,
      48,    49,    50,     0,    63,     0,     0,     0,     0,     0,
       0,    63,    65,    66,    67,    68,    69,    70,     0,    65,
      66,    67,    68,    69,    70,    61,    62,   132,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,     0,     0,     0,
     102,    47,    48,    49,    50,     0,    71,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   102,    47,    48,    49,
      50,     0,   115,     3,     4,     0,     0,    61,    62,     0,
       0,     0,   102,    47,    48,    49,    50,     0,   200,     3,
       4,     0,     0,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    61,
      62,    63,     0,     0,   116,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,     0,     0,    63,     0,     0,
     201,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,   102,    47,    48,    49,    50,     0,   257,     3,     4,
       0,     0,     0,     0,     0,   102,    47,    48,    49,    50,
       0,     0,    30,     0,     0,     0,     0,     0,    61,    62,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    61,    62,     0,     0,    63,     0,     0,   258,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      63,     0,   181,     0,   182,   103,   284,     0,    65,    66,
      67,    68,    69,    70,   102,    47,    48,    49,    50,     0,
     292,     3,     4,     0,     0,     0,     0,     0,   102,    47,
      48,    49,    50,     0,   297,     3,     4,     0,     0,     0,
       0,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,    63,
       0,     0,   293,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    63,     0,     0,   298,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,   102,    47,    48,
      49,    50,     0,   323,     3,     4,     0,     0,     0,     0,
       0,   102,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
       0,     0,    63,     0,     0,   324,     0,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    63,     0,   181,     0,
     182,   103,   344,     0,    65,    66,    67,    68,    69,    70,
     102,    47,    48,    49,    50,     0,   102,    47,    48,    49,
      50,     0,     0,     3,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,     0,
       0,     0,     0,    61,    62,     0,     0,     0,   102,    47,
      48,    49,    50,     0,     0,    63,     0,   181,     0,   182,
     103,    63,     0,    65,    66,    67,    68,    69,    70,    65,
      66,    67,    68,    69,    70,    61,    62,     0,     0,     0,
     102,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     0,   103,     0,
       0,    65,    66,    67,    68,    69,    70,    61,    62,     0,
       0,     0,   102,    47,    48,    49,    50,     0,   102,    47,
      48,    49,    50,     0,     0,    63,   221,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    61,
      62,     0,     0,     0,     0,    61,    62,     0,     0,     0,
     102,    47,    48,    49,    50,     0,     0,    63,     0,     0,
       0,     0,   277,    63,   307,    65,    66,    67,    68,    69,
      70,    65,    66,    67,    68,    69,    70,    61,    62,     0,
       0,     0,   102,    47,    48,    49,    50,     0,   102,    47,
      48,    49,    50,     0,     0,    63,   309,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    61,
      62,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,   134,     0,    65,    66,    67,    68,    69,
      70,    65,    66,    67,    68,    69,    70,    20,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   108,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,   188,   254,   189,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   109,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,   254,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   295
};

static const yytype_int16 yycheck[] =
{
      36,    36,    51,    13,     3,    42,    42,    41,     3,     3,
     129,   250,   115,    39,   110,    70,    56,     0,    69,    50,
      25,    52,    60,    33,    69,    63,    63,   138,    38,   140,
      35,    14,    15,    16,    17,    40,    55,    55,    63,    70,
      55,    55,    68,   139,    77,    34,    35,    25,    48,    48,
      50,    69,    71,    48,    48,    50,    71,    71,    41,    51,
      57,    48,    40,    50,    49,    62,    63,   103,    49,    61,
      62,    48,    71,    50,    55,    64,    65,    51,   115,   115,
     120,    55,   119,   119,   124,    77,   189,   125,   126,   127,
      48,    96,   211,   212,   333,    48,   134,   134,    49,    49,
     110,   138,    48,   140,    55,    55,    48,   145,   144,   134,
      49,    30,    31,   138,    66,   140,    55,    49,    58,    59,
     156,    56,    49,    55,   129,   158,   159,   160,    55,    48,
      71,    50,   181,    52,    49,    71,    49,    49,   176,    67,
      55,   177,    55,    55,   165,   166,   167,   168,    38,   185,
     185,    49,   189,   189,   257,    32,    33,    36,    37,   262,
      55,   198,   198,    51,   200,   205,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    54,    55,    69,   220,    24,   181,
      54,    55,   161,   162,   297,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    49,   188,   163,   164,   169,   170,
       3,   194,     3,     3,   250,   250,    51,    51,    48,    51,
     257,   257,    49,   260,   260,   262,   262,   261,   220,    49,
     270,   271,   272,   282,   217,   273,   274,   275,    49,    51,
      53,   277,    51,    51,   280,    51,    51,    49,    51,    22,
     286,   286,    51,   290,   290,    51,   292,    51,   172,    51,
     297,   297,    51,   300,   300,    51,   171,   307,   174,   309,
      71,   173,   175,   181,    33,   134,   194,   186,   261,   277,
      96,    17,    -1,    -1,   321,   321,   326,   323,    -1,   329,
     282,   331,    -1,    -1,    -1,    -1,    -1,   333,   333,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    53,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    70,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    71,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    56,    57,    58,    59,    60,    61,    -1,    56,
      57,    58,    59,    60,    61,    30,    31,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    71,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    30,    31,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    30,    31,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    30,
      31,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    30,    31,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    30,    31,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      48,    -1,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    48,    -1,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
       3,     4,     5,     6,     7,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    48,    -1,    50,    -1,    52,
      53,    48,    -1,    56,    57,    58,    59,    60,    61,    56,
      57,    58,    59,    60,    61,    30,    31,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    59,    60,    61,    30,    31,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    30,
      31,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    53,    48,    49,    56,    57,    58,    59,    60,
      61,    56,    57,    58,    59,    60,    61,    30,    31,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    30,
      31,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    56,    57,    58,    59,    60,
      61,    56,    57,    58,    59,    60,    61,     3,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     3,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    48,    49,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    49,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    96,    97,   100,   101,   103,   128,   129,   130,
       3,    48,    71,    98,    99,   104,   105,    97,    97,    97,
       0,   129,   104,    55,    71,    53,    70,    96,    97,   121,
     131,    48,    50,    49,    99,   104,     3,     4,     5,     6,
       7,    19,    20,    21,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    48,    54,    56,    57,    58,    59,    60,
      61,    71,    73,    74,    75,    76,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    94,    96,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     3,    53,    92,   114,    96,   121,     3,    49,
      97,   107,   108,   109,   110,     9,    51,    92,   103,   106,
      69,    78,    91,    95,    69,    48,    48,    48,   119,    48,
      71,    71,    71,    94,    48,    78,    78,    94,   101,   102,
     103,   111,    30,    31,    48,    50,    52,    40,    41,    42,
      43,    44,    45,    46,    47,    70,    93,    80,    57,    62,
      63,    58,    59,    32,    33,    34,    35,    64,    65,    36,
      37,    56,    66,    67,    38,    39,    68,    55,    71,    54,
     123,    50,    52,   114,   115,   116,   117,   118,    48,    50,
     104,   112,   113,    49,    55,    49,    55,    92,   106,    51,
       9,    51,    92,   103,   119,    69,   119,    94,    94,    94,
      24,    96,   124,    71,   111,    49,   102,    48,   112,   102,
      49,    49,    77,    92,    94,     3,    92,    80,    80,    80,
      81,    81,    82,    82,    83,    83,    83,    83,    84,    84,
      85,    86,    87,    88,    89,    94,    92,    95,     3,    54,
      55,   114,    70,   118,    49,   107,   112,     9,    51,    92,
     106,    48,    50,   109,     3,    51,    92,    92,    51,   119,
      49,    49,    49,    48,   124,   124,    49,    53,    80,    49,
      55,    51,    69,    51,    54,   114,   116,    49,    49,    92,
     106,    51,     9,    51,    92,    49,   107,     9,    51,    92,
     106,    51,    51,   119,   119,   119,    94,    49,    94,    49,
      94,   115,    92,    91,   114,    51,    92,    92,    51,    49,
      92,   106,    51,     9,    51,    92,    22,    49,   119,    49,
     119,    49,    54,    55,    51,    51,    51,    92,    92,    51,
     119,    71,   119,   119,    54,    51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    81,    81,    81,    81,    82,    82,    82,
      83,    83,    83,    84,    84,    84,    84,    84,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   103,   103,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   116,   117,   117,   118,
     118,   119,   119,   119,   119,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   126,   126,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     3,     3,     6,     5,
       6,     5,     4,     4,     4,     3,     4,     1,     2,     1,
       1,     3,     2,     2,     1,     1,     3,     2,     1,     1,
       3,     2,     5,     4,     5,     4,     3,     3,     3,     6,
       5,     5,     6,     4,     4,     2,     3,     3,     4,     3,
       4,     1,     2,     1,     4,     3,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     1,     1,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     6,     7,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2
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

#line 1766 "y.tab.c"

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

#line 423 "parser2.y"

#include <stdio.h>
void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}
