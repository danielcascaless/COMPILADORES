/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MINICSEM_TAB_H_INCLUDED
# define YY_YY_MINICSEM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RVAR = 258,
    RCONST = 259,
    RINT = 260,
    RIF = 261,
    RELSE = 262,
    RWHILE = 263,
    RDO = 264,
    RFOR = 265,
    RPRINT = 266,
    RREAD = 267,
    SEMICOLON = 268,
    COMMA = 269,
    OPLUS = 270,
    OMINUS = 271,
    OASTERISK = 272,
    OSLASH = 273,
    OASSIGN = 274,
    OLESS = 275,
    OGREATER = 276,
    OLESSEQUAL = 277,
    OGREATEREQUAL = 278,
    OEQUALS = 279,
    ONOTEQUALS = 280,
    PARENL = 281,
    PARENR = 282,
    BRACKETL = 283,
    BRACKETR = 284,
    QUESTIONMARK = 285,
    COLON = 286,
    ID = 287,
    LSTR = 288,
    LINT = 289,
    OUMINUS = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 94 "minicsem.y"

    char *lex;
    ListaC code;

#line 98 "minicsem.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINICSEM_TAB_H_INCLUDED  */
