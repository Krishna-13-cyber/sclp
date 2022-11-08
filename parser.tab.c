/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdlib.h>
#include <stdio.h>
#include "symbol_table.h"
#include "ast.h"
#include "semantic.h"
#include "code_printer.h"

extern void yyerror(const char* s);
extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int linenumber;
extern int assignment_flag;
sym_ptr temp = NULL;
ast_node *ast = NULL;

#define YYDEBUG 1

#line 78 "parser.tab.c"

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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LBRACE = 258,
    RBRACE = 259,
    LPAREN = 260,
    RPAREN = 261,
    LSQUARE = 262,
    RSQUARE = 263,
    OPR_LGL_OR = 264,
    OPR_LGL_AND = 265,
    OPR_BW_OR = 266,
    OPR_BW_AND = 267,
    OPR_EQ = 268,
    OPR_NE = 269,
    OPR_GT = 270,
    OPR_LT = 271,
    OPR_GE = 272,
    OPR_LE = 273,
    OPR_BW_LFT = 274,
    OPR_BW_RGT = 275,
    OPR_ADD = 276,
    OPR_SUB = 277,
    OPR_MUL = 278,
    OPR_DIV = 279,
    OPR_MOD = 280,
    OPR_BW_NOT = 281,
    OPR_LGL_NOT = 282,
    OPR_ASSIGNMENT = 283,
    SEMICOLON = 284,
    COLON = 285,
    COMMA = 286,
    DOT_OPERATOR = 287,
    DT_INT = 288,
    DT_BOOL = 289,
    DT_VOID = 290,
    DT_CHAR = 291,
    KW_IF = 292,
    KW_ELIF = 293,
    KW_ELSE = 294,
    KW_FOR = 295,
    KW_IN = 296,
    KW_WHILE = 297,
    KW_BREAK = 298,
    KW_CONTINUE = 299,
    KW_CLASS = 300,
    KW_RETURN = 301,
    KW_DEF = 302,
    KW_DIGITAL_READ = 303,
    KW_DIGITAL_WRITE = 304,
    KW_DELAY = 305,
    KW_PWM = 306,
    KW_START_COUNTER = 307,
    KW_STOP_COUNTER = 308,
    KW_READ_COUNTER = 309,
    KW_INIT_RPMSG = 310,
    KW_RECV_RPMSG = 311,
    KW_SEND_RPMSG_INT = 312,
    KW_SEND_RPMSG_CHAR = 313,
    KW_SEND_RPMSG_BOOL = 314,
    KW_SEND_RPMSG_INTS = 315,
    KW_SEND_RPMSG_CHARS = 316,
    KW_SEND_RPMSG_BOOLS = 317,
    KW_PRINT = 318,
    KW_PRINTLN = 319,
    CONST_INT = 320,
    CONST_CHAR = 321,
    CONST_BOOL = 322,
    CONST_STRING = 323,
    IDENTIFIER = 324,
    INT_IDENTIFIER = 325,
    BOOL_IDENTIFIER = 326,
    VOID_IDENTIFIER = 327,
    CHAR_IDENTIFIER = 328,
    INT_ARR_IDENTIFIER = 329,
    CHAR_ARR_IDENTIFIER = 330,
    BOOL_ARR_IDENTIFIER = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    int integer;
    int boolean;
    char* string;
    struct symbol* symbol_handle;
    struct ast_node *node;
    struct ast_node_statements *statements;
    struct ast_node_compound_statement *compound_statement;
    struct ast_node_declaration *declaration;
    struct ast_node_array_declaration *array_declaration;
    struct ast_node_assignment *assignment;
    struct ast_node_array_assignment *array_assignment;
    struct ast_node_array_access *array_access;
    struct ast_node_expression *expression;
    struct ast_node_range_expression *range_expression;
    struct ast_node_constant *constant;
    struct ast_node_variable *variable;
    struct ast_node_conditional_if *conditional_if;
    struct ast_node_conditional_else_if *conditional_else_if;
    struct ast_node_loop_for *loop_for;
    struct ast_node_loop_while *loop_while;
    struct ast_node_loop_control *loop_control;
    struct ast_node_function_def *function_def;
    struct ast_node_param *param;
    struct ast_node_class *class;
    struct ast_node_object_decl *object_decl;
    struct ast_node_object_call *object_call;
    struct ast_node_function_call *function_call;
    struct ast_node_arguments *arguments;
    struct ast_node_utility_function_call *util_function_call;
    struct ast_node_print_string_function_call *print_string_function_call;
    struct ast_node_print_expression_function_call *print_expression_function_call;

#line 229 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX \
  (PTRDIFF_MAX < SIZE_MAX ? PTRDIFF_MAX : YY_CAST (ptrdiff_t, SIZE_MAX))

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
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

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0)  \
            || 4 < __GNUC__ + (7 <= __GNUC_MINOR__)))
   /* _Noreturn works as-is.  */
# elif 2 < __GNUC__ + (8 <= __GNUC_MINOR__) || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  108
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1000

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  317
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 12
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token number (for yychar).  */
#define YYMAXUTOK   331
/* YYUNDEFTOK -- Symbol number (for yytoken) that denotes an unknown
   token.  */
#define YYUNDEFTOK  2

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                         \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   133,   133,   138,   142,   147,   150,   153,   156,   160,
     165,   170,   174,   177,   183,   186,   189,   192,   195,   198,
     201,   204,   207,   210,   213,   216,   219,   222,   225,   228,
     231,   234,   237,   240,   245,   248,   251,   254,   257,   263,
     268,   279,   290,   301,   311,   321,   333,   345,   357,   371,
     383,   405,   427,   451,   470,   489,   510,   529,   550,   571,
     574,   577,   594,   611,   614,   617,   620,   623,   626,   629,
     632,   635,   638,   641,   648,   651,   654,   657,   662,   665,
     682,   685,   688,   691,   694,   699,   702,   705,   708,   711,
     714,   720,   723,   726,   731,   737,   741,   746,   750,   755,
     755,   763,   766,   769,   774,   780,   780,   804,   804,   828,
     828,   852,   852,   878,   883,   888,   892,   895,   900,   903,
     909,   915,   921,   929,   932,   935,   940,   962,   984,  1006,
    1028,  1031,  1035,  1040,  1043,  1048,  1051,  1056,  1059,  1062,
    1065
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LBRACE", "RBRACE", "LPAREN", "RPAREN",
  "LSQUARE", "RSQUARE", "OPR_LGL_OR", "OPR_LGL_AND", "OPR_BW_OR",
  "OPR_BW_AND", "OPR_EQ", "OPR_NE", "OPR_GT", "OPR_LT", "OPR_GE", "OPR_LE",
  "OPR_BW_LFT", "OPR_BW_RGT", "OPR_ADD", "OPR_SUB", "OPR_MUL", "OPR_DIV",
  "OPR_MOD", "OPR_BW_NOT", "OPR_LGL_NOT", "OPR_ASSIGNMENT", "SEMICOLON",
  "COLON", "COMMA", "DOT_OPERATOR", "DT_INT", "DT_BOOL", "DT_VOID",
  "DT_CHAR", "KW_IF", "KW_ELIF", "KW_ELSE", "KW_FOR", "KW_IN", "KW_WHILE",
  "KW_BREAK", "KW_CONTINUE", "KW_CLASS", "KW_RETURN", "KW_DEF",
  "KW_DIGITAL_READ", "KW_DIGITAL_WRITE", "KW_DELAY", "KW_PWM",
  "KW_START_COUNTER", "KW_STOP_COUNTER", "KW_READ_COUNTER",
  "KW_INIT_RPMSG", "KW_RECV_RPMSG", "KW_SEND_RPMSG_INT",
  "KW_SEND_RPMSG_CHAR", "KW_SEND_RPMSG_BOOL", "KW_SEND_RPMSG_INTS",
  "KW_SEND_RPMSG_CHARS", "KW_SEND_RPMSG_BOOLS", "KW_PRINT", "KW_PRINTLN",
  "CONST_INT", "CONST_CHAR", "CONST_BOOL", "CONST_STRING", "IDENTIFIER",
  "INT_IDENTIFIER", "BOOL_IDENTIFIER", "VOID_IDENTIFIER",
  "CHAR_IDENTIFIER", "INT_ARR_IDENTIFIER", "CHAR_ARR_IDENTIFIER",
  "BOOL_ARR_IDENTIFIER", "$accept", "start", "translation_unit", "program",
  "compound_statement", "statement_list", "statement", "class_inclusions",
  "empty_statement", "declaration", "array_declaration",
  "declaration_assignment", "array_declaration_assignment", "assignment",
  "array_assignment", "arithmetic_array_access", "boolean_array_access",
  "arithmetic_expression", "boolean_expression", "relational_expression",
  "logical_expression", "conditional_statement",
  "conditional_statement_else_if", "conditional_statement_else",
  "loop_statement_for", "$@1", "range_expression", "loop_statement_while",
  "function_definition", "$@2", "$@3", "$@4", "$@5", "class",
  "object_decl", "object_call", "parameters", "parameter_list_def",
  "parameter", "return_statement", "int_function_call",
  "bool_function_call", "char_function_call", "void_function_call",
  "function_call_parameters", "function_call_datatypes",
  "print_string_call", "print_expression_call", YY_NULLPTR
};
#endif

#define YYPACT_NINF (-228)
#define YYTABLE_NINF (-20)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     156,   428,  -228,    16,    17,    20,   -20,   -17,    -8,     5,
      30,   -41,   468,   -39,    47,    57,   -26,    10,    21,    61,
      32,    63,    65,    69,    78,   156,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,    52,    85,    89,    99,   154,   159,
     220,  -228,  -228,   284,   300,   348,   364,   412,   455,   -12,
     455,   132,   455,   193,   556,    93,   556,  -228,  -228,    87,
     556,   455,   455,   556,  -228,  -228,  -228,  -228,   102,   186,
     189,   233,   234,   235,  -228,  -228,   692,    38,  -228,  -228,
    -228,  -228,  -228,   213,   484,   500,   175,  -228,   556,   455,
     556,   556,   556,   556,   455,   455,   455,   455,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   455,   801,
     455,  -228,   819,   556,  -228,   837,   455,  -228,   960,   117,
    -228,   117,   201,   573,   106,   127,  -228,  -228,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,  -228,   556,   556,  -228,
     145,   241,   593,   157,   244,   622,   164,  -228,   960,   224,
      15,  -228,   707,    19,    94,    23,    26,   722,   855,   873,
     891,   642,   182,   737,   183,    96,   190,   752,  -228,   217,
    -228,   196,  -228,  -228,   909,   927,   945,   185,   192,   975,
     975,   975,   975,   975,   975,   133,   133,   127,   127,  -228,
    -228,  -228,   257,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   556,  -228,  -228,  -228,  -228,
    -228,  -228,   240,   243,   245,   246,  -228,   247,  -228,   208,
    -228,   200,     9,   239,  -228,  -228,  -228,   242,   248,   249,
     250,  -228,   455,   455,   556,  -228,  -228,   206,  -228,   252,
     274,  -228,   455,   657,   274,   253,   135,   135,   135,   135,
     767,   782,   100,   256,   556,  -228,   975,   455,  -228,   259,
     228,   230,   231,   274,   270,  -228,   274,   274,   274,  -228,
    -228,  -228,  -228,   117,   672,   135,  -228,  -228,  -228,  -228,
     135,  -228,  -228,  -228,  -228,   455,   274,  -228,   975,    88,
     298,  -228,  -228,  -228,  -228,  -228,  -228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,    14,     5,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     6,
       7,     9,     8,    25,     0,     0,     0,     0,     0,     0,
       0,    11,    13,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,   125,    59,    60,    78,    61,    79,
      62,     0,     0,     0,    63,    80,     0,     0,    82,    83,
      64,    81,    65,     0,     0,     0,     0,   114,   132,     0,
     132,     0,   132,   132,     0,     0,     0,     0,     1,     4,
      26,    27,    28,    29,    32,    33,    10,    12,     0,     0,
       0,    40,     0,     0,    41,     0,     0,    42,     0,     0,
      99,     0,     0,     0,     0,    76,    75,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,   115,   133,   134,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
     104,     0,    77,    84,     0,     0,     0,    66,    67,    87,
      88,    85,    86,    89,    90,    68,    69,    70,    71,    72,
      73,    74,    93,    92,   105,   107,   111,   109,   135,   137,
     138,   136,   139,   140,   126,     0,    50,   127,    51,   129,
     128,    52,     0,     0,     0,     0,    46,     0,    47,     0,
      48,    98,     0,     0,    56,    57,    58,     0,     0,     0,
       0,   130,     0,     0,     0,    43,    45,     0,    44,     0,
       0,    94,     0,     0,     0,     0,   117,   117,   117,   117,
       0,     0,     0,     0,     0,    97,   101,     0,   100,     0,
       0,     0,     0,     0,   116,   119,     0,     0,     0,    53,
      54,    55,    49,     0,   102,   117,   120,   121,   122,   106,
       0,   108,   112,   110,    95,     0,     0,   118,   103,     0,
       0,    34,    35,    36,    37,    38,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,   280,  -111,  -228,     6,    -3,    -1,     0,
       1,     2,     3,  -228,  -228,  -228,  -228,    -7,     7,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -227,  -228,    14,  -228,
       8,    11,    44,  -228,    84,    82,  -228,  -228
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    50,    28,    52,    29,    30,
      31,    32,    33,    34,    35,    84,    85,   128,   169,    88,
      89,    36,   241,   261,    37,   189,   264,    38,    39,   247,
     248,   250,   249,    40,    41,    42,   283,   284,   285,    43,
      90,    91,    92,    47,   170,   171,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    54,    55,    56,    57,    86,    96,    51,    44,    44,
      64,    45,    45,    65,   118,    98,   120,   121,   188,    87,
     190,   224,    66,    58,    60,   227,   100,    62,    69,   229,
      93,    71,   230,    44,    67,    72,    45,   103,    99,   262,
     286,   287,   288,    97,    46,    46,   225,   157,   158,   101,
     225,   119,    94,   122,   225,   125,   117,   225,    44,    68,
     104,    45,    95,   133,   135,   136,   102,   159,   306,    46,
     105,   129,   106,   131,    75,    76,   107,   134,   108,    78,
     137,   110,    80,    81,    82,    59,    61,   162,   165,    63,
     132,   168,   172,   168,    46,   168,   168,   177,   178,   179,
     180,   163,   166,   157,   158,   157,   158,    98,   174,   157,
     158,   181,   193,   183,   111,   157,   158,     2,   112,   187,
       1,     3,     4,   228,     5,   238,   157,   158,   113,   291,
     185,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   275,
     153,   154,   155,   278,   151,   152,   153,   154,   155,     1,
     123,   124,   130,   220,   212,   213,   157,   158,   280,   281,
     223,   282,   299,   157,   158,   301,   302,   303,   214,   215,
     216,   217,   304,   114,   173,     2,   175,   176,   115,     3,
       4,   100,     5,     6,   103,   309,     7,   142,     8,     9,
      10,    11,    12,    13,   149,   150,   151,   152,   153,   154,
     155,   149,   150,   151,   152,   153,   154,   155,   168,    14,
      15,   126,   127,     1,   116,    16,    17,    18,    19,    20,
      21,    22,    23,   157,   158,   263,   257,   258,   259,   260,
     138,   139,   140,   160,   167,   270,   271,   218,   191,     2,
     221,   235,   237,     3,     4,   276,     5,     6,   242,   239,
       7,   272,     8,     9,    10,   243,    12,   158,   252,   265,
     294,   253,   266,   254,   273,   255,   256,     1,   267,   268,
     269,   293,   274,    14,    15,   292,   279,   -15,   -15,   295,
      17,    18,    19,    20,    21,    22,    23,   296,   308,   297,
     298,   300,   316,   -16,   -16,   109,   310,   251,   311,   312,
     313,   314,   315,   -15,   307,     0,     0,   -15,   -15,     0,
     -15,   -15,     0,     0,   -15,     0,   -15,   -15,   -15,   -16,
     -15,     0,     0,   -16,   -16,     0,   -16,   -16,     0,     0,
     -16,     0,   -16,   -16,   -16,     0,   -16,   -15,   -15,     0,
       0,   -17,   -17,     0,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,     0,     0,   -16,   -16,     0,     0,   -18,   -18,     0,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -17,     0,     0,
       0,   -17,   -17,     0,   -17,   -17,     0,     0,   -17,     0,
     -17,   -17,   -17,   -18,   -17,     0,     0,   -18,   -18,     0,
     -18,   -18,     0,     0,   -18,     0,   -18,   -18,   -18,     0,
     -18,   -17,   -17,     0,     0,   -19,   -19,     0,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,     0,     0,   -18,   -18,     0,
       0,     1,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -19,     0,     0,     0,   -19,   -19,     0,   -19,   -19,
       0,     0,   -19,     0,   -19,   -19,   -19,     2,   -19,     0,
     118,     3,     4,     0,     5,     6,     0,     0,     7,     0,
       8,     9,    10,    70,    12,   -19,   -19,    71,     0,     0,
       0,    72,   -19,   -19,   -19,   -19,   -19,   -19,   -19,    70,
      71,    14,    15,     0,    72,    73,     0,    74,    17,    18,
      19,    20,    21,    22,    23,    70,    71,     0,     0,     0,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    71,     0,     0,    78,    72,    73,    80,    81,
      82,     0,     0,    75,    76,    77,     0,     0,    78,    79,
       0,    80,    81,    82,    83,     0,     0,     0,     0,    75,
      76,    77,   161,     0,    78,    79,     0,    80,    81,    82,
      83,    70,     0,     0,     0,    75,    76,    77,   164,     0,
      78,    79,     0,    80,    81,    82,    83,     0,    71,   192,
       0,     0,    72,    73,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   219,
       0,     0,     0,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     0,
       0,    75,    76,    77,     0,     0,    78,    79,   222,    80,
      81,    82,    83,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   192,     0,
       0,     0,     0,   141,   142,     0,     0,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   141,   142,
       0,     0,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   141,   142,     0,     0,   277,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,     0,     0,
       0,     0,   305,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   141,   142,
       0,   156,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   141,   142,     0,   226,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   141,   142,
       0,   231,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   141,   142,     0,   236,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   141,   142,
       0,   240,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   141,   142,     0,   289,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,     0,   182,
       0,   290,   141,   142,     0,     0,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   184,     0,     0,
     141,   142,     0,     0,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   186,     0,     0,   141,   142,
       0,     0,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   232,     0,     0,   141,   142,     0,     0,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   233,     0,     0,   141,   142,     0,     0,     0,     0,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   234,
       0,     0,   141,   142,     0,     0,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   244,     0,     0,
     141,   142,     0,     0,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   245,     0,     0,   141,   142,
       0,     0,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   246,     0,     0,   141,   142,     0,     0,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   141,   142,     0,     0,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155
};

static const yytype_int16 yycheck[] =
{
       1,     1,     1,     1,     1,    12,    32,     1,     0,     1,
      30,     0,     1,    30,     5,     5,    28,    29,   129,    12,
     131,     6,    30,     7,     7,     6,     5,     7,    69,     6,
      69,    22,     6,    25,    29,    26,    25,     5,    28,    30,
     267,   268,   269,    69,     0,     1,    31,     9,    10,    28,
      31,    58,     5,    60,    31,    62,    50,    31,    50,    29,
      28,    50,     5,    70,    71,    72,     5,    29,   295,    25,
       7,    64,     7,    66,    65,    66,     7,    70,     0,    70,
      73,    29,    73,    74,    75,    69,    69,    94,    95,    69,
       3,    98,    99,   100,    50,   102,   103,   104,   105,   106,
     107,    94,    95,     9,    10,     9,    10,     5,   101,     9,
      10,   118,     6,   120,    29,     9,    10,    29,    29,   126,
       3,    33,    34,    29,    36,    29,     9,    10,    29,    29,
     123,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   260,
      23,    24,    25,   264,    21,    22,    23,    24,    25,     3,
      28,    29,    69,     6,   157,   158,     9,    10,    33,    34,
       6,    36,   283,     9,    10,   286,   287,   288,    33,    34,
      35,    36,   293,    29,   100,    29,   102,   103,    29,    33,
      34,     5,    36,    37,     5,   306,    40,    12,    42,    43,
      44,    45,    46,    47,    19,    20,    21,    22,    23,    24,
      25,    19,    20,    21,    22,    23,    24,    25,   225,    63,
      64,    28,    29,     3,     4,    69,    70,    71,    72,    73,
      74,    75,    76,     9,    10,   242,    28,    29,    38,    39,
       7,     7,     7,    30,    69,   252,   253,     6,    47,    29,
       6,    69,    69,    33,    34,   262,    36,    37,    41,    69,
      40,   254,    42,    43,    44,    69,    46,    10,    28,    30,
     277,    28,    30,    28,    68,    29,    29,     3,    30,    30,
      30,   274,    30,    63,    64,    29,    33,     3,     4,    30,
      70,    71,    72,    73,    74,    75,    76,    69,   305,    69,
      69,    31,     4,     3,     4,    25,   309,   225,   309,   309,
     309,   309,   309,    29,   300,    -1,    -1,    33,    34,    -1,
      36,    37,    -1,    -1,    40,    -1,    42,    43,    44,    29,
      46,    -1,    -1,    33,    34,    -1,    36,    37,    -1,    -1,
      40,    -1,    42,    43,    44,    -1,    46,    63,    64,    -1,
      -1,     3,     4,    -1,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    63,    64,    -1,    -1,     3,     4,    -1,
      70,    71,    72,    73,    74,    75,    76,    29,    -1,    -1,
      -1,    33,    34,    -1,    36,    37,    -1,    -1,    40,    -1,
      42,    43,    44,    29,    46,    -1,    -1,    33,    34,    -1,
      36,    37,    -1,    -1,    40,    -1,    42,    43,    44,    -1,
      46,    63,    64,    -1,    -1,     3,     4,    -1,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    63,    64,    -1,
      -1,     3,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    29,    -1,    -1,    -1,    33,    34,    -1,    36,    37,
      -1,    -1,    40,    -1,    42,    43,    44,    29,    46,    -1,
       5,    33,    34,    -1,    36,    37,    -1,    -1,    40,    -1,
      42,    43,    44,     5,    46,    63,    64,    22,    -1,    -1,
      -1,    26,    70,    71,    72,    73,    74,    75,    76,     5,
      22,    63,    64,    -1,    26,    27,    -1,    29,    70,    71,
      72,    73,    74,    75,    76,     5,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    22,    -1,    -1,    70,    26,    27,    73,    74,
      75,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    70,    71,    -1,    73,    74,    75,
      76,     5,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      70,    71,    -1,    73,    74,    75,    76,    -1,    22,     6,
      -1,    -1,    26,    27,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     6,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    65,    66,    67,    -1,    -1,    70,    71,     6,    73,
      74,    75,    76,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     6,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    11,    12,    -1,    -1,    30,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    11,    12,
      -1,    29,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    11,    12,    -1,    29,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    11,    12,
      -1,    29,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    11,    12,    -1,    29,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    11,    12,
      -1,    29,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    11,    12,    -1,    29,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,     8,
      -1,    29,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,     8,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,     8,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,     8,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,     8,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,     8,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,     8,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,     8,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,     8,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    29,    33,    34,    36,    37,    40,    42,    43,
      44,    45,    46,    47,    63,    64,    69,    70,    71,    72,
      73,    74,    75,    76,    78,    79,    80,    81,    83,    85,
      86,    87,    88,    89,    90,    91,    98,   101,   104,   105,
     110,   111,   112,   116,   117,   118,   119,   120,   123,   124,
      82,    83,    84,    85,    86,    87,    88,    89,     7,    69,
       7,    69,     7,    69,    30,    30,    30,    29,    29,    69,
       5,    22,    26,    27,    29,    65,    66,    67,    70,    71,
      73,    74,    75,    76,    92,    93,    94,    95,    96,    97,
     117,   118,   119,    69,     5,     5,    32,    69,     5,    28,
       5,    28,     5,     5,    28,     7,     7,     7,     0,    80,
      29,    29,    29,    29,    29,    29,     4,    83,     5,    94,
      28,    29,    94,    28,    29,    94,    28,    29,    94,    95,
      69,    95,     3,    94,    95,    94,    94,    95,     7,     7,
       7,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    29,     9,    10,    29,
      30,    68,    94,    95,    68,    94,    95,    69,    94,    95,
     121,   122,    94,   121,    95,   121,   121,    94,    94,    94,
      94,    94,     8,    94,     8,    95,     8,    94,    81,   102,
      81,    47,     6,     6,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    33,    34,    35,    36,     6,     6,
       6,     6,     6,     6,     6,    31,    29,     6,    29,     6,
       6,    29,     8,     8,     8,    69,    29,    69,    29,    69,
      29,    99,    41,    69,     8,     8,     8,   106,   107,   109,
     108,   122,    28,    28,    28,    29,    29,    28,    29,    38,
      39,   100,    30,    94,   103,    30,    30,    30,    30,    30,
      94,    94,    95,    68,    30,    81,    94,    30,    81,    33,
      33,    34,    36,   113,   114,   115,   113,   113,   113,    29,
      29,    29,    29,    95,    94,    30,    69,    69,    69,    81,
      31,    81,    81,    81,    81,    30,   113,   115,    94,    81,
      84,    85,    86,    87,    88,    89,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    79,    79,    80,    80,    80,    80,    80,
      81,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    85,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    89,
      90,    90,    90,    91,    91,    91,    92,    92,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    98,    99,    99,   100,   100,   102,
     101,   103,   103,   103,   104,   106,   105,   107,   105,   108,
     105,   109,   105,   110,   111,   112,   113,   113,   114,   114,
     115,   115,   115,   116,   116,   116,   117,   118,   119,   120,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     6,     6,     6,     5,     5,     5,     8,
       4,     4,     4,     7,     7,     7,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     6,     5,     0,     2,     0,     0,
       7,     2,     3,     5,     4,     0,     8,     0,     8,     0,
       8,     0,     8,    12,     2,     3,     1,     0,     3,     1,
       2,     2,     2,     3,     3,     2,     4,     4,     4,     4,
       3,     1,     0,     1,     1,     4,     4,     4,     4,     4,
       4
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_uint8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     7,     9,     0,
      11,    13,     0,     0,    15,     0,    17,    19,    21,    47,
      23,     0,     0,    49,    51,     0,    53,    55,     0,     0,
      57,     0,    59,    61,    63,     0,    65,    25,    27,     0,
       0,    85,    87,     0,    29,    31,    33,    35,    37,    39,
      41,     0,     0,    67,    69,     0,     0,   127,   129,     0,
      71,    73,    75,    77,    79,    81,    83,    89,     0,     0,
       0,    91,    93,     0,    95,    97,     0,     0,    99,     0,
     101,   103,   105,   131,   107,     0,     0,   133,   135,     0,
     137,   139,     0,     0,   141,     0,   143,   145,   147,     0,
     149,   109,   111,     0,     0,   169,   171,     0,   113,   115,
     117,   119,   121,   123,   125,     0,     0,   151,   153,     0,
       0,     0,     0,     0,   155,   157,   159,   161,   163,   165,
     167,   173,     0,     0,     0,   175,   177,     0,   179,   181,
       0,     0,   183,     0,   185,   187,   189,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   195,     0,     0,     0,
       0,     0,   197,   199,   201,   203,   205,   207,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,    34,     0,    34,     0,    34,     0,    34,     0,    34,
       0,    34,     0,    34,     0,    34,     0,    34,     0,    34,
       0,    34,     0,    34,     0,    34,     0,    34,     0,    34,
       0,    34,     0,    34,     0,    34,     0,    34,     0,    34,
       0,    34,     0,    35,     0,    35,     0,    35,     0,    35,
       0,    35,     0,    35,     0,    35,     0,    35,     0,    35,
       0,    35,     0,    35,     0,    35,     0,    35,     0,    35,
       0,    35,     0,    35,     0,    35,     0,    35,     0,    35,
       0,    35,     0,    35,     0,    36,     0,    36,     0,    36,
       0,    36,     0,    36,     0,    36,     0,    36,     0,    36,
       0,    36,     0,    36,     0,    36,     0,    36,     0,    36,
       0,    36,     0,    36,     0,    36,     0,    36,     0,    36,
       0,    36,     0,    36,     0,    36,     0,    37,     0,    37,
       0,    37,     0,    37,     0,    37,     0,    37,     0,    37,
       0,    37,     0,    37,     0,    37,     0,    37,     0,    37,
       0,    37,     0,    37,     0,    37,     0,    37,     0,    37,
       0,    37,     0,    37,     0,    37,     0,    37,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif



/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Type, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, ptrdiff_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static ptrdiff_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      ptrdiff_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return YY_CAST (ptrdiff_t, strlen (yystr));
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers. */
typedef int yyStateNum;

/** Rule numbers. */
typedef int yyRuleNum;

/** Grammar symbol. */
typedef int yySymbol;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  ptrdiff_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  ptrdiff_t yysize;
  ptrdiff_t yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  ptrdiff_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  return yytoken == YYEMPTY ? "" : yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yySymbol
yygetToken (int *yycharp)
{
  yySymbol yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token: "));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = yytoken = YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
  case 2:
#line 133 "parser.y"
                        {
        ast = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
     }
#line 1617 "parser.tab.c"
    break;

  case 3:
#line 138 "parser.y"
                          {
                    ((*yyvalp).node) = create_translation_unit();
                    ((*yyvalp).node) = add_program_unit(((*yyvalp).node), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node));
                }
#line 1626 "parser.tab.c"
    break;

  case 4:
#line 142 "parser.y"
                                               {
                    ((*yyvalp).node) = add_program_unit((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node));
                }
#line 1634 "parser.tab.c"
    break;

  case 5:
#line 147 "parser.y"
                   {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements);     
       }
#line 1642 "parser.tab.c"
    break;

  case 6:
#line 150 "parser.y"
                             {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_def);
       }
#line 1650 "parser.tab.c"
    break;

  case 7:
#line 153 "parser.y"
               {
           ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.class);
       }
#line 1658 "parser.tab.c"
    break;

  case 8:
#line 156 "parser.y"
                       {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.object_call);
        }
#line 1666 "parser.tab.c"
    break;

  case 9:
#line 160 "parser.y"
                       {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.object_decl);
        }
#line 1674 "parser.tab.c"
    break;

  case 10:
#line 165 "parser.y"
                                                 {
                    ((*yyvalp).compound_statement) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.compound_statement);
                  }
#line 1682 "parser.tab.c"
    break;

  case 11:
#line 170 "parser.y"
                          {
                ((*yyvalp).compound_statement) = create_compound_statement_node();
                ((*yyvalp).compound_statement) = add_compound_statement_node(((*yyvalp).compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements));
              }
#line 1691 "parser.tab.c"
    break;

  case 12:
#line 174 "parser.y"
                                         {
                  ((*yyvalp).compound_statement)  = add_compound_statement_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements));
              }
#line 1699 "parser.tab.c"
    break;

  case 13:
#line 177 "parser.y"
                                 {
                ((*yyvalp).compound_statement) = create_compound_statement_node();
                ((*yyvalp).compound_statement) = add_compound_statement_node(((*yyvalp).compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                }
#line 1708 "parser.tab.c"
    break;

  case 14:
#line 183 "parser.y"
                              {
            ((*yyvalp).statements) = create_statement_node(AST_NODE_COMPOUND_STATEMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
         }
#line 1716 "parser.tab.c"
    break;

  case 15:
#line 186 "parser.y"
                           {
            ((*yyvalp).statements) = create_statement_node(AST_NODE_EMPTY_STATEMENT, NULL); 
         }
#line 1724 "parser.tab.c"
    break;

  case 16:
#line 189 "parser.y"
                       {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration));
         }
#line 1732 "parser.tab.c"
    break;

  case 17:
#line 192 "parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1740 "parser.tab.c"
    break;

  case 18:
#line 195 "parser.y"
                                  {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration));
         }
#line 1748 "parser.tab.c"
    break;

  case 19:
#line 198 "parser.y"
                                        {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1756 "parser.tab.c"
    break;

  case 20:
#line 201 "parser.y"
                      {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ASSIGNMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.assignment));
         }
#line 1764 "parser.tab.c"
    break;

  case 21:
#line 204 "parser.y"
                            {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_ASSIGNMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_assignment));
         }
#line 1772 "parser.tab.c"
    break;

  case 22:
#line 207 "parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_CONDITIONAL_IF, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.conditional_if));
         }
#line 1780 "parser.tab.c"
    break;

  case 23:
#line 210 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_FOR, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.loop_for));
         }
#line 1788 "parser.tab.c"
    break;

  case 24:
#line 213 "parser.y"
                                {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_WHILE, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.loop_while));
         }
#line 1796 "parser.tab.c"
    break;

  case 25:
#line 216 "parser.y"
                            {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_RETURN, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
         }
#line 1804 "parser.tab.c"
    break;

  case 26:
#line 219 "parser.y"
                                       {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.function_call));
         }
#line 1812 "parser.tab.c"
    break;

  case 27:
#line 222 "parser.y"
                                        {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.function_call));
         }
#line 1820 "parser.tab.c"
    break;

  case 28:
#line 225 "parser.y"
                                        {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.function_call));
         }
#line 1828 "parser.tab.c"
    break;

  case 29:
#line 228 "parser.y"
                                        {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.function_call));
         }
#line 1836 "parser.tab.c"
    break;

  case 30:
#line 231 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_BREAK, (void*)create_loop_control_node(AST_NODE_LOOP_BREAK));
         }
#line 1844 "parser.tab.c"
    break;

  case 31:
#line 234 "parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_CONTINUE, (void*)create_loop_control_node(AST_NODE_LOOP_CONTINUE));
         }
#line 1852 "parser.tab.c"
    break;

  case 32:
#line 237 "parser.y"
                                       {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_STRING_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.print_string_function_call));
         }
#line 1860 "parser.tab.c"
    break;

  case 33:
#line 240 "parser.y"
                                           {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_EXP_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.print_expression_function_call));
         }
#line 1868 "parser.tab.c"
    break;

  case 34:
#line 245 "parser.y"
                                  {
            ((*yyvalp).compound_statement) = create_statement_node(AST_NODE_EMPTY_STATEMENT, NULL); 
         }
#line 1876 "parser.tab.c"
    break;

  case 35:
#line 248 "parser.y"
                       {
             ((*yyvalp).compound_statement) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration));
         }
#line 1884 "parser.tab.c"
    break;

  case 36:
#line 251 "parser.y"
                             {
             ((*yyvalp).compound_statement) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1892 "parser.tab.c"
    break;

  case 37:
#line 254 "parser.y"
                                  {
             ((*yyvalp).compound_statement) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration));
         }
#line 1900 "parser.tab.c"
    break;

  case 38:
#line 257 "parser.y"
                                        {
             ((*yyvalp).compound_statement) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1908 "parser.tab.c"
    break;

  case 39:
#line 263 "parser.y"
                           {
              printf ("blank statement\n");
            }
#line 1916 "parser.tab.c"
    break;

  case 40:
#line 268 "parser.y"
                                         { 
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("int %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1932 "parser.tab.c"
    break;

  case 41:
#line 279 "parser.y"
                                          {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("bool %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1948 "parser.tab.c"
    break;

  case 42:
#line 290 "parser.y"
                                          {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), NULL);
           }
#line 1962 "parser.tab.c"
    break;

  case 43:
#line 301 "parser.y"
                                                                                     {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1977 "parser.tab.c"
    break;

  case 44:
#line 311 "parser.y"
                                                                                     {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1992 "parser.tab.c"
    break;

  case 45:
#line 321 "parser.y"
                                                                                     {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 2007 "parser.tab.c"
    break;

  case 46:
#line 333 "parser.y"
                                                                                         {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));

               printf ("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 2024 "parser.tab.c"
    break;

  case 47:
#line 345 "parser.y"
                                                                             {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));

               printf ("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 2041 "parser.tab.c"
    break;

  case 48:
#line 357 "parser.y"
                                                                                {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));

                printf("%s := %c\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 2058 "parser.tab.c"
    break;

  case 49:
#line 371 "parser.y"
                                                                                                                             {
                                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                                {
                                    yyerror("variable already defined");
                                }

                                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.expression)->value;
                                ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.string));
                            }
#line 2073 "parser.tab.c"
    break;

  case 50:
#line 383 "parser.y"
                                                                          {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }
               
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
               {
                   yyerror("identifier is a function, cannot assign value");
               }
               
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
               {
                   yyerror("identifer is a pin number constant, cannot assign value");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));

               printf("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 2100 "parser.tab.c"
    break;

  case 51:
#line 405 "parser.y"
                                                                          {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }
                
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }
                
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifer is a pin number constant, cannot assign value");
                }
                
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;  
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));

               printf("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 2127 "parser.tab.c"
    break;

  case 52:
#line 427 "parser.y"
                                                                             {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));

                printf("%s := %c\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 2154 "parser.tab.c"
    break;

  case 53:
#line 451 "parser.y"
                                                                                                                          {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                    {
                        yyerror("identifier is a function, cannot assign value");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                    {
                        yyerror("identifier is a pin number constant, cannot assign value");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                    ((*yyvalp).array_assignment) = create_array_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
                }
#line 2178 "parser.tab.c"
    break;

  case 54:
#line 470 "parser.y"
                                                                                                                           {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                    {
                        yyerror("identifier is a function, cannot assign value");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                    {
                        yyerror("identifier is a pin number constant, cannot assign value");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                    ((*yyvalp).array_assignment) = create_array_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
                }
#line 2202 "parser.tab.c"
    break;

  case 55:
#line 489 "parser.y"
                                                                                                                        {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                    {
                        yyerror("identifier is a function, cannot assign value");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                    {
                        yyerror("identifier is a pin number constant, cannot assign value");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                    ((*yyvalp).array_assignment) = create_array_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
                }
#line 2226 "parser.tab.c"
    break;

  case 56:
#line 510 "parser.y"
                                                                                  {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 2250 "parser.tab.c"
    break;

  case 57:
#line 529 "parser.y"
                                                                        {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 2274 "parser.tab.c"
    break;

  case 58:
#line 550 "parser.y"
                                                                                {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 2298 "parser.tab.c"
    break;

  case 59:
#line 571 "parser.y"
                                 {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), NULL, NULL);
          }
#line 2306 "parser.tab.c"
    break;

  case 60:
#line 574 "parser.y"
                       {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT_CHAR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), NULL, NULL);
          }
#line 2314 "parser.tab.c"
    break;

  case 61:
#line 577 "parser.y"
                           {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_INTEGER)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_INTEGER, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_BOOLEAN)
                  {
                      yyerror("bool variable not allowed with int/char");
                  }
              }
          }
#line 2336 "parser.tab.c"
    break;

  case 62:
#line 594 "parser.y"
                            {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_CHAR_)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_CHAR_, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_BOOLEAN)
                  {
                      yyerror("bool variable not allowed with int/char");
                  }
              }
          }
#line 2358 "parser.tab.c"
    break;

  case 63:
#line 611 "parser.y"
                                    {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_ARRAY_ACCESS, 0, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_access), NULL);
          }
#line 2366 "parser.tab.c"
    break;

  case 64:
#line 614 "parser.y"
                              {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 2374 "parser.tab.c"
    break;

  case 65:
#line 617 "parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 2382 "parser.tab.c"
    break;

  case 66:
#line 620 "parser.y"
                                                                  {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_OR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value | (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2390 "parser.tab.c"
    break;

  case 67:
#line 623 "parser.y"
                                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_AND, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value & (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2398 "parser.tab.c"
    break;

  case 68:
#line 626 "parser.y"
                                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_LFT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2406 "parser.tab.c"
    break;

  case 69:
#line 629 "parser.y"
                                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_RGT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value >> (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2414 "parser.tab.c"
    break;

  case 70:
#line 632 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_ADD, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2422 "parser.tab.c"
    break;

  case 71:
#line 635 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_SUB, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value - (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2430 "parser.tab.c"
    break;

  case 72:
#line 638 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MUL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value * (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2438 "parser.tab.c"
    break;

  case 73:
#line 641 "parser.y"
                                                                {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value == 0)
              {
                  yyerror("division by 0");
              }
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_DIV, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value / (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2450 "parser.tab.c"
    break;

  case 74:
#line 648 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MOD, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value % (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2458 "parser.tab.c"
    break;

  case 75:
#line 651 "parser.y"
                                             {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_NOT, ~ (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, NULL, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2466 "parser.tab.c"
    break;

  case 76:
#line 654 "parser.y"
                                          {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_SUB, -1*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, NULL, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2474 "parser.tab.c"
    break;

  case 77:
#line 657 "parser.y"
                                                {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression);
          }
#line 2482 "parser.tab.c"
    break;

  case 78:
#line 662 "parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_CONSTANT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.boolean), NULL, NULL);
          }
#line 2490 "parser.tab.c"
    break;

  case 79:
#line 665 "parser.y"
                            {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_BOOLEAN)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_BOOLEAN, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else
                  {
                      yyerror("int variable not allowed with bool");
                  }
              }
          }
#line 2512 "parser.tab.c"
    break;

  case 80:
#line 682 "parser.y"
                                 {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_ARRAY_ACCESS, 0, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_access), NULL);
          }
#line 2520 "parser.tab.c"
    break;

  case 81:
#line 685 "parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 2528 "parser.tab.c"
    break;

  case 82:
#line 688 "parser.y"
                                  {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
          }
#line 2536 "parser.tab.c"
    break;

  case 83:
#line 691 "parser.y"
                               {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
          }
#line 2544 "parser.tab.c"
    break;

  case 84:
#line 694 "parser.y"
                                             {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression);
          }
#line 2552 "parser.tab.c"
    break;

  case 85:
#line 699 "parser.y"
                                                                          {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value > (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2560 "parser.tab.c"
    break;

  case 86:
#line 702 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value < (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2568 "parser.tab.c"
    break;

  case 87:
#line 705 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_EQ, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value == (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2576 "parser.tab.c"
    break;

  case 88:
#line 708 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_NE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value != (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2584 "parser.tab.c"
    break;

  case 89:
#line 711 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value >= (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2592 "parser.tab.c"
    break;

  case 90:
#line 714 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value <= (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2600 "parser.tab.c"
    break;

  case 91:
#line 720 "parser.y"
                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_NOT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value ? 0 : 1, NULL, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2608 "parser.tab.c"
    break;

  case 92:
#line 723 "parser.y"
                                                              {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_AND, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value & (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2616 "parser.tab.c"
    break;

  case 93:
#line 726 "parser.y"
                                                             {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_OR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value | (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2624 "parser.tab.c"
    break;

  case 94:
#line 731 "parser.y"
                                                                                                                                  {
                          printf("inside if\n");
                          ((*yyvalp).conditional_if) = create_conditional_if_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.conditional_else_if), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                     }
#line 2633 "parser.tab.c"
    break;

  case 95:
#line 737 "parser.y"
                                                                                                                 {
                                 printf("inside else if\n");
                                 ((*yyvalp).conditional_else_if) = add_else_if_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.conditional_else_if), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                             }
#line 2642 "parser.tab.c"
    break;

  case 96:
#line 741 "parser.y"
                                              {
                                 ((*yyvalp).conditional_else_if) = create_else_if_node();
                             }
#line 2650 "parser.tab.c"
    break;

  case 97:
#line 746 "parser.y"
                                                       {
                              printf("inside else\n");
                              ((*yyvalp).compound_statement) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement);
                          }
#line 2659 "parser.tab.c"
    break;

  case 98:
#line 750 "parser.y"
                                        {
                              ((*yyvalp).compound_statement) = NULL;
                          }
#line 2667 "parser.tab.c"
    break;

  case 99:
#line 755 "parser.y"
                                            {
                      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;}
#line 2674 "parser.tab.c"
    break;

  case 100:
#line 757 "parser.y"
                                                              {
                      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.range_expression)->start->value;
                      ((*yyvalp).loop_for) = create_loop_for_node(create_variable_node(AST_DT_INT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.symbol_handle)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.range_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                  }
#line 2683 "parser.tab.c"
    break;

  case 101:
#line 763 "parser.y"
                                              {
                        ((*yyvalp).range_expression) = create_range_expression_node(NULL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression), NULL);
                    }
#line 2691 "parser.tab.c"
    break;

  case 102:
#line 766 "parser.y"
                                                                        {
                        ((*yyvalp).range_expression) = create_range_expression_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression), NULL);
                    }
#line 2699 "parser.tab.c"
    break;

  case 103:
#line 769 "parser.y"
                                                                                                    {
                        ((*yyvalp).range_expression) = create_range_expression_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                    }
#line 2707 "parser.tab.c"
    break;

  case 104:
#line 774 "parser.y"
                                                                           {
                      printf("inside while\n");
                      ((*yyvalp).loop_while) = create_loop_while_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                    }
#line 2716 "parser.tab.c"
    break;

  case 105:
#line 780 "parser.y"
                                                    {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_INTEGER;}
#line 2724 "parser.tab.c"
    break;

  case 106:
#line 783 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2750 "parser.tab.c"
    break;

  case 107:
#line 804 "parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_BOOLEAN;}
#line 2758 "parser.tab.c"
    break;

  case 108:
#line 807 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2784 "parser.tab.c"
    break;

  case 109:
#line 828 "parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_CHAR_;}
#line 2792 "parser.tab.c"
    break;

  case 110:
#line 831 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2818 "parser.tab.c"
    break;

  case 111:
#line 852 "parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_VOID_;}
#line 2826 "parser.tab.c"
    break;

  case 112:
#line 855 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2852 "parser.tab.c"
    break;

  case 113:
#line 878 "parser.y"
                                                                                                                              {
        ((*yyvalp).class) = create_class_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.compound_statement)); 
        }
#line 2860 "parser.tab.c"
    break;

  case 114:
#line 883 "parser.y"
                                    {
       ((*yyvalp).object_decl) = create_object_decl_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));      
}
#line 2868 "parser.tab.c"
    break;

  case 115:
#line 888 "parser.y"
                                                 {
        ((*yyvalp).object_call) = create_object_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)); 
}
#line 2876 "parser.tab.c"
    break;

  case 116:
#line 892 "parser.y"
                               {
             ((*yyvalp).param) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.param); 
         }
#line 2884 "parser.tab.c"
    break;

  case 117:
#line 895 "parser.y"
                       {
             ((*yyvalp).param) = NULL;
         }
#line 2892 "parser.tab.c"
    break;

  case 118:
#line 900 "parser.y"
                                                       {
                    ((*yyvalp).param) = add_parameter_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.variable));
                  }
#line 2900 "parser.tab.c"
    break;

  case 119:
#line 903 "parser.y"
                              {
                      ((*yyvalp).param) = create_parameter_node();
                      ((*yyvalp).param) = add_parameter_node(((*yyvalp).param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.variable));
                  }
#line 2909 "parser.tab.c"
    break;

  case 120:
#line 909 "parser.y"
                             {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_INT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2920 "parser.tab.c"
    break;

  case 121:
#line 915 "parser.y"
                              {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_BOOL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2931 "parser.tab.c"
    break;

  case 122:
#line 921 "parser.y"
                              {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_CHAR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2942 "parser.tab.c"
    break;

  case 123:
#line 929 "parser.y"
                                                         {
                    ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression);
                }
#line 2950 "parser.tab.c"
    break;

  case 124:
#line 932 "parser.y"
                                                            {
                    ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression);
                }
#line 2958 "parser.tab.c"
    break;

  case 125:
#line 935 "parser.y"
                                      {
                    ((*yyvalp).expression) = NULL;
                }
#line 2966 "parser.tab.c"
    break;

  case 126:
#line 940 "parser.y"
                                                                         {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                    {
                        yyerror("not a function");
                    }

                    ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                    if(check_function_call(((*yyvalp).function_call)) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
#line 2991 "parser.tab.c"
    break;

  case 127:
#line 962 "parser.y"
                                                                           {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                    {
                        yyerror("not a function");
                    }
                    
                    ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                    if(check_function_call(((*yyvalp).function_call)) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
#line 3016 "parser.tab.c"
    break;

  case 128:
#line 984 "parser.y"
                                                                           {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                    {
                        if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                        {
                            yyerror("not a function");
                        }

                        ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                        if(check_function_call(((*yyvalp).function_call)) == -1)
                        {
                            yyerror("wrong paramters for the function");
                        }
                    }
                    else 
                    {
                        yyerror("function not defined");
                    }
                    printf("function call\n");
                    }
#line 3041 "parser.tab.c"
    break;

  case 129:
#line 1006 "parser.y"
                                                                           {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                    {
                        yyerror("not a function");
                    }

                    ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                    if(check_function_call(((*yyvalp).function_call)) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
#line 3066 "parser.tab.c"
    break;

  case 130:
#line 1028 "parser.y"
                                                                                 {
                            ((*yyvalp).arguments) = add_argument_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.arguments), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                        }
#line 3074 "parser.tab.c"
    break;

  case 131:
#line 1031 "parser.y"
                                                  {
                            ((*yyvalp).arguments) = create_argument_node();
                            ((*yyvalp).arguments) = add_argument_node(((*yyvalp).arguments), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                        }
#line 3083 "parser.tab.c"
    break;

  case 132:
#line 1035 "parser.y"
                                      {
                            ((*yyvalp).arguments) = NULL;
                        }
#line 3091 "parser.tab.c"
    break;

  case 133:
#line 1040 "parser.y"
                                               {
                           ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                       }
#line 3099 "parser.tab.c"
    break;

  case 134:
#line 1043 "parser.y"
                                            {
                           ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                       }
#line 3107 "parser.tab.c"
    break;

  case 135:
#line 1048 "parser.y"
                                                        {
                        ((*yyvalp).print_string_function_call) = create_print_string_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.string), 0);
                    }
#line 3115 "parser.tab.c"
    break;

  case 136:
#line 1051 "parser.y"
                                                            {
                        ((*yyvalp).print_string_function_call) = create_print_string_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.string), 1);
                    }
#line 3123 "parser.tab.c"
    break;

  case 137:
#line 1056 "parser.y"
                                                                     {
                            ((*yyvalp).print_expression_function_call) = create_print_expression_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 0);
                        }
#line 3131 "parser.tab.c"
    break;

  case 138:
#line 1059 "parser.y"
                                                                    {
                            ((*yyvalp).print_expression_function_call) = create_print_expression_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 0);
                        }
#line 3139 "parser.tab.c"
    break;

  case 139:
#line 1062 "parser.y"
                                                                         {
                            ((*yyvalp).print_expression_function_call) = create_print_expression_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 1);
                        }
#line 3147 "parser.tab.c"
    break;

  case 140:
#line 1065 "parser.y"
                                                                      {
                            ((*yyvalp).print_expression_function_call) = create_print_expression_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 1);
                        }
#line 3155 "parser.tab.c"
    break;


#line 3159 "parser.tab.c"

      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yyStateNum yystate, yySymbol yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyisDefaultedState (yystate)
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, ptrdiff_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (size_t, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (size_t, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (size_t, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, ptrdiff_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (size_t, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  ptrdiff_t yynewSize;
  ptrdiff_t yyn;
  ptrdiff_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (size_t, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, ptrdiff_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  ptrdiff_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, ptrdiff_t yyk, yyStateNum yylrState,
            ptrdiff_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, ptrdiff_t yyk, yyStateNum yylrState,
                 ptrdiff_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, ptrdiff_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, ptrdiff_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((yytrue, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((yyfalse, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, ptrdiff_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  ptrdiff_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1]));
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      ptrdiff_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static ptrdiff_t
yysplitStack (yyGLRStack* yystackp, ptrdiff_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      ptrdiff_t state_size = sizeof yystackp->yytops.yystates[0];
      ptrdiff_t half_max_capacity = YYSIZEMAX / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (size_t, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (size_t, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yytokenName (yystos[yystates[yyi]->yylrState])));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yytokenName (yystos[yystates[yyi]->yylrState]),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, ptrdiff_t yyk,
                   ptrdiff_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              ptrdiff_t yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  ptrdiff_t yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      ptrdiff_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
      yysize = yysize0;
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  ptrdiff_t yysz = yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  if (YYSIZEMAX - yysize < yysz)
                    yysize_overflow = yytrue;
                  else
                    yysize += yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    ptrdiff_t yysz = YY_CAST (ptrdiff_t, strlen (yyformat)) - 2 * yycount + 1;
    if (YYSIZEMAX - yysize < yysz)
      yysize_overflow = yytrue;
    else
      yysize += yysz;
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (size_t, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              ++yyp;
              ++yyformat;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    ptrdiff_t yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yystos[yyaction],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  ptrdiff_t yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          ptrdiff_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state #%d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          ptrdiff_t yysize = yystack.yytops.yysize;
          ptrdiff_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yyst);
  YY_FPRINTF ((stderr, "\n"));
}

static void
yypstack (yyGLRStack* yystackp, ptrdiff_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    ptrdiff_t yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 1070 "parser.y"

