/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    TOKEN_INICIO_VARIABLES = 258,
    TOKEN_FIN_VARIABLES = 259,
    TOKEN_MOSTRAR = 260,
    TOKEN_PARENTSIS_APERTURA = 261,
    TOKEN_PARENTESIS_CIERRE = 262,
    TOKEN_NUEVA_LINEA = 263,
    TOKEN_VARIABLE = 264,
    TOKEN_REPETIR = 265,
    TOKEN_MIENTRAS = 266,
    TOKEN_CUANDO = 267,
    TOKEN_ENTONCES = 268,
    TOKEN_SUBIR_NOTA = 269,
    TOKEN_BAJAR_NOTA = 270,
    TOKEN_CONDICION_PARA_REPETIR = 271,
    TOKEN_SUBIR_OCTAVA = 272,
    TOKEN_BAJAR_OCTAVA = 273,
    TOKEN_FIN = 274,
    TOKEN_NO = 275,
    TOKEN_O_CONDICIONAL = 276,
    TOKEN_Y = 277,
    NUMERO = 278,
    VARIABLE_ID = 279,
    STRING = 280,
    TOKEN_RELACION = 281,
    TOKEN_ASIGNACION = 282
  };
#endif
/* Tokens.  */
#define TOKEN_INICIO_VARIABLES 258
#define TOKEN_FIN_VARIABLES 259
#define TOKEN_MOSTRAR 260
#define TOKEN_PARENTSIS_APERTURA 261
#define TOKEN_PARENTESIS_CIERRE 262
#define TOKEN_NUEVA_LINEA 263
#define TOKEN_VARIABLE 264
#define TOKEN_REPETIR 265
#define TOKEN_MIENTRAS 266
#define TOKEN_CUANDO 267
#define TOKEN_ENTONCES 268
#define TOKEN_SUBIR_NOTA 269
#define TOKEN_BAJAR_NOTA 270
#define TOKEN_CONDICION_PARA_REPETIR 271
#define TOKEN_SUBIR_OCTAVA 272
#define TOKEN_BAJAR_OCTAVA 273
#define TOKEN_FIN 274
#define TOKEN_NO 275
#define TOKEN_O_CONDICIONAL 276
#define TOKEN_Y 277
#define NUMERO 278
#define VARIABLE_ID 279
#define STRING 280
#define TOKEN_RELACION 281
#define TOKEN_ASIGNACION 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "songFormat.y" /* yacc.c:1909  */

        int numero;
        char* string;

#line 113 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
