/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LPAREN = 258,
     RPAREN = 259,
     PLUS = 260,
     MINUS = 261,
     MUL = 262,
     DIV = 263,
     MOD = 264,
     POW = 265,
     SQRT = 266,
     FACTORIAL = 267,
     EQUALS = 268,
     LOG10 = 269,
     LOG2 = 270,
     ABS = 271,
     FLOOR = 272,
     CEIL = 273,
     PI = 274,
     SIN = 275,
     COS = 276,
     TAN = 277,
     VARIABLE_KEYWORD = 278,
     VARIABLE = 279,
     EURO_TO_USD = 280,
     CEL_TO_FAH = 281,
     FAH_TO_CEL = 282,
     MI_TO_KM = 283,
     KM_TO_MI = 284,
     USD_TO_GBP = 285,
     GBP_TO_EURO = 286,
     EURO_TO_GBP = 287,
     USD_TO_EURO = 288,
     GBP_TO_USD = 289,
     NUM = 290
   };
#endif
/* Tokens.  */
#define LPAREN 258
#define RPAREN 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIV 263
#define MOD 264
#define POW 265
#define SQRT 266
#define FACTORIAL 267
#define EQUALS 268
#define LOG10 269
#define LOG2 270
#define ABS 271
#define FLOOR 272
#define CEIL 273
#define PI 274
#define SIN 275
#define COS 276
#define TAN 277
#define VARIABLE_KEYWORD 278
#define VARIABLE 279
#define EURO_TO_USD 280
#define CEL_TO_FAH 281
#define FAH_TO_CEL 282
#define MI_TO_KM 283
#define KM_TO_MI 284
#define USD_TO_GBP 285
#define GBP_TO_EURO 286
#define EURO_TO_GBP 287
#define USD_TO_EURO 288
#define GBP_TO_USD 289
#define NUM 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "calc2.y"
{
    float val;
    /* You may include additional fields as you want. */
    /* char op; */
}
/* Line 1529 of yacc.c.  */
#line 125 "calc2.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

