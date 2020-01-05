/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ptx_parse
#define yylex           ptx_lex
#define yyerror         ptx_error
#define yydebug         ptx_debug
#define yynerrs         ptx_nerrs

#define yylval          ptx_lval
#define yychar          ptx_char

/* Copy the first part of user declarations.  */

#line 75 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ptx.tab.h".  */
#ifndef YY_PTX_HOME_SUNGJUN_PARCO_GPGPUSIM_RAMULATOR_BUILD_GCC_6_5_0_CUDA_9010_RELEASE_CUOBJDUMP_TO_PTXPLUS_PTX_TAB_H_INCLUDED
# define YY_PTX_HOME_SUNGJUN_PARCO_GPGPUSIM_RAMULATOR_BUILD_GCC_6_5_0_CUDA_9010_RELEASE_CUOBJDUMP_TO_PTXPLUS_PTX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int ptx_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    OPCODE = 259,
    WMMA_DIRECTIVE = 260,
    LAYOUT = 261,
    CONFIGURATION = 262,
    ALIGN_DIRECTIVE = 263,
    BRANCHTARGETS_DIRECTIVE = 264,
    BYTE_DIRECTIVE = 265,
    CALLPROTOTYPE_DIRECTIVE = 266,
    CALLTARGETS_DIRECTIVE = 267,
    CONST_DIRECTIVE = 268,
    CONSTPTR_DIRECTIVE = 269,
    PTR_DIRECTIVE = 270,
    ENTRY_DIRECTIVE = 271,
    EXTERN_DIRECTIVE = 272,
    FILE_DIRECTIVE = 273,
    FUNC_DIRECTIVE = 274,
    GLOBAL_DIRECTIVE = 275,
    LOCAL_DIRECTIVE = 276,
    LOC_DIRECTIVE = 277,
    MAXNCTAPERSM_DIRECTIVE = 278,
    MAXNNREG_DIRECTIVE = 279,
    MAXNTID_DIRECTIVE = 280,
    MINNCTAPERSM_DIRECTIVE = 281,
    PARAM_DIRECTIVE = 282,
    PRAGMA_DIRECTIVE = 283,
    REG_DIRECTIVE = 284,
    REQNTID_DIRECTIVE = 285,
    SECTION_DIRECTIVE = 286,
    SHARED_DIRECTIVE = 287,
    SREG_DIRECTIVE = 288,
    SSTARR_DIRECTIVE = 289,
    STRUCT_DIRECTIVE = 290,
    SURF_DIRECTIVE = 291,
    TARGET_DIRECTIVE = 292,
    TEX_DIRECTIVE = 293,
    UNION_DIRECTIVE = 294,
    VERSION_DIRECTIVE = 295,
    ADDRESS_SIZE_DIRECTIVE = 296,
    VISIBLE_DIRECTIVE = 297,
    WEAK_DIRECTIVE = 298,
    IDENTIFIER = 299,
    INT_OPERAND = 300,
    FLOAT_OPERAND = 301,
    DOUBLE_OPERAND = 302,
    S8_TYPE = 303,
    S16_TYPE = 304,
    S32_TYPE = 305,
    S64_TYPE = 306,
    U8_TYPE = 307,
    U16_TYPE = 308,
    U32_TYPE = 309,
    U64_TYPE = 310,
    F16_TYPE = 311,
    F32_TYPE = 312,
    F64_TYPE = 313,
    FF64_TYPE = 314,
    B8_TYPE = 315,
    B16_TYPE = 316,
    B32_TYPE = 317,
    B64_TYPE = 318,
    BB64_TYPE = 319,
    BB128_TYPE = 320,
    PRED_TYPE = 321,
    TEXREF_TYPE = 322,
    SAMPLERREF_TYPE = 323,
    SURFREF_TYPE = 324,
    V2_TYPE = 325,
    V3_TYPE = 326,
    V4_TYPE = 327,
    COMMA = 328,
    PRED = 329,
    HALF_OPTION = 330,
    EXTP_OPTION = 331,
    EQ_OPTION = 332,
    NE_OPTION = 333,
    LT_OPTION = 334,
    LE_OPTION = 335,
    GT_OPTION = 336,
    GE_OPTION = 337,
    LO_OPTION = 338,
    LS_OPTION = 339,
    HI_OPTION = 340,
    HS_OPTION = 341,
    EQU_OPTION = 342,
    NEU_OPTION = 343,
    LTU_OPTION = 344,
    LEU_OPTION = 345,
    GTU_OPTION = 346,
    GEU_OPTION = 347,
    NUM_OPTION = 348,
    NAN_OPTION = 349,
    CF_OPTION = 350,
    SF_OPTION = 351,
    NSF_OPTION = 352,
    LEFT_SQUARE_BRACKET = 353,
    RIGHT_SQUARE_BRACKET = 354,
    WIDE_OPTION = 355,
    SPECIAL_REGISTER = 356,
    MINUS = 357,
    PLUS = 358,
    COLON = 359,
    SEMI_COLON = 360,
    EXCLAMATION = 361,
    PIPE = 362,
    RIGHT_BRACE = 363,
    LEFT_BRACE = 364,
    EQUALS = 365,
    PERIOD = 366,
    BACKSLASH = 367,
    DIMENSION_MODIFIER = 368,
    RN_OPTION = 369,
    RZ_OPTION = 370,
    RM_OPTION = 371,
    RP_OPTION = 372,
    RNI_OPTION = 373,
    RZI_OPTION = 374,
    RMI_OPTION = 375,
    RPI_OPTION = 376,
    UNI_OPTION = 377,
    GEOM_MODIFIER_1D = 378,
    GEOM_MODIFIER_2D = 379,
    GEOM_MODIFIER_3D = 380,
    SAT_OPTION = 381,
    FTZ_OPTION = 382,
    NEG_OPTION = 383,
    SYNC_OPTION = 384,
    RED_OPTION = 385,
    ARRIVE_OPTION = 386,
    ATOMIC_POPC = 387,
    ATOMIC_AND = 388,
    ATOMIC_OR = 389,
    ATOMIC_XOR = 390,
    ATOMIC_CAS = 391,
    ATOMIC_EXCH = 392,
    ATOMIC_ADD = 393,
    ATOMIC_INC = 394,
    ATOMIC_DEC = 395,
    ATOMIC_MIN = 396,
    ATOMIC_MAX = 397,
    LEFT_ANGLE_BRACKET = 398,
    RIGHT_ANGLE_BRACKET = 399,
    LEFT_PAREN = 400,
    RIGHT_PAREN = 401,
    APPROX_OPTION = 402,
    FULL_OPTION = 403,
    ANY_OPTION = 404,
    ALL_OPTION = 405,
    BALLOT_OPTION = 406,
    GLOBAL_OPTION = 407,
    CTA_OPTION = 408,
    SYS_OPTION = 409,
    EXIT_OPTION = 410,
    ABS_OPTION = 411,
    TO_OPTION = 412,
    CA_OPTION = 413,
    CG_OPTION = 414,
    CS_OPTION = 415,
    LU_OPTION = 416,
    CV_OPTION = 417,
    WB_OPTION = 418,
    WT_OPTION = 419,
    NC_OPTION = 420,
    UP_OPTION = 421,
    DOWN_OPTION = 422,
    BFLY_OPTION = 423,
    IDX_OPTION = 424,
    PRMT_F4E_MODE = 425,
    PRMT_B4E_MODE = 426,
    PRMT_RC8_MODE = 427,
    PRMT_RC16_MODE = 428,
    PRMT_ECL_MODE = 429,
    PRMT_ECR_MODE = 430
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "../src/cuda-sim/ptx.y" /* yacc.c:355  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 299 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_HOME_SUNGJUN_PARCO_GPGPUSIM_RAMULATOR_BUILD_GCC_6_5_0_CUDA_9010_RELEASE_CUOBJDUMP_TO_PTXPLUS_PTX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 215 "../src/cuda-sim/ptx.y" /* yacc.c:358  */

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);

#line 326 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  308
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   430

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   228,   228,   229,   230,   231,   234,   234,   235,   235,
     235,   238,   242,   243,   246,   247,   250,   250,   250,   251,
     251,   252,   255,   255,   255,   256,   259,   260,   261,   262,
     263,   264,   265,   266,   269,   270,   271,   271,   273,   273,
     274,   274,   276,   277,   278,   280,   281,   282,   283,   285,
     287,   289,   290,   291,   292,   293,   294,   294,   295,   295,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   312,   313,   314,   315,   318,   320,   321,   323,
     324,   336,   337,   340,   341,   343,   344,   345,   346,   347,
     348,   351,   353,   354,   355,   358,   359,   360,   361,   362,
     363,   364,   365,   368,   369,   372,   373,   374,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     401,   402,   404,   405,   413,   415,   417,   418,   420,   421,
     422,   424,   425,   426,   428,   428,   429,   430,   431,   432,
     435,   435,   436,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   453,   454,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   514,   515,   518,   519,   520,   521,   524,   525,
     526,   527,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     550,   551,   552,   553,   554,   555,   558,   559,   568,   569,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     593,   594,   595,   596,   597,   600,   600,   605,   606,   609,
     610,   611,   612,   613,   616,   617,   618,   619,   620,   621,
     622,   625,   626,   627,   630,   631,   632,   633,   634
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "OPCODE", "WMMA_DIRECTIVE",
  "LAYOUT", "CONFIGURATION", "ALIGN_DIRECTIVE", "BRANCHTARGETS_DIRECTIVE",
  "BYTE_DIRECTIVE", "CALLPROTOTYPE_DIRECTIVE", "CALLTARGETS_DIRECTIVE",
  "CONST_DIRECTIVE", "CONSTPTR_DIRECTIVE", "PTR_DIRECTIVE",
  "ENTRY_DIRECTIVE", "EXTERN_DIRECTIVE", "FILE_DIRECTIVE",
  "FUNC_DIRECTIVE", "GLOBAL_DIRECTIVE", "LOCAL_DIRECTIVE", "LOC_DIRECTIVE",
  "MAXNCTAPERSM_DIRECTIVE", "MAXNNREG_DIRECTIVE", "MAXNTID_DIRECTIVE",
  "MINNCTAPERSM_DIRECTIVE", "PARAM_DIRECTIVE", "PRAGMA_DIRECTIVE",
  "REG_DIRECTIVE", "REQNTID_DIRECTIVE", "SECTION_DIRECTIVE",
  "SHARED_DIRECTIVE", "SREG_DIRECTIVE", "SSTARR_DIRECTIVE",
  "STRUCT_DIRECTIVE", "SURF_DIRECTIVE", "TARGET_DIRECTIVE",
  "TEX_DIRECTIVE", "UNION_DIRECTIVE", "VERSION_DIRECTIVE",
  "ADDRESS_SIZE_DIRECTIVE", "VISIBLE_DIRECTIVE", "WEAK_DIRECTIVE",
  "IDENTIFIER", "INT_OPERAND", "FLOAT_OPERAND", "DOUBLE_OPERAND",
  "S8_TYPE", "S16_TYPE", "S32_TYPE", "S64_TYPE", "U8_TYPE", "U16_TYPE",
  "U32_TYPE", "U64_TYPE", "F16_TYPE", "F32_TYPE", "F64_TYPE", "FF64_TYPE",
  "B8_TYPE", "B16_TYPE", "B32_TYPE", "B64_TYPE", "BB64_TYPE", "BB128_TYPE",
  "PRED_TYPE", "TEXREF_TYPE", "SAMPLERREF_TYPE", "SURFREF_TYPE", "V2_TYPE",
  "V3_TYPE", "V4_TYPE", "COMMA", "PRED", "HALF_OPTION", "EXTP_OPTION",
  "EQ_OPTION", "NE_OPTION", "LT_OPTION", "LE_OPTION", "GT_OPTION",
  "GE_OPTION", "LO_OPTION", "LS_OPTION", "HI_OPTION", "HS_OPTION",
  "EQU_OPTION", "NEU_OPTION", "LTU_OPTION", "LEU_OPTION", "GTU_OPTION",
  "GEU_OPTION", "NUM_OPTION", "NAN_OPTION", "CF_OPTION", "SF_OPTION",
  "NSF_OPTION", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "WIDE_OPTION", "SPECIAL_REGISTER", "MINUS", "PLUS", "COLON",
  "SEMI_COLON", "EXCLAMATION", "PIPE", "RIGHT_BRACE", "LEFT_BRACE",
  "EQUALS", "PERIOD", "BACKSLASH", "DIMENSION_MODIFIER", "RN_OPTION",
  "RZ_OPTION", "RM_OPTION", "RP_OPTION", "RNI_OPTION", "RZI_OPTION",
  "RMI_OPTION", "RPI_OPTION", "UNI_OPTION", "GEOM_MODIFIER_1D",
  "GEOM_MODIFIER_2D", "GEOM_MODIFIER_3D", "SAT_OPTION", "FTZ_OPTION",
  "NEG_OPTION", "SYNC_OPTION", "RED_OPTION", "ARRIVE_OPTION",
  "ATOMIC_POPC", "ATOMIC_AND", "ATOMIC_OR", "ATOMIC_XOR", "ATOMIC_CAS",
  "ATOMIC_EXCH", "ATOMIC_ADD", "ATOMIC_INC", "ATOMIC_DEC", "ATOMIC_MIN",
  "ATOMIC_MAX", "LEFT_ANGLE_BRACKET", "RIGHT_ANGLE_BRACKET", "LEFT_PAREN",
  "RIGHT_PAREN", "APPROX_OPTION", "FULL_OPTION", "ANY_OPTION",
  "ALL_OPTION", "BALLOT_OPTION", "GLOBAL_OPTION", "CTA_OPTION",
  "SYS_OPTION", "EXIT_OPTION", "ABS_OPTION", "TO_OPTION", "CA_OPTION",
  "CG_OPTION", "CS_OPTION", "LU_OPTION", "CV_OPTION", "WB_OPTION",
  "WT_OPTION", "NC_OPTION", "UP_OPTION", "DOWN_OPTION", "BFLY_OPTION",
  "IDX_OPTION", "PRMT_F4E_MODE", "PRMT_B4E_MODE", "PRMT_RC8_MODE",
  "PRMT_RC16_MODE", "PRMT_ECL_MODE", "PRMT_ECR_MODE", "$accept", "input",
  "function_defn", "$@1", "$@2", "$@3", "block_spec", "block_spec_list",
  "function_decl", "$@4", "$@5", "$@6", "function_ident_param", "$@7",
  "$@8", "function_decl_header", "param_list", "$@9", "param_entry",
  "$@10", "$@11", "ptr_spec", "ptr_space_spec", "ptr_align_spec",
  "statement_block", "statement_list", "$@12", "$@13",
  "directive_statement", "variable_declaration", "variable_spec",
  "identifier_list", "identifier_spec", "var_spec_list", "var_spec",
  "align_spec", "space_spec", "addressable_spec", "type_spec",
  "vector_spec", "scalar_type", "initializer_list", "literal_list",
  "prototype_block", "prototype_decl", "prototype_call", "prototype_param",
  "instruction_statement", "instruction", "$@14", "opcode_spec", "$@15",
  "pred_spec", "option_list", "option", "atomic_operation_spec",
  "rounding_mode", "floating_point_rounding_mode", "integer_rounding_mode",
  "compare_spec", "prmt_spec", "wmma_spec", "operand_list", "operand",
  "vector_operand", "tex_operand", "$@16", "builtin_operand",
  "memory_operand", "twin_operand", "literal_operand",
  "address_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430
};
# endif

#define YYPACT_NINF -313

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-313)))

#define YYTABLE_NINF -153

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -313,   388,  -313,   -15,  -313,    -2,  -313,    26,     3,  -313,
    -313,  -313,    58,  -313,   111,  -313,  -313,  -313,  -313,  -313,
      63,  -313,   154,   135,    -1,    15,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,     0,   -39,  -313,   100,   164,   522,  -313,  -313,
    -313,  -313,  -313,   547,  -313,  -313,   168,  -313,   244,   249,
     215,   255,   226,  -313,  -313,  -313,  -313,  -313,  -313,   221,
      87,  -313,   288,  -313,    49,   260,   227,  -313,  -313,  -313,
    -313,  -313,   290,   267,   296,  -313,   298,  -313,   457,  -313,
     300,   304,   312,  -313,    87,    14,   217,  -313,   133,   318,
     164,   -34,   292,   323,  -313,   299,   246,   269,    -4,   266,
     202,   221,  -313,  -313,   270,   252,   372,  -313,   305,  -313,
     221,  -313,  -313,  -313,   233,   235,   282,  -313,   240,  -313,
    -313,  -313,  -313,   -34,  -313,  -313,   337,   313,   341,     1,
    -313,   540,   343,   285,  -313,   221,  -313,  -313,   386,  -313,
    -313,  -313,   224,    54,   280,     2,   348,   350,   268,  -313,
     322,  -313,  -313,  -313,  -313,  -313,   293,   354,  -313,   522,
     522,  -313,  -313,  -313,  -313,   303,   117,  -313,  -313,   355,
    -313,   406,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,     1,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,   402,  -313,   -37,  -313,  -313,  -313,
     241,   369,   374,   375,   -56,  -313,   324,  -313,    99,   141,
     102,  -313,  -313,  -313,   118,   281,   258,  -313,   359,   418,
     164,   288,    14,  -313,   271,  -313,  -313,   272,  -313,   289,
     362,   419,    96,  -313,   363,   365,   367,  -313,   104,   126,
    -313,  -313,  -313,   422,  -313,  -313,  -313,   192,   370,   425,
    -313,  -313,   237,  -313,   399,   435,   175,   164,  -313,  -313,
     -49,  -313,  -313,   474,  -313,   455,   338,   342,   -36,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,   378,  -313,   125,   423,
    -313,   346,   268,  -313,   458,  -313,  -313,  -313,  -313,   494,
    -313,  -313,  -313,  -313,  -313,   238,   358,   488,   460,   223,
     279,   437,   490,  -313,   268,  -313,  -313,  -313,    14,   493,
     496,   497,   392,   268,  -313,  -313,   236,  -313,  -313,   129,
     471,  -313,  -313,  -313,   400,   473,   475,  -313,  -313,   503,
    -313,   405,   455,   508,   408,   140,   268,   411,   454,   517,
     518,  -313,   417,   461,  -313,   421,   495,  -313,  -313,   548,
     525,   579,   551,   520,   582,  -313,   556,   586,   524,  -313
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,    95,     0,    26,    89,     0,    29,
      96,    97,     0,    98,     0,    92,    99,    93,   100,   101,
       0,   102,     0,     0,    88,    90,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   105,   106,
     107,     4,     5,    21,     3,     0,     0,    76,    83,    87,
      85,    94,    86,     0,   103,    91,     0,    32,     0,     0,
       0,    66,    61,    63,    27,    30,    28,    31,    71,     0,
       0,    16,     0,    60,    79,    72,    77,    89,    88,    90,
      84,   104,     0,    67,     0,    70,     0,    62,    58,     7,
       0,     0,     0,    14,     9,     0,    25,    20,     0,     0,
       0,     0,     0,     0,    69,    64,   150,     0,     0,     0,
      56,     0,    51,    53,     0,   149,     0,    13,     0,    12,
       0,    15,    38,    40,     0,     0,     0,    81,     0,    78,
     301,   302,   303,     0,    73,    74,     0,     0,     0,     0,
     142,   153,     0,     0,    50,     0,    54,    52,     0,    55,
      59,   141,   260,     0,   288,     0,     0,     0,     0,   148,
     258,   266,   268,   265,   263,   264,     0,     0,    10,     0,
       0,    17,    23,    82,    80,     0,     0,   132,    75,     0,
      65,     0,   197,   198,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   178,   224,   225,   226,   227,   228,   229,   230,
     231,   177,   185,   186,   187,   188,   189,   190,   174,   176,
     175,   212,   211,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   191,   192,   179,   180,   181,   182,   183,   184,
     193,   194,   196,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   250,   251,   252,   253,   254,
     255,   170,   168,   151,   166,   195,   171,   222,   223,   169,
     173,   172,   156,   158,   155,   157,   159,   160,   162,   161,
     163,   164,   165,   154,   142,    57,     0,   134,   270,   272,
       0,     0,     0,     0,   304,   308,     0,   287,   262,     0,
       0,   267,   293,   261,     0,     0,     0,   143,     0,    42,
       0,     0,    34,   131,     0,   130,    68,     0,   167,     0,
       0,     0,   304,   301,     0,     0,     0,   269,   274,   277,
     285,   305,   306,     0,   289,   271,   273,   304,     0,     0,
     284,   144,     0,   259,   258,     0,     0,     0,    41,    18,
       0,    35,   133,     0,   256,   138,     0,     0,     0,   292,
     291,   290,   275,   276,   278,   279,     0,   307,     0,     0,
     147,     0,     0,    11,     0,    48,    45,    46,    47,     0,
      44,    39,    36,    24,   257,     0,     0,     0,     0,   294,
       0,     0,     0,   280,     0,   146,    49,    43,     0,     0,
       0,     0,     0,     0,   295,   296,   297,   300,   286,     0,
       0,    37,   140,   139,     0,     0,     0,   298,   299,     0,
     281,     0,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,   137,     0,     0,   145,   135,     0,
       0,     0,     0,     0,     0,   136,     0,     0,     0,   283
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,  -313,  -313,  -313,   529,  -313,   633,  -313,
    -313,  -313,   317,  -313,  -313,  -313,  -313,  -313,  -312,  -313,
    -313,  -313,  -313,   250,    73,  -313,  -313,  -313,   -82,  -313,
     146,  -313,  -108,  -313,   583,  -313,  -313,  -130,  -129,  -313,
     578,   499,  -313,  -313,  -313,  -313,   211,   526,   519,  -313,
    -313,  -313,  -313,   373,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -125,  -124,  -162,  -313,  -313,  -313,  -133,  -313,
    -107,   344
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    51,    79,    80,   130,   103,   104,   119,   105,
     321,    82,   107,   135,   322,    53,   360,   408,   134,   179,
     180,   357,   389,   390,    99,   120,   155,   121,    54,    55,
      56,    85,    86,    57,    58,    59,    60,    61,    62,    63,
      64,   144,   186,   157,   158,   297,   396,   123,   124,   379,
     125,   149,   126,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   353,   354,   171,   172,   376,   173,   174,   334,
     175,   306
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     169,   170,   139,   311,   145,   -19,   191,   330,   399,   377,
     361,   140,   141,   142,     4,    74,   122,   340,    75,   271,
     272,    10,    11,    -8,   392,    -8,    -8,   341,    13,   342,
      65,    76,   312,    16,    77,    18,   187,    19,   156,    21,
     151,   132,    66,   133,   315,    67,   308,   343,    68,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   400,   143,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   421,   393,   304,   305,
     309,   212,   152,    69,   310,    78,    81,    71,   331,    -6,
     100,   167,   101,   102,    70,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   271,   272,   348,   108,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   312,   136,   341,
      73,   342,   345,   384,   346,   347,   305,   372,   385,   373,
     324,   349,   109,   335,   160,   386,   387,   300,   402,   368,
     309,    72,   429,   178,   310,    83,   116,   388,    84,   374,
       3,   375,   358,   440,   401,     4,     5,   362,     6,     7,
       8,     9,    10,    11,    12,   325,   350,   381,   295,    13,
      14,    15,   137,   403,    16,    17,    18,   430,    19,    20,
      21,    92,    22,    23,    24,    25,   153,    93,   441,   391,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   341,   118,   342,   363,   364,
     420,   162,   140,   141,   142,   332,   333,   141,   142,   426,
    -152,  -152,  -152,  -152,    94,   343,   162,   140,   141,   142,
     409,   410,   162,   140,   141,   142,   414,   298,   415,   299,
     154,   442,   162,   140,   141,   142,   140,   141,   142,   427,
      95,   428,   300,   416,   417,   319,   320,   301,    96,    97,
      98,   302,   106,   110,   112,   163,   303,   111,   164,   165,
     113,   114,   115,   166,  -152,   127,   167,  -152,  -152,   128,
     163,  -152,  -152,   164,   165,  -152,   163,   129,   166,   164,
     165,   167,   -22,   138,   166,   146,   163,   167,   147,   164,
     165,    78,   148,   150,   166,   161,   116,   167,   177,   181,
     182,   183,   188,   380,   184,   190,   189,   293,     2,   294,
     296,  -152,   313,   307,   314,   316,     3,   168,   317,   318,
     326,     4,     5,   352,     6,     7,     8,     9,    10,    11,
      12,   323,   327,   329,   337,    13,    14,    15,   338,   339,
      16,    17,    18,   344,    19,    20,    21,   351,    22,    23,
      24,    25,   355,   356,   365,   366,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   116,   369,   367,   370,     3,   371,   377,   300,   378,
       4,     5,   382,     6,     7,     8,     9,    10,    11,    12,
     383,   394,   395,   397,    13,    14,    15,   167,   398,    16,
      17,    18,   405,    19,    20,    21,   404,    22,    23,    24,
      25,   117,   384,   406,   411,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       3,   118,   412,   413,   419,     4,   418,   422,   425,    87,
     423,   424,    10,    11,   431,   432,   433,   435,   434,    13,
     436,    15,   438,   439,    16,    17,    18,   443,    19,   444,
      21,   445,   446,   447,    88,    89,   448,   449,   450,   452,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   282,   283,   284,
     285,   451,   286,   453,   454,   455,   456,   287,   288,   457,
     458,   289,   459,   131,    52,   290,   291,   292,   359,   407,
      90,    91,   185,   437,   336,   176,   159,   328
};

static const yytype_uint16 yycheck[] =
{
     125,   125,   110,   165,   111,    44,     5,    44,    44,    45,
     322,    45,    46,    47,    13,    16,    98,    73,    19,   149,
     149,    20,    21,    23,    73,    25,    26,    83,    27,    85,
      45,    16,   165,    32,    19,    34,   143,    36,   120,    38,
      44,    27,    44,    29,   168,    19,    44,   103,    45,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   110,   109,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,   408,   146,    44,    45,
      98,   100,   106,    45,   102,   105,   145,    44,   145,   109,
      23,   109,    25,    26,     3,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   274,   274,    44,    98,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   310,    45,    83,
      45,    85,    83,     8,    85,    44,    45,    83,    13,    85,
      73,    73,   143,   300,   121,    20,    21,    98,    73,   103,
      98,    47,    73,   130,   102,   105,     4,    32,    44,    83,
       8,    85,   320,    73,   376,    13,    14,   324,    16,    17,
      18,    19,    20,    21,    22,   108,   108,   352,   155,    27,
      28,    29,    99,   108,    32,    33,    34,   108,    36,    37,
      38,    73,    40,    41,    42,    43,    44,     3,   108,   357,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    83,    74,    85,     6,     7,
     404,    44,    45,    46,    47,    44,    45,    46,    47,   413,
      44,    45,    46,    47,    45,   103,    44,    45,    46,    47,
      62,    63,    44,    45,    46,    47,    83,    83,    85,    85,
     108,   436,    44,    45,    46,    47,    45,    46,    47,    83,
     105,    85,    98,    44,    45,   179,   180,   103,    73,   103,
     109,   107,    44,    73,    44,    98,   112,   110,   101,   102,
      73,    45,    44,   106,    98,    45,   109,   101,   102,    45,
      98,   105,   106,   101,   102,   109,    98,    45,   106,   101,
     102,   109,   145,    45,   106,    73,    98,   109,    45,   101,
     102,   105,    73,   104,   106,   105,     4,   109,    73,   146,
     145,    99,    45,   146,   144,    44,    73,    44,     0,   104,
       4,   145,    44,   113,    44,    73,     8,   145,   105,    45,
      45,    13,    14,   145,    16,    17,    18,    19,    20,    21,
      22,   108,     6,    11,    45,    27,    28,    29,    44,    44,
      32,    33,    34,    99,    36,    37,    38,   146,    40,    41,
      42,    43,    73,    15,   145,    73,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     4,    99,    44,    99,     8,    99,    45,    98,    44,
      13,    14,    73,    16,    17,    18,    19,    20,    21,    22,
      45,     7,    27,   145,    27,    28,    29,   109,   146,    32,
      33,    34,   146,    36,    37,    38,    73,    40,    41,    42,
      43,    44,     8,    45,   146,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       8,    74,    44,    73,    44,    13,    99,    44,   146,    17,
      44,    44,    20,    21,    73,   145,    73,    44,    73,    27,
     145,    29,    44,   145,    32,    33,    34,   146,    36,   105,
      38,    44,    44,   146,    42,    43,   105,   146,    73,    44,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    77,    78,    79,
      80,    73,    82,    44,    73,   105,    44,    87,    88,    73,
      44,    91,   108,   104,     1,    95,    96,    97,   321,   389,
      57,    63,   143,   432,   300,   126,   120,   274
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   177,     0,     8,    13,    14,    16,    17,    18,    19,
      20,    21,    22,    27,    28,    29,    32,    33,    34,    36,
      37,    38,    40,    41,    42,    43,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   178,   184,   191,   204,   205,   206,   209,   210,   211,
     212,   213,   214,   215,   216,    45,    44,    19,    45,    45,
       3,    44,    47,    45,    16,    19,    16,    19,   105,   179,
     180,   145,   187,   105,    44,   207,   208,    17,    42,    43,
     210,   216,    73,     3,    45,   105,    73,   103,   109,   200,
      23,    25,    26,   182,   183,   185,    44,   188,    98,   143,
      73,   110,    44,    73,    45,    44,     4,    44,    74,   184,
     201,   203,   204,   223,   224,   226,   228,    45,    45,    45,
     181,   182,    27,    29,   194,   189,    45,    99,    45,   208,
      45,    46,    47,   109,   217,   246,    73,    45,    73,   227,
     104,    44,   106,    44,   108,   202,   204,   219,   220,   223,
     200,   105,    44,    98,   101,   102,   106,   109,   145,   238,
     239,   240,   241,   243,   244,   246,   224,    73,   200,   195,
     196,   146,   145,    99,   144,   217,   218,   246,    45,    73,
      44,     5,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   100,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   213,   214,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    77,    78,    79,    80,    82,    87,    88,    91,
      95,    96,    97,    44,   104,   200,     4,   221,    83,    85,
      98,   103,   107,   112,    44,    45,   247,   113,    44,    98,
     102,   240,   244,    44,    44,   239,    73,   105,    45,   206,
     206,   186,   190,   108,    73,   108,    45,     6,   229,    11,
      44,   145,    44,    45,   245,   246,   247,    45,    44,    44,
      73,    83,    85,   103,    99,    83,    85,    44,    44,    73,
     108,   146,   145,   238,   239,    73,    15,   197,   208,   188,
     192,   194,   246,     6,     7,   145,    73,    44,   103,    99,
      99,    99,    83,    85,    83,    85,   242,    45,    44,   225,
     146,   238,    73,    45,     8,    13,    20,    21,    32,   198,
     199,   208,    73,   146,     7,    27,   222,   145,   146,    44,
     110,   240,    73,   108,    73,   146,    45,   199,   193,    62,
      63,   146,    44,    73,    83,    85,    44,    45,    99,    44,
     239,   194,    44,    44,    44,   146,   239,    83,    85,    73,
     108,    73,   145,    73,    73,    44,   145,   222,    44,   145,
      73,   108,   238,   146,   105,    44,    44,   146,   105,   146,
      73,    73,    44,    44,    73,   105,    44,    73,    44,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   176,   177,   177,   177,   177,   179,   178,   180,   181,
     178,   182,   182,   182,   183,   183,   185,   186,   184,   187,
     184,   184,   189,   190,   188,   188,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   193,   192,   195,   194,
     196,   194,   197,   197,   197,   198,   198,   198,   198,   199,
     200,   201,   201,   201,   201,   201,   202,   201,   203,   201,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   205,   205,   205,   205,   206,   207,   207,   208,
     208,   208,   208,   209,   209,   210,   210,   210,   210,   210,
     210,   211,   212,   212,   212,   213,   213,   213,   213,   213,
     213,   213,   213,   214,   214,   215,   215,   215,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     217,   217,   218,   218,   219,   220,   221,   221,   222,   222,
     222,   223,   223,   223,   225,   224,   224,   224,   224,   224,
     227,   226,   226,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   229,   229,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   232,   232,   233,   233,   233,   233,   234,   234,
     234,   234,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     236,   236,   236,   236,   236,   236,   237,   237,   238,   238,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     240,   240,   240,   240,   240,   242,   241,   243,   243,   244,
     244,   244,   244,   244,   245,   245,   245,   245,   245,   245,
     245,   246,   246,   246,   247,   247,   247,   247,   247
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     3,     0,     0,
       5,     6,     2,     2,     1,     2,     0,     0,     7,     0,
       3,     1,     0,     0,     6,     1,     1,     2,     2,     1,
       2,     2,     2,     2,     0,     1,     0,     4,     0,     5,
       0,     4,     0,     3,     2,     1,     1,     1,     1,     2,
       3,     1,     2,     1,     2,     2,     0,     3,     0,     2,
       2,     2,     3,     2,     4,     6,     2,     3,     7,     4,
       3,     2,     2,     4,     4,     6,     1,     1,     3,     1,
       4,     3,     4,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     2,    11,    13,     9,     0,     3,
       3,     2,     2,     3,     0,    11,     6,     5,     2,     1,
       0,     3,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     3,
       1,     2,     2,     1,     1,     1,     1,     2,     1,     3,
       2,     3,     2,     3,     3,     4,     4,     3,     4,     4,
       5,     7,     9,    17,     3,     0,     6,     2,     1,     3,
       4,     4,     4,     2,     3,     4,     4,     4,     5,     5,
       4,     1,     1,     1,     1,     2,     2,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
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
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

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




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 6:
#line 234 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); func_header(".skip"); }
#line 1849 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 234 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1855 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 235 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); }
#line 1861 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 235 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header(".skip"); }
#line 1867 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 235 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1873 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 238 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info_int(".maxntid", (yyvsp[-4].int_value));
										func_header_info_int(",", (yyvsp[-2].int_value));
										func_header_info_int(",", (yyvsp[0].int_value)); 
                                                                                maxnt_id((yyvsp[-4].int_value), (yyvsp[-2].int_value), (yyvsp[0].int_value));}
#line 1882 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 242 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".minnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
#line 1888 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 243 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".maxnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
#line 1894 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 250 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[-1].int_value)); func_header_info("(");}
#line 1900 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 250 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info(")");}
#line 1906 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 250 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1912 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 251 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); }
#line 1918 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 251 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1924 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 252 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
#line 1930 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 255 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); }
#line 1936 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 255 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info("(");}
#line 1942 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 255 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { g_func_decl=0; func_header_info(")"); }
#line 1948 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 256 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); g_func_decl=0; }
#line 1954 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 259 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1960 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 260 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1966 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 261 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1972 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 262 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1978 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 263 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1984 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 264 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1990 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 265 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
#line 1996 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 266 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 2002 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 270 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2008 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 271 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info(",");}
#line 2014 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 271 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2020 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_space_spec(param_space_unclassified,0); }
#line 2026 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 273 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 2032 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 274 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_space_spec(reg_space,0); }
#line 2038 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 274 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 2044 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 280 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 2050 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 281 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(local_space); }
#line 2056 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 282 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(shared_space); }
#line 2062 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 283 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 2068 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 289 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2074 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 290 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {printf("Prototype statement detected. WARNING: this is not supported yet on GPGPU-SIM\n"); }
#line 2080 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 291 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2086 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 292 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2092 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 293 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2098 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 294 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {start_inst_group();}
#line 2104 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 294 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {end_inst_group();}
#line 2110 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 295 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {start_inst_group();}
#line 2116 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 295 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {end_inst_group();}
#line 2122 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 299 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[0].double_value), 0); }
#line 2128 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 300 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[-1].double_value),1); }
#line 2134 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 301 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2140 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 302 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { target_header2((yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2146 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 303 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { target_header3((yyvsp[-4].string_value),(yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2152 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 304 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { target_header((yyvsp[0].string_value)); }
#line 2158 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 305 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-1].int_value),(yyvsp[0].string_value)); }
#line 2164 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 306 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-5].int_value),(yyvsp[-4].string_value)); }
#line 2170 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 308 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pragma((yyvsp[-1].string_value)); }
#line 2176 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 309 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2182 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 312 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2188 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 313 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2194 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 314 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2200 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 315 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_constptr((yyvsp[-4].string_value), (yyvsp[-2].string_value), (yyvsp[0].int_value)); }
#line 2206 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 318 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_variable_type(); }
#line 2212 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 323 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[0].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[0].string_value));}
#line 2218 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 324 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header_info((yyvsp[-3].string_value)); func_header_info_int("<", (yyvsp[-1].int_value)); func_header_info(">");
		int i,lbase,l;
		char *id = NULL;
		lbase = strlen((yyvsp[-3].string_value));
		for( i=0; i < (yyvsp[-1].int_value); i++ ) { 
			l = lbase + (int)log10(i+1)+10;
			id = (char*) malloc(l);
			snprintf(id,l,"%s%u",(yyvsp[-3].string_value),i);
			add_identifier(id,0,NON_ARRAY_IDENTIFIER); 
		}
		free((yyvsp[-3].string_value));
	}
#line 2235 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 336 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-2].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[-2].string_value)); func_header_info("["); func_header_info("]");}
#line 2241 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 337 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-3].string_value),(yyvsp[-1].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[-3].string_value)); func_header_info_int("[",(yyvsp[-1].int_value)); func_header_info("]");}
#line 2247 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 347 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_extern_spec(); }
#line 2253 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 351 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_alignment_spec((yyvsp[0].int_value)); }
#line 2259 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 353 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2265 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 354 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2271 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 358 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(const_space,(yyvsp[0].int_value)); }
#line 2277 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 359 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(global_space,0); }
#line 2283 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 360 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(local_space,0); }
#line 2289 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 361 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(param_space_unclassified,0); }
#line 2295 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 362 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(shared_space,0); }
#line 2301 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 363 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(sstarr_space,0); }
#line 2307 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 364 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(surf_space,0); }
#line 2313 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 365 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(tex_space,0); }
#line 2319 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 372 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_option(V2_TYPE); func_header_info(".v2");}
#line 2325 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 373 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_option(V3_TYPE); func_header_info(".v3");}
#line 2331 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 374 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_option(V4_TYPE); func_header_info(".v4");}
#line 2337 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 377 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S8_TYPE ); }
#line 2343 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 378 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S16_TYPE ); }
#line 2349 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 379 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S32_TYPE ); }
#line 2355 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 380 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S64_TYPE ); }
#line 2361 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 381 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U8_TYPE ); }
#line 2367 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 382 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U16_TYPE ); }
#line 2373 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 383 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U32_TYPE ); }
#line 2379 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 384 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U64_TYPE ); }
#line 2385 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 385 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F16_TYPE ); }
#line 2391 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 386 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F32_TYPE ); }
#line 2397 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 387 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F64_TYPE ); }
#line 2403 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 388 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( FF64_TYPE ); }
#line 2409 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 389 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B8_TYPE );  }
#line 2415 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 390 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B16_TYPE ); }
#line 2421 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 391 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B32_TYPE ); }
#line 2427 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 392 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B64_TYPE ); }
#line 2433 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 393 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB64_TYPE ); }
#line 2439 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 394 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB128_TYPE ); }
#line 2445 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 395 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( PRED_TYPE ); }
#line 2451 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 396 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( TEXREF_TYPE ); }
#line 2457 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 397 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
#line 2463 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 398 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SURFREF_TYPE ); }
#line 2469 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 401 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_array_initializer(); }
#line 2475 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 402 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { syntax_not_implemented(); }
#line 2481 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 425 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_label((yyvsp[-1].string_value)); }
#line 2487 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 428 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_return(); }
#line 2493 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 435 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2499 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 436 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2505 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 438 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),0, -1); }
#line 2511 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 439 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),1, -1); }
#line 2517 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 440 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,1); }
#line 2523 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 441 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,2); }
#line 2529 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 442 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,3); }
#line 2535 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 443 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,5); }
#line 2541 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 444 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,6); }
#line 2547 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 445 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,10); }
#line 2553 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 446 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,12); }
#line 2559 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 447 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,13); }
#line 2565 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 448 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,17); }
#line 2571 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 449 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,19); }
#line 2577 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 450 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,28); }
#line 2583 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 462 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(SYNC_OPTION); }
#line 2589 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 463 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ARRIVE_OPTION); }
#line 2595 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 464 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RED_OPTION); }
#line 2601 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 465 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(UNI_OPTION); }
#line 2607 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 466 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(WIDE_OPTION); }
#line 2613 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 467 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ANY_OPTION); }
#line 2619 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 468 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ALL_OPTION); }
#line 2625 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 469 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(BALLOT_OPTION); }
#line 2631 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 470 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GLOBAL_OPTION); }
#line 2637 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 471 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CTA_OPTION); }
#line 2643 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 472 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(SYS_OPTION); }
#line 2649 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 473 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_1D); }
#line 2655 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 474 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_2D); }
#line 2661 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 475 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_3D); }
#line 2667 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 476 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(SAT_OPTION); }
#line 2673 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 477 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(FTZ_OPTION); }
#line 2679 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 478 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NEG_OPTION); }
#line 2685 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 479 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(APPROX_OPTION); }
#line 2691 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 480 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(FULL_OPTION); }
#line 2697 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 481 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EXIT_OPTION); }
#line 2703 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 482 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ABS_OPTION); }
#line 2709 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 484 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(TO_OPTION); }
#line 2715 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 485 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(HALF_OPTION); }
#line 2721 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 486 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EXTP_OPTION); }
#line 2727 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 487 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CA_OPTION); }
#line 2733 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 488 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CG_OPTION); }
#line 2739 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 489 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CS_OPTION); }
#line 2745 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 490 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LU_OPTION); }
#line 2751 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 491 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CV_OPTION); }
#line 2757 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 492 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(WB_OPTION); }
#line 2763 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 493 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(WT_OPTION); }
#line 2769 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 494 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NC_OPTION); }
#line 2775 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 495 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(UP_OPTION); }
#line 2781 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 496 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(DOWN_OPTION); }
#line 2787 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 497 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(BFLY_OPTION); }
#line 2793 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 498 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(IDX_OPTION); }
#line 2799 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 501 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_AND); }
#line 2805 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 502 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_POPC); }
#line 2811 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 503 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_OR); }
#line 2817 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 504 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_XOR); }
#line 2823 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 505 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_CAS); }
#line 2829 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 506 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_EXCH); }
#line 2835 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 507 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_ADD); }
#line 2841 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 508 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_INC); }
#line 2847 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 509 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_DEC); }
#line 2853 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 510 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MIN); }
#line 2859 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 511 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MAX); }
#line 2865 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 518 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RN_OPTION); }
#line 2871 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 519 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RZ_OPTION); }
#line 2877 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 520 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RM_OPTION); }
#line 2883 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 521 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RP_OPTION); }
#line 2889 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 524 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RNI_OPTION); }
#line 2895 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 525 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RZI_OPTION); }
#line 2901 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 526 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RMI_OPTION); }
#line 2907 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 527 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RPI_OPTION); }
#line 2913 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 530 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EQ_OPTION); }
#line 2919 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 531 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NE_OPTION); }
#line 2925 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 532 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LT_OPTION); }
#line 2931 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 533 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LE_OPTION); }
#line 2937 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 534 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GT_OPTION); }
#line 2943 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 535 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GE_OPTION); }
#line 2949 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 536 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LO_OPTION); }
#line 2955 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 537 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LS_OPTION); }
#line 2961 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 538 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(HI_OPTION); }
#line 2967 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 539 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(HS_OPTION); }
#line 2973 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 540 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EQU_OPTION); }
#line 2979 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 541 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NEU_OPTION); }
#line 2985 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 542 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LTU_OPTION); }
#line 2991 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 543 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LEU_OPTION); }
#line 2997 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 544 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GTU_OPTION); }
#line 3003 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 545 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEU_OPTION); }
#line 3009 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 546 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NUM_OPTION); }
#line 3015 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 547 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NAN_OPTION); }
#line 3021 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 550 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option( PRMT_F4E_MODE); }
#line 3027 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 551 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option( PRMT_B4E_MODE); }
#line 3033 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 552 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option( PRMT_RC8_MODE); }
#line 3039 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 553 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option( PRMT_RC16_MODE);}
#line 3045 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 554 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option( PRMT_ECL_MODE); }
#line 3051 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 555 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option( PRMT_ECR_MODE); }
#line 3057 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 558 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {add_space_spec(global_space,0);add_ptr_spec(global_space); add_wmma_option((yyvsp[-2].int_value));add_wmma_option((yyvsp[-1].int_value));add_wmma_option((yyvsp[0].int_value));}
#line 3063 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 559 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    {add_wmma_option((yyvsp[-3].int_value));add_wmma_option((yyvsp[-2].int_value));add_wmma_option((yyvsp[-1].int_value));add_wmma_option((yyvsp[0].int_value));}
#line 3069 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 571 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); }
#line 3075 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 572 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_neg_pred_operand( (yyvsp[0].string_value) ); }
#line 3081 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 573 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); change_operand_neg(); }
#line 3087 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 578 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3093 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 580 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3099 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 581 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1);}
#line 3105 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 582 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1); change_operand_neg();}
#line 3111 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 583 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2);}
#line 3117 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 584 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2); change_operand_neg();}
#line 3123 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 585 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-1);}
#line 3129 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 586 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
#line 3135 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 587 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
#line 3141 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 588 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-3);}
#line 3147 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 589 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
#line 3153 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 590 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
#line 3159 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 593 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3165 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 594 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_3vector_operand((yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3171 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 595 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_4vector_operand((yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3177 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 596 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_8vector_operand((yyvsp[-15].string_value),(yyvsp[-13].string_value),(yyvsp[-11].string_value),(yyvsp[-9].string_value),(yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3183 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 597 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_1vector_operand((yyvsp[-1].string_value)); }
#line 3189 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 600 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand((yyvsp[-1].string_value)); }
#line 3195 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 605 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[-1].int_value),(yyvsp[0].int_value)); }
#line 3201 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 606 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[0].int_value),-1); }
#line 3207 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 609 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); }
#line 3213 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 610 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3219 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 611 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3225 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 612 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); add_memory_operand();}
#line 3231 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 613 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3237 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 616 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(1); }
#line 3243 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 617 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
#line 3249 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 618 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
#line 3255 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 619 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[0].string_value)); change_double_operand_type(2); }
#line 3261 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 620 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
#line 3267 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 621 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
#line 3273 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 622 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-3].string_value),(yyvsp[0].int_value)); change_double_operand_type(3); }
#line 3279 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 625 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_literal_int((yyvsp[0].int_value)); }
#line 3285 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 626 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_literal_float((yyvsp[0].float_value)); }
#line 3291 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 627 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_literal_double((yyvsp[0].double_value)); }
#line 3297 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 630 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[0].string_value),0); }
#line 3303 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 631 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(1);}
#line 3309 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 632 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(2); }
#line 3315 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 633 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3321 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 634 "../src/cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand2((yyvsp[0].int_value)); }
#line 3327 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
    break;


#line 3331 "/home/sungjun/parco/gpgpusim_ramulator/build/gcc-6.5.0/cuda-9010/release/cuobjdump_to_ptxplus/ptx.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 637 "../src/cuda-sim/ptx.y" /* yacc.c:1906  */


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}
