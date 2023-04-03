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

/* Substitute the type names.  */
#define YYSTYPE         STELLAYYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         Stellayyparse
#define yylex           Stellayylex
#define yyerror         Stellayyerror
#define yydebug         Stellayydebug
#define yynerrs         Stellayynerrs
#define yylval          Stellayylval
#define yychar          Stellayychar

/* First part of user prologue.  */
#line 2 "Stella.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include "Absyn.H"
typedef struct yy_buffer_state *YY_BUFFER_STATE;
int yyparse(void);
int yylex(void);
YY_BUFFER_STATE Stellayy_scan_string(const char *str);
void Stellayy_delete_buffer(YY_BUFFER_STATE buf);
int Stellayy_mylinenumber;
int Stellainitialize_lexer(FILE * inp);
int Stellayywrap(void)
{
  return 1;
}
void Stellayyerror(const char *str)
{
  extern char *Stellayytext;
  fprintf(stderr,"error: line %d: %s at %s\n",
    Stellayy_mylinenumber, str, Stellayytext);
}


namespace Stella
{
static Program* YY_RESULT_Program_ = 0;
static ListStellaIdent* YY_RESULT_ListStellaIdent_ = 0;
static LanguageDecl* YY_RESULT_LanguageDecl_ = 0;
static Extension* YY_RESULT_Extension_ = 0;
static ListExtensionName* YY_RESULT_ListExtensionName_ = 0;
static ListExtension* YY_RESULT_ListExtension_ = 0;
static Decl* YY_RESULT_Decl_ = 0;
static ListDecl* YY_RESULT_ListDecl_ = 0;
static LocalDecl* YY_RESULT_LocalDecl_ = 0;
static ListLocalDecl* YY_RESULT_ListLocalDecl_ = 0;
static Annotation* YY_RESULT_Annotation_ = 0;
static ListAnnotation* YY_RESULT_ListAnnotation_ = 0;
static ParamDecl* YY_RESULT_ParamDecl_ = 0;
static ListParamDecl* YY_RESULT_ListParamDecl_ = 0;
static ReturnType* YY_RESULT_ReturnType_ = 0;
static ThrowType* YY_RESULT_ThrowType_ = 0;
static Type* YY_RESULT_Type_ = 0;
static ListType* YY_RESULT_ListType_ = 0;
static MatchCase* YY_RESULT_MatchCase_ = 0;
static ListMatchCase* YY_RESULT_ListMatchCase_ = 0;
static OptionalTyping* YY_RESULT_OptionalTyping_ = 0;
static PatternData* YY_RESULT_PatternData_ = 0;
static ExprData* YY_RESULT_ExprData_ = 0;
static Pattern* YY_RESULT_Pattern_ = 0;
static ListPattern* YY_RESULT_ListPattern_ = 0;
static LabelledPattern* YY_RESULT_LabelledPattern_ = 0;
static ListLabelledPattern* YY_RESULT_ListLabelledPattern_ = 0;
static Binding* YY_RESULT_Binding_ = 0;
static ListBinding* YY_RESULT_ListBinding_ = 0;
static Expr* YY_RESULT_Expr_ = 0;
static ListExpr* YY_RESULT_ListExpr_ = 0;
static PatternBinding* YY_RESULT_PatternBinding_ = 0;
static ListPatternBinding* YY_RESULT_ListPatternBinding_ = 0;
static VariantFieldType* YY_RESULT_VariantFieldType_ = 0;
static ListVariantFieldType* YY_RESULT_ListVariantFieldType_ = 0;
static RecordFieldType* YY_RESULT_RecordFieldType_ = 0;
static ListRecordFieldType* YY_RESULT_ListRecordFieldType_ = 0;
static Typing* YY_RESULT_Typing_ = 0;

Program* pProgram(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}
Program* pProgram(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

ListStellaIdent* pListStellaIdent(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStellaIdent_;
  }
}
ListStellaIdent* pListStellaIdent(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStellaIdent_;
  }
}

LanguageDecl* pLanguageDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LanguageDecl_;
  }
}
LanguageDecl* pLanguageDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LanguageDecl_;
  }
}

Extension* pExtension(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Extension_;
  }
}
Extension* pExtension(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Extension_;
  }
}

ListExtensionName* pListExtensionName(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExtensionName_;
  }
}
ListExtensionName* pListExtensionName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExtensionName_;
  }
}

ListExtension* pListExtension(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExtension_;
  }
}
ListExtension* pListExtension(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExtension_;
  }
}

Decl* pDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Decl_;
  }
}
Decl* pDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Decl_;
  }
}

ListDecl* pListDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDecl_;
  }
}
ListDecl* pListDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDecl_;
  }
}

LocalDecl* pLocalDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LocalDecl_;
  }
}
LocalDecl* pLocalDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LocalDecl_;
  }
}

ListLocalDecl* pListLocalDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListLocalDecl_;
  }
}
ListLocalDecl* pListLocalDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListLocalDecl_;
  }
}

Annotation* pAnnotation(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Annotation_;
  }
}
Annotation* pAnnotation(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Annotation_;
  }
}

ListAnnotation* pListAnnotation(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListAnnotation_;
  }
}
ListAnnotation* pListAnnotation(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListAnnotation_;
  }
}

ParamDecl* pParamDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ParamDecl_;
  }
}
ParamDecl* pParamDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ParamDecl_;
  }
}

ListParamDecl* pListParamDecl(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListParamDecl_;
  }
}
ListParamDecl* pListParamDecl(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListParamDecl_;
  }
}

ReturnType* pReturnType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ReturnType_;
  }
}
ReturnType* pReturnType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ReturnType_;
  }
}

ThrowType* pThrowType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ThrowType_;
  }
}
ThrowType* pThrowType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ThrowType_;
  }
}

Type* pType9(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType9(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

ListType* pListType9(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}
ListType* pListType9(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}

MatchCase* pMatchCase(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_MatchCase_;
  }
}
MatchCase* pMatchCase(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_MatchCase_;
  }
}

ListMatchCase* pListMatchCase(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListMatchCase_;
  }
}
ListMatchCase* pListMatchCase(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListMatchCase_;
  }
}

OptionalTyping* pOptionalTyping(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OptionalTyping_;
  }
}
OptionalTyping* pOptionalTyping(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OptionalTyping_;
  }
}

PatternData* pPatternData(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PatternData_;
  }
}
PatternData* pPatternData(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PatternData_;
  }
}

ExprData* pExprData(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ExprData_;
  }
}
ExprData* pExprData(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ExprData_;
  }
}

Pattern* pPattern(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Pattern_;
  }
}
Pattern* pPattern(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Pattern_;
  }
}

ListPattern* pListPattern(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPattern_;
  }
}
ListPattern* pListPattern(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPattern_;
  }
}

LabelledPattern* pLabelledPattern(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LabelledPattern_;
  }
}
LabelledPattern* pLabelledPattern(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LabelledPattern_;
  }
}

ListLabelledPattern* pListLabelledPattern(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListLabelledPattern_;
  }
}
ListLabelledPattern* pListLabelledPattern(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListLabelledPattern_;
  }
}

Binding* pBinding(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Binding_;
  }
}
Binding* pBinding(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Binding_;
  }
}

ListBinding* pListBinding(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListBinding_;
  }
}
ListBinding* pListBinding(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListBinding_;
  }
}

Expr* pExpr(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

ListExpr* pListExpr(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpr_;
  }
}
ListExpr* pListExpr(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpr_;
  }
}

Expr* pExpr1(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr1(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

PatternBinding* pPatternBinding(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PatternBinding_;
  }
}
PatternBinding* pPatternBinding(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PatternBinding_;
  }
}

ListPatternBinding* pListPatternBinding(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPatternBinding_;
  }
}
ListPatternBinding* pListPatternBinding(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPatternBinding_;
  }
}

Expr* pExpr2(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr2(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

ListExpr* pListExpr2(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpr_;
  }
}
ListExpr* pListExpr2(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpr_;
  }
}

Expr* pExpr3(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr3(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

Expr* pExpr4(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr4(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

Expr* pExpr6(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr6(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

Expr* pExpr7(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr7(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

Type* pType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

Type* pType1(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType1(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

Type* pType2(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType2(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

Type* pType3(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType3(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

ListType* pListType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}
ListType* pListType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}

Expr* pExpr5(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}
Expr* pExpr5(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expr_;
  }
}

VariantFieldType* pVariantFieldType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_VariantFieldType_;
  }
}
VariantFieldType* pVariantFieldType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_VariantFieldType_;
  }
}

ListVariantFieldType* pListVariantFieldType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListVariantFieldType_;
  }
}
ListVariantFieldType* pListVariantFieldType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListVariantFieldType_;
  }
}

RecordFieldType* pRecordFieldType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_RecordFieldType_;
  }
}
RecordFieldType* pRecordFieldType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_RecordFieldType_;
  }
}

ListRecordFieldType* pListRecordFieldType(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListRecordFieldType_;
  }
}
ListRecordFieldType* pListRecordFieldType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListRecordFieldType_;
  }
}

Typing* pTyping(FILE *inp)
{
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Typing_;
  }
}
Typing* pTyping(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  Stellayy_mylinenumber = 1;
  Stellainitialize_lexer(0);
  buf = Stellayy_scan_string(str);
  result = yyparse();
  Stellayy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Typing_;
  }
}


}

#line 1781 "Parser.C"

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
#ifndef STELLAYYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define STELLAYYDEBUG 1
#  else
#   define STELLAYYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define STELLAYYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined STELLAYYDEBUG */
#if STELLAYYDEBUG
extern int Stellayydebug;
#endif

/* Token kinds.  */
#ifndef STELLAYYTOKENTYPE
# define STELLAYYTOKENTYPE
  enum Stellayytokentype
  {
    STELLAYYEMPTY = -2,
    STELLAYYEOF = 0,               /* "end of file"  */
    STELLAYYerror = 256,           /* error  */
    STELLAYYUNDEF = 257,           /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    STELLA__SYMB_0 = 259,          /* STELLA__SYMB_0  */
    STELLA__SYMB_1 = 260,          /* STELLA__SYMB_1  */
    STELLA__SYMB_2 = 261,          /* STELLA__SYMB_2  */
    STELLA__SYMB_3 = 262,          /* STELLA__SYMB_3  */
    STELLA__SYMB_4 = 263,          /* STELLA__SYMB_4  */
    STELLA__SYMB_5 = 264,          /* STELLA__SYMB_5  */
    STELLA__SYMB_6 = 265,          /* STELLA__SYMB_6  */
    STELLA__SYMB_7 = 266,          /* STELLA__SYMB_7  */
    STELLA__SYMB_8 = 267,          /* STELLA__SYMB_8  */
    STELLA__SYMB_9 = 268,          /* STELLA__SYMB_9  */
    STELLA__SYMB_10 = 269,         /* STELLA__SYMB_10  */
    STELLA__SYMB_11 = 270,         /* STELLA__SYMB_11  */
    STELLA__SYMB_12 = 271,         /* STELLA__SYMB_12  */
    STELLA__SYMB_13 = 272,         /* STELLA__SYMB_13  */
    STELLA__SYMB_14 = 273,         /* STELLA__SYMB_14  */
    STELLA__SYMB_15 = 274,         /* STELLA__SYMB_15  */
    STELLA__SYMB_16 = 275,         /* STELLA__SYMB_16  */
    STELLA__SYMB_17 = 276,         /* STELLA__SYMB_17  */
    STELLA__SYMB_18 = 277,         /* STELLA__SYMB_18  */
    STELLA__SYMB_19 = 278,         /* STELLA__SYMB_19  */
    STELLA__SYMB_20 = 279,         /* STELLA__SYMB_20  */
    STELLA__SYMB_21 = 280,         /* STELLA__SYMB_21  */
    STELLA__SYMB_22 = 281,         /* STELLA__SYMB_22  */
    STELLA__SYMB_23 = 282,         /* STELLA__SYMB_23  */
    STELLA__SYMB_24 = 283,         /* STELLA__SYMB_24  */
    STELLA__SYMB_25 = 284,         /* STELLA__SYMB_25  */
    STELLA__SYMB_26 = 285,         /* STELLA__SYMB_26  */
    STELLA__SYMB_27 = 286,         /* STELLA__SYMB_27  */
    STELLA__SYMB_28 = 287,         /* STELLA__SYMB_28  */
    STELLA__SYMB_29 = 288,         /* STELLA__SYMB_29  */
    STELLA__SYMB_30 = 289,         /* STELLA__SYMB_30  */
    STELLA__SYMB_31 = 290,         /* STELLA__SYMB_31  */
    STELLA__SYMB_32 = 291,         /* STELLA__SYMB_32  */
    STELLA__SYMB_33 = 292,         /* STELLA__SYMB_33  */
    STELLA__SYMB_34 = 293,         /* STELLA__SYMB_34  */
    STELLA__SYMB_35 = 294,         /* STELLA__SYMB_35  */
    STELLA__SYMB_36 = 295,         /* STELLA__SYMB_36  */
    STELLA__SYMB_37 = 296,         /* STELLA__SYMB_37  */
    STELLA__SYMB_38 = 297,         /* STELLA__SYMB_38  */
    STELLA__SYMB_39 = 298,         /* STELLA__SYMB_39  */
    STELLA__SYMB_40 = 299,         /* STELLA__SYMB_40  */
    STELLA__SYMB_41 = 300,         /* STELLA__SYMB_41  */
    STELLA__SYMB_42 = 301,         /* STELLA__SYMB_42  */
    STELLA__SYMB_43 = 302,         /* STELLA__SYMB_43  */
    STELLA__SYMB_44 = 303,         /* STELLA__SYMB_44  */
    STELLA__SYMB_45 = 304,         /* STELLA__SYMB_45  */
    STELLA__SYMB_46 = 305,         /* STELLA__SYMB_46  */
    STELLA__SYMB_47 = 306,         /* STELLA__SYMB_47  */
    STELLA__SYMB_48 = 307,         /* STELLA__SYMB_48  */
    STELLA__SYMB_49 = 308,         /* STELLA__SYMB_49  */
    STELLA__SYMB_50 = 309,         /* STELLA__SYMB_50  */
    STELLA__SYMB_51 = 310,         /* STELLA__SYMB_51  */
    STELLA__SYMB_52 = 311,         /* STELLA__SYMB_52  */
    STELLA__SYMB_53 = 312,         /* STELLA__SYMB_53  */
    STELLA__SYMB_54 = 313,         /* STELLA__SYMB_54  */
    STELLA__SYMB_55 = 314,         /* STELLA__SYMB_55  */
    STELLA__SYMB_56 = 315,         /* STELLA__SYMB_56  */
    STELLA__SYMB_57 = 316,         /* STELLA__SYMB_57  */
    STELLA__SYMB_58 = 317,         /* STELLA__SYMB_58  */
    STELLA__SYMB_59 = 318,         /* STELLA__SYMB_59  */
    STELLA__SYMB_60 = 319,         /* STELLA__SYMB_60  */
    STELLA__SYMB_61 = 320,         /* STELLA__SYMB_61  */
    STELLA__SYMB_62 = 321,         /* STELLA__SYMB_62  */
    STELLA__SYMB_63 = 322,         /* STELLA__SYMB_63  */
    STELLA__SYMB_64 = 323,         /* STELLA__SYMB_64  */
    STELLA__SYMB_65 = 324,         /* STELLA__SYMB_65  */
    STELLA__SYMB_66 = 325,         /* STELLA__SYMB_66  */
    STELLA__SYMB_67 = 326,         /* STELLA__SYMB_67  */
    _INTEGER_ = 327                /* _INTEGER_  */
  };
  typedef enum Stellayytokentype Stellayytoken_kind_t;
#endif

/* Value type.  */
#if ! defined STELLAYYSTYPE && ! defined STELLAYYSTYPE_IS_DECLARED
union STELLAYYSTYPE
{
#line 1705 "Stella.y"

  int int_;
  char char_;
  double double_;
  char* string_;
  Stella::Program* program_;
  Stella::ListStellaIdent* liststellaident_;
  Stella::LanguageDecl* languagedecl_;
  Stella::Extension* extension_;
  Stella::ListExtensionName* listextensionname_;
  Stella::ListExtension* listextension_;
  Stella::Decl* decl_;
  Stella::ListDecl* listdecl_;
  Stella::LocalDecl* localdecl_;
  Stella::ListLocalDecl* listlocaldecl_;
  Stella::Annotation* annotation_;
  Stella::ListAnnotation* listannotation_;
  Stella::ParamDecl* paramdecl_;
  Stella::ListParamDecl* listparamdecl_;
  Stella::ReturnType* returntype_;
  Stella::ThrowType* throwtype_;
  Stella::Type* type_;
  Stella::ListType* listtype_;
  Stella::MatchCase* matchcase_;
  Stella::ListMatchCase* listmatchcase_;
  Stella::OptionalTyping* optionaltyping_;
  Stella::PatternData* patterndata_;
  Stella::ExprData* exprdata_;
  Stella::Pattern* pattern_;
  Stella::ListPattern* listpattern_;
  Stella::LabelledPattern* labelledpattern_;
  Stella::ListLabelledPattern* listlabelledpattern_;
  Stella::Binding* binding_;
  Stella::ListBinding* listbinding_;
  Stella::Expr* expr_;
  Stella::ListExpr* listexpr_;
  Stella::PatternBinding* patternbinding_;
  Stella::ListPatternBinding* listpatternbinding_;
  Stella::VariantFieldType* variantfieldtype_;
  Stella::ListVariantFieldType* listvariantfieldtype_;
  Stella::RecordFieldType* recordfieldtype_;
  Stella::ListRecordFieldType* listrecordfieldtype_;
  Stella::Typing* typing_;

#line 1953 "Parser.C"

};
typedef union STELLAYYSTYPE STELLAYYSTYPE;
# define STELLAYYSTYPE_IS_TRIVIAL 1
# define STELLAYYSTYPE_IS_DECLARED 1
#endif


extern STELLAYYSTYPE Stellayylval;


int Stellayyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL_STELLA__SYMB_0 = 4,             /* STELLA__SYMB_0  */
  YYSYMBOL_STELLA__SYMB_1 = 5,             /* STELLA__SYMB_1  */
  YYSYMBOL_STELLA__SYMB_2 = 6,             /* STELLA__SYMB_2  */
  YYSYMBOL_STELLA__SYMB_3 = 7,             /* STELLA__SYMB_3  */
  YYSYMBOL_STELLA__SYMB_4 = 8,             /* STELLA__SYMB_4  */
  YYSYMBOL_STELLA__SYMB_5 = 9,             /* STELLA__SYMB_5  */
  YYSYMBOL_STELLA__SYMB_6 = 10,            /* STELLA__SYMB_6  */
  YYSYMBOL_STELLA__SYMB_7 = 11,            /* STELLA__SYMB_7  */
  YYSYMBOL_STELLA__SYMB_8 = 12,            /* STELLA__SYMB_8  */
  YYSYMBOL_STELLA__SYMB_9 = 13,            /* STELLA__SYMB_9  */
  YYSYMBOL_STELLA__SYMB_10 = 14,           /* STELLA__SYMB_10  */
  YYSYMBOL_STELLA__SYMB_11 = 15,           /* STELLA__SYMB_11  */
  YYSYMBOL_STELLA__SYMB_12 = 16,           /* STELLA__SYMB_12  */
  YYSYMBOL_STELLA__SYMB_13 = 17,           /* STELLA__SYMB_13  */
  YYSYMBOL_STELLA__SYMB_14 = 18,           /* STELLA__SYMB_14  */
  YYSYMBOL_STELLA__SYMB_15 = 19,           /* STELLA__SYMB_15  */
  YYSYMBOL_STELLA__SYMB_16 = 20,           /* STELLA__SYMB_16  */
  YYSYMBOL_STELLA__SYMB_17 = 21,           /* STELLA__SYMB_17  */
  YYSYMBOL_STELLA__SYMB_18 = 22,           /* STELLA__SYMB_18  */
  YYSYMBOL_STELLA__SYMB_19 = 23,           /* STELLA__SYMB_19  */
  YYSYMBOL_STELLA__SYMB_20 = 24,           /* STELLA__SYMB_20  */
  YYSYMBOL_STELLA__SYMB_21 = 25,           /* STELLA__SYMB_21  */
  YYSYMBOL_STELLA__SYMB_22 = 26,           /* STELLA__SYMB_22  */
  YYSYMBOL_STELLA__SYMB_23 = 27,           /* STELLA__SYMB_23  */
  YYSYMBOL_STELLA__SYMB_24 = 28,           /* STELLA__SYMB_24  */
  YYSYMBOL_STELLA__SYMB_25 = 29,           /* STELLA__SYMB_25  */
  YYSYMBOL_STELLA__SYMB_26 = 30,           /* STELLA__SYMB_26  */
  YYSYMBOL_STELLA__SYMB_27 = 31,           /* STELLA__SYMB_27  */
  YYSYMBOL_STELLA__SYMB_28 = 32,           /* STELLA__SYMB_28  */
  YYSYMBOL_STELLA__SYMB_29 = 33,           /* STELLA__SYMB_29  */
  YYSYMBOL_STELLA__SYMB_30 = 34,           /* STELLA__SYMB_30  */
  YYSYMBOL_STELLA__SYMB_31 = 35,           /* STELLA__SYMB_31  */
  YYSYMBOL_STELLA__SYMB_32 = 36,           /* STELLA__SYMB_32  */
  YYSYMBOL_STELLA__SYMB_33 = 37,           /* STELLA__SYMB_33  */
  YYSYMBOL_STELLA__SYMB_34 = 38,           /* STELLA__SYMB_34  */
  YYSYMBOL_STELLA__SYMB_35 = 39,           /* STELLA__SYMB_35  */
  YYSYMBOL_STELLA__SYMB_36 = 40,           /* STELLA__SYMB_36  */
  YYSYMBOL_STELLA__SYMB_37 = 41,           /* STELLA__SYMB_37  */
  YYSYMBOL_STELLA__SYMB_38 = 42,           /* STELLA__SYMB_38  */
  YYSYMBOL_STELLA__SYMB_39 = 43,           /* STELLA__SYMB_39  */
  YYSYMBOL_STELLA__SYMB_40 = 44,           /* STELLA__SYMB_40  */
  YYSYMBOL_STELLA__SYMB_41 = 45,           /* STELLA__SYMB_41  */
  YYSYMBOL_STELLA__SYMB_42 = 46,           /* STELLA__SYMB_42  */
  YYSYMBOL_STELLA__SYMB_43 = 47,           /* STELLA__SYMB_43  */
  YYSYMBOL_STELLA__SYMB_44 = 48,           /* STELLA__SYMB_44  */
  YYSYMBOL_STELLA__SYMB_45 = 49,           /* STELLA__SYMB_45  */
  YYSYMBOL_STELLA__SYMB_46 = 50,           /* STELLA__SYMB_46  */
  YYSYMBOL_STELLA__SYMB_47 = 51,           /* STELLA__SYMB_47  */
  YYSYMBOL_STELLA__SYMB_48 = 52,           /* STELLA__SYMB_48  */
  YYSYMBOL_STELLA__SYMB_49 = 53,           /* STELLA__SYMB_49  */
  YYSYMBOL_STELLA__SYMB_50 = 54,           /* STELLA__SYMB_50  */
  YYSYMBOL_STELLA__SYMB_51 = 55,           /* STELLA__SYMB_51  */
  YYSYMBOL_STELLA__SYMB_52 = 56,           /* STELLA__SYMB_52  */
  YYSYMBOL_STELLA__SYMB_53 = 57,           /* STELLA__SYMB_53  */
  YYSYMBOL_STELLA__SYMB_54 = 58,           /* STELLA__SYMB_54  */
  YYSYMBOL_STELLA__SYMB_55 = 59,           /* STELLA__SYMB_55  */
  YYSYMBOL_STELLA__SYMB_56 = 60,           /* STELLA__SYMB_56  */
  YYSYMBOL_STELLA__SYMB_57 = 61,           /* STELLA__SYMB_57  */
  YYSYMBOL_STELLA__SYMB_58 = 62,           /* STELLA__SYMB_58  */
  YYSYMBOL_STELLA__SYMB_59 = 63,           /* STELLA__SYMB_59  */
  YYSYMBOL_STELLA__SYMB_60 = 64,           /* STELLA__SYMB_60  */
  YYSYMBOL_STELLA__SYMB_61 = 65,           /* STELLA__SYMB_61  */
  YYSYMBOL_STELLA__SYMB_62 = 66,           /* STELLA__SYMB_62  */
  YYSYMBOL_STELLA__SYMB_63 = 67,           /* STELLA__SYMB_63  */
  YYSYMBOL_STELLA__SYMB_64 = 68,           /* STELLA__SYMB_64  */
  YYSYMBOL_STELLA__SYMB_65 = 69,           /* STELLA__SYMB_65  */
  YYSYMBOL_STELLA__SYMB_66 = 70,           /* STELLA__SYMB_66  */
  YYSYMBOL_STELLA__SYMB_67 = 71,           /* STELLA__SYMB_67  */
  YYSYMBOL__INTEGER_ = 72,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_Program = 74,                   /* Program  */
  YYSYMBOL_LanguageDecl = 75,              /* LanguageDecl  */
  YYSYMBOL_Extension = 76,                 /* Extension  */
  YYSYMBOL_ListExtensionName = 77,         /* ListExtensionName  */
  YYSYMBOL_ListExtension = 78,             /* ListExtension  */
  YYSYMBOL_Decl = 79,                      /* Decl  */
  YYSYMBOL_ListDecl = 80,                  /* ListDecl  */
  YYSYMBOL_Annotation = 81,                /* Annotation  */
  YYSYMBOL_ListAnnotation = 82,            /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 83,                 /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 84,             /* ListParamDecl  */
  YYSYMBOL_ReturnType = 85,                /* ReturnType  */
  YYSYMBOL_ThrowType = 86,                 /* ThrowType  */
  YYSYMBOL_Type9 = 87,                     /* Type9  */
  YYSYMBOL_ListType9 = 88,                 /* ListType9  */
  YYSYMBOL_MatchCase = 89,                 /* MatchCase  */
  YYSYMBOL_ListMatchCase = 90,             /* ListMatchCase  */
  YYSYMBOL_OptionalTyping = 91,            /* OptionalTyping  */
  YYSYMBOL_PatternData = 92,               /* PatternData  */
  YYSYMBOL_ExprData = 93,                  /* ExprData  */
  YYSYMBOL_Pattern = 94,                   /* Pattern  */
  YYSYMBOL_ListPattern = 95,               /* ListPattern  */
  YYSYMBOL_LabelledPattern = 96,           /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 97,       /* ListLabelledPattern  */
  YYSYMBOL_Binding = 98,                   /* Binding  */
  YYSYMBOL_ListBinding = 99,               /* ListBinding  */
  YYSYMBOL_Expr = 100,                     /* Expr  */
  YYSYMBOL_ListExpr = 101,                 /* ListExpr  */
  YYSYMBOL_Expr1 = 102,                    /* Expr1  */
  YYSYMBOL_PatternBinding = 103,           /* PatternBinding  */
  YYSYMBOL_ListPatternBinding = 104,       /* ListPatternBinding  */
  YYSYMBOL_Expr2 = 105,                    /* Expr2  */
  YYSYMBOL_Expr3 = 106,                    /* Expr3  */
  YYSYMBOL_Expr4 = 107,                    /* Expr4  */
  YYSYMBOL_Expr6 = 108,                    /* Expr6  */
  YYSYMBOL_Expr7 = 109,                    /* Expr7  */
  YYSYMBOL_Type = 110,                     /* Type  */
  YYSYMBOL_Type1 = 111,                    /* Type1  */
  YYSYMBOL_Type2 = 112,                    /* Type2  */
  YYSYMBOL_Type3 = 113,                    /* Type3  */
  YYSYMBOL_ListType = 114,                 /* ListType  */
  YYSYMBOL_Expr5 = 115,                    /* Expr5  */
  YYSYMBOL_VariantFieldType = 116,         /* VariantFieldType  */
  YYSYMBOL_ListVariantFieldType = 117,     /* ListVariantFieldType  */
  YYSYMBOL_RecordFieldType = 118,          /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 119       /* ListRecordFieldType  */
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
         || (defined STELLAYYSTYPE_IS_TRIVIAL && STELLAYYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   452

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if STELLAYYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,  1876,  1876,  1882,  1884,  1886,  1887,  1888,  1890,  1891,
    1893,  1894,  1896,  1897,  1904,  1906,  1907,  1909,  1911,  1912,
    1913,  1915,  1916,  1918,  1919,  1921,  1923,  1924,  1926,  1928,
    1929,  1930,  1932,  1933,  1935,  1936,  1938,  1939,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1956,  1957,  1958,  1960,  1962,  1963,  1965,  1967,
    1968,  1970,  1971,  1972,  1974,  1975,  1976,  1978,  1979,  1980,
    1981,  1983,  1985,  1986,  1988,  1989,  1990,  1991,  1992,  1993,
    1994,  1999,  2000,  2001,  2002,  2003,  2004,  2005,  2006,  2007,
    2009,  2010,  2011,  2012,  2014,  2015,  2016,  2017,  2018,  2019,
    2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,  2029,
    2030,  2031,  2032,  2033,  2035,  2036,  2037,  2038,  2039,  2040,
    2042,  2043,  2044,  2046,  2047,  2049,  2050,  2051,  2052,  2053,
    2055,  2056,  2057,  2058,  2059,  2061,  2062,  2063,  2065,  2067,
    2069,  2070,  2071,  2073,  2075,  2076
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if STELLAYYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_",
  "STELLA__SYMB_0", "STELLA__SYMB_1", "STELLA__SYMB_2", "STELLA__SYMB_3",
  "STELLA__SYMB_4", "STELLA__SYMB_5", "STELLA__SYMB_6", "STELLA__SYMB_7",
  "STELLA__SYMB_8", "STELLA__SYMB_9", "STELLA__SYMB_10", "STELLA__SYMB_11",
  "STELLA__SYMB_12", "STELLA__SYMB_13", "STELLA__SYMB_14",
  "STELLA__SYMB_15", "STELLA__SYMB_16", "STELLA__SYMB_17",
  "STELLA__SYMB_18", "STELLA__SYMB_19", "STELLA__SYMB_20",
  "STELLA__SYMB_21", "STELLA__SYMB_22", "STELLA__SYMB_23",
  "STELLA__SYMB_24", "STELLA__SYMB_25", "STELLA__SYMB_26",
  "STELLA__SYMB_27", "STELLA__SYMB_28", "STELLA__SYMB_29",
  "STELLA__SYMB_30", "STELLA__SYMB_31", "STELLA__SYMB_32",
  "STELLA__SYMB_33", "STELLA__SYMB_34", "STELLA__SYMB_35",
  "STELLA__SYMB_36", "STELLA__SYMB_37", "STELLA__SYMB_38",
  "STELLA__SYMB_39", "STELLA__SYMB_40", "STELLA__SYMB_41",
  "STELLA__SYMB_42", "STELLA__SYMB_43", "STELLA__SYMB_44",
  "STELLA__SYMB_45", "STELLA__SYMB_46", "STELLA__SYMB_47",
  "STELLA__SYMB_48", "STELLA__SYMB_49", "STELLA__SYMB_50",
  "STELLA__SYMB_51", "STELLA__SYMB_52", "STELLA__SYMB_53",
  "STELLA__SYMB_54", "STELLA__SYMB_55", "STELLA__SYMB_56",
  "STELLA__SYMB_57", "STELLA__SYMB_58", "STELLA__SYMB_59",
  "STELLA__SYMB_60", "STELLA__SYMB_61", "STELLA__SYMB_62",
  "STELLA__SYMB_63", "STELLA__SYMB_64", "STELLA__SYMB_65",
  "STELLA__SYMB_66", "STELLA__SYMB_67", "_INTEGER_", "$accept", "Program",
  "LanguageDecl", "Extension", "ListExtensionName", "ListExtension",
  "Decl", "ListDecl", "Annotation", "ListAnnotation", "ParamDecl",
  "ListParamDecl", "ReturnType", "ThrowType", "Type9", "ListType9",
  "MatchCase", "ListMatchCase", "OptionalTyping", "PatternData",
  "ExprData", "Pattern", "ListPattern", "LabelledPattern",
  "ListLabelledPattern", "Binding", "ListBinding", "Expr", "ListExpr",
  "Expr1", "PatternBinding", "ListPatternBinding", "Expr2", "Expr3",
  "Expr4", "Expr6", "Expr7", "Type", "Type1", "Type2", "Type3", "ListType",
  "Expr5", "VariantFieldType", "ListVariantFieldType", "RecordFieldType",
  "ListRecordFieldType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-256)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -15,    31,  -256,    29,  -256,    -9,  -256,   -30,    35,
      12,    -2,  -256,   -12,  -256,   -29,    66,  -256,    64,    11,
    -256,  -256,    -2,    97,    77,  -256,    97,   382,    16,    97,
    -256,  -256,  -256,    82,    19,  -256,  -256,  -256,    67,  -256,
      27,    92,    91,   102,    98,   106,   104,   100,   111,   108,
     109,    97,   101,    24,   115,   125,   124,  -256,    97,    97,
    -256,    62,  -256,    97,  -256,    16,  -256,  -256,   130,    97,
    -256,    97,    27,   126,  -256,  -256,    91,  -256,  -256,  -256,
     127,  -256,  -256,  -256,    97,    78,    97,  -256,    97,   132,
    -256,   139,  -256,  -256,  -256,    97,   -32,  -256,   144,   144,
     212,    75,   144,   140,   141,   143,   145,   147,   148,   149,
    -256,   150,   152,   146,   144,   154,   156,   314,   314,   266,
     162,   163,  -256,   153,  -256,  -256,  -256,   164,   167,  -256,
     269,   -13,     7,  -256,  -256,   173,   171,   178,   174,   180,
     179,   177,   176,   144,   144,   144,   144,   144,   144,   144,
     144,    27,    97,   134,   144,   144,   314,   377,   128,   314,
    -256,   197,   198,   200,  -256,  -256,  -256,  -256,   199,   203,
     169,   181,   204,   144,   144,    97,  -256,   144,   266,   266,
     266,   266,   266,   266,   310,   310,    24,   310,   310,   310,
     310,   144,   -17,  -256,   144,   158,  -256,   144,  -256,   144,
     214,  -256,   225,   226,   227,   228,   229,   233,   234,   232,
     241,   222,   144,   242,   243,    13,   231,   247,   245,   248,
     246,   252,   238,   314,   314,   314,   144,   314,   144,   144,
     314,   257,   259,   253,  -256,    83,    83,    83,    83,    83,
      83,   -13,   -13,  -256,   -13,  -256,  -256,  -256,   268,  -256,
    -256,  -256,   171,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,   144,   144,  -256,   272,    23,   244,  -256,  -256,
     314,  -256,   314,   314,  -256,   207,  -256,   314,   270,  -256,
     278,   295,   296,  -256,  -256,  -256,  -256,   290,   297,   292,
    -256,  -256,    23,  -256,   304,   303,   255,  -256,   144,   318,
    -256,  -256,   231,  -256,  -256,  -256,  -256,  -256,  -256,   314,
    -256,   144,  -256,   144,  -256,   144,  -256,  -256,  -256,  -256,
     319,   312,  -256,  -256
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,     0,     1,    12,     3,     0,     0,
      15,     5,     9,     0,    13,     0,     6,     4,     0,     0,
      14,    16,     5,     0,     0,     7,     0,   135,   140,     0,
     130,   131,   132,     0,     0,   133,    11,   122,   124,   129,
      18,     0,   133,   136,     0,   144,     0,    32,   141,     0,
       0,   135,     0,     0,     0,    19,     0,   134,     0,   135,
     125,     0,   126,     0,   139,   140,   127,   128,     0,     0,
     123,     0,    18,    21,   143,   137,     0,   145,    33,   142,
       0,   121,    17,    20,     0,    23,     0,    22,     0,     0,
     120,    26,    24,    25,    12,     0,    15,    27,     0,     0,
      64,     0,    64,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,   116,   118,   117,     0,    63,    70,
      80,    89,   138,   113,    93,     0,   118,    59,     0,    65,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,     0,    52,     0,    52,
      45,     0,     0,     0,    46,    47,    50,    48,     0,    72,
       0,     0,     0,     0,     0,     0,    10,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,     0,   119,     0,     0,    98,    64,    97,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    53,     0,    56,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,    61,    74,    75,    76,    77,    78,
      79,    86,    87,    81,    88,    90,    91,    92,     0,    95,
      96,    58,     0,    60,    66,    37,    83,   100,   101,   102,
     107,   108,     0,     0,   109,     0,     0,     0,   103,   104,
       0,    51,     0,    52,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    71,    73,    68,    69,    30,     0,     0,
     106,   105,     0,    94,     0,     0,     0,   111,     0,     0,
      55,    54,     0,    57,    35,    38,    39,    40,    49,    29,
      84,     0,   112,     0,    99,     0,    67,    44,    31,    28,
       0,     0,   110,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,  -256,  -256,  -256,   313,  -256,  -256,   240,  -256,  -256,
    -256,   -66,  -256,  -256,  -256,   251,  -256,    28,  -256,  -256,
    -256,  -152,  -151,  -256,    72,  -256,   155,   -98,   -93,  -112,
    -256,  -108,   220,    43,  -121,  -256,  -255,    -4,  -256,   -50,
    -256,   -35,  -146,  -256,   283,  -256,   288
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     9,    17,     6,    14,    10,    21,    15,
      55,    56,    85,    89,    91,    92,   287,   288,    64,   278,
     200,   168,   218,   219,   220,   137,   138,   139,   140,   128,
     169,   170,   129,   130,   131,   132,   133,    43,    37,    38,
      39,    44,   134,    48,    49,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   135,   153,    70,   215,   217,    83,   217,   222,   142,
     171,   297,    -2,   191,   188,   189,    68,   270,    19,    36,
     271,     1,    41,    20,    75,    50,   190,     4,    98,    99,
      26,     5,    27,    13,     7,     8,   192,   312,    11,    28,
      12,    29,   245,   246,   247,   202,   203,   204,   205,   206,
     207,   208,   209,   249,    74,   250,   213,   214,    18,    78,
      30,    31,    32,   241,   242,    81,   244,    82,   110,    16,
      22,   280,   281,   282,    23,   231,   232,    13,   289,   234,
      87,    24,    90,    40,    93,   210,    47,   122,    51,    52,
     124,    93,    53,   125,    35,   126,   251,    54,   248,    57,
     267,   255,    58,    26,   254,    27,    59,    60,   184,   185,
      61,    63,    28,    62,    29,    65,   285,   286,   299,   284,
     300,   217,   301,   186,    66,   304,    71,    67,   283,    72,
      69,    73,    76,    30,    31,    32,   243,    80,    84,    86,
      94,    88,   187,    95,    33,   141,   143,   144,   211,   145,
      99,   146,   100,   147,   148,   149,   150,   289,   151,   101,
     154,   102,   155,   152,   294,   295,    34,    35,   173,   174,
     175,   233,   177,   176,   103,   104,   105,   106,   107,   108,
     193,   194,   195,   196,   197,   109,   316,   199,   198,   110,
     111,   112,   113,   114,   201,   115,   212,   116,   221,   117,
     118,   119,   120,   223,   224,   121,   225,   227,   122,   226,
     123,   124,   230,   319,   125,   320,   126,   321,    99,   228,
     100,   235,   236,   237,   238,   239,   240,   101,   252,   102,
     256,   229,   257,   258,   259,   260,   261,   262,   263,   264,
     266,   272,   103,   104,   105,   106,   107,   108,   265,   268,
     269,   273,   275,   109,   274,   276,   279,   110,   111,   112,
     113,   114,   277,   115,   290,   116,   291,   117,   118,   119,
     120,   292,    99,   121,   100,   293,   122,   302,   123,   124,
     296,   101,   136,   102,   126,   306,   305,   298,   178,   179,
     180,   181,   182,   183,   184,   185,   103,   104,   105,   106,
     107,   108,   307,   308,   309,   311,   310,   109,   313,   186,
     314,   110,   111,   112,   113,   315,    99,   115,   100,   116,
     156,   323,   157,   119,   120,   317,   322,   121,   187,   158,
     122,   159,   123,   124,    96,    25,   125,   318,   126,   172,
     103,   104,   105,   106,   107,   108,    97,   303,    79,    77,
     253,   109,     0,     0,     0,   110,   111,     0,   113,   160,
       0,   115,     0,   116,     0,   161,     0,   162,   120,     0,
       0,   121,     0,     0,   122,   163,   123,   124,   164,     0,
     125,   165,   126,   156,   166,   157,   167,     0,    26,     0,
      27,     0,   158,     0,   159,     0,     0,    28,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,     0,   160,     0,     0,     0,     0,     0,   161,    33,
     162,     0,     0,     0,     0,     0,     0,     0,   163,     0,
       0,   164,     0,     0,   165,     0,     0,   216,     0,   167,
       0,    34,    42
};

static const yytype_int16 yycheck[] =
{
      98,    99,   114,    53,   156,   157,    72,   159,   159,   102,
     118,   266,     0,     6,    27,    28,    51,     4,    47,    23,
       7,    54,    26,    52,    59,    29,    39,    42,    60,     6,
       6,     0,     8,    65,     5,    44,    29,   292,    68,    15,
       5,    17,   188,   189,   190,   143,   144,   145,   146,   147,
     148,   149,   150,    70,    58,    72,   154,   155,    70,    63,
      36,    37,    38,   184,   185,    69,   187,    71,    45,    71,
       4,   223,   224,   225,    10,   173,   174,    65,   230,   177,
      84,    70,    86,     6,    88,   151,    70,    64,     6,    70,
      67,    95,    25,    70,    70,    72,   194,    70,   191,     7,
     212,   199,    11,     6,   197,     8,     4,     9,    25,    26,
       4,    11,    15,     9,    17,     4,   228,   229,   270,   227,
     272,   273,   273,    40,    16,   277,    11,    18,   226,     4,
      29,     7,    70,    36,    37,    38,   186,     7,    12,    12,
       8,    63,    59,     4,    47,    70,     6,     6,   152,     6,
       6,     6,     8,     6,     6,     6,     6,   309,     6,    15,
       6,    17,     6,    17,   262,   263,    69,    70,     6,     6,
      17,   175,     5,     9,    30,    31,    32,    33,    34,    35,
       7,    10,     4,     9,     4,    41,   298,    10,     9,    45,
      46,    47,    48,    49,    18,    51,    62,    53,    70,    55,
      56,    57,    58,     6,     6,    61,     6,     4,    64,    10,
      66,    67,     8,   311,    70,   313,    72,   315,     6,    50,
       8,   178,   179,   180,   181,   182,   183,    15,    70,    17,
      16,    50,     7,     7,     7,     7,     7,     4,     4,     7,
      18,    10,    30,    31,    32,    33,    34,    35,     7,     7,
       7,     4,     4,    41,     9,     9,    18,    45,    46,    47,
      48,    49,    10,    51,     7,    53,     7,    55,    56,    57,
      58,    18,     6,    61,     8,     7,    64,    70,    66,    67,
       8,    15,    70,    17,    72,     7,    16,    43,    19,    20,
      21,    22,    23,    24,    25,    26,    30,    31,    32,    33,
      34,    35,     7,     7,    14,    13,     9,    41,     4,    40,
       7,    45,    46,    47,    48,    60,     6,    51,     8,    53,
       6,     9,     8,    57,    58,     7,     7,    61,    59,    15,
      64,    17,    66,    67,    94,    22,    70,   309,    72,   119,
      30,    31,    32,    33,    34,    35,    95,   275,    65,    61,
     195,    41,    -1,    -1,    -1,    45,    46,    -1,    48,    45,
      -1,    51,    -1,    53,    -1,    51,    -1,    53,    58,    -1,
      -1,    61,    -1,    -1,    64,    61,    66,    67,    64,    -1,
      70,    67,    72,     6,    70,     8,    72,    -1,     6,    -1,
       8,    -1,    15,    -1,    17,    -1,    -1,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    47,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,
      -1,    69,    70
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,    74,    75,    42,     0,    78,     5,    44,    76,
      80,    68,     5,    65,    79,    82,    71,    77,    70,    47,
      52,    81,     4,    10,    70,    77,     6,     8,    15,    17,
      36,    37,    38,    47,    69,    70,   110,   111,   112,   113,
       6,   110,    70,   110,   114,   118,   119,    70,   116,   117,
     110,     6,    70,    25,    70,    83,    84,     7,    11,     4,
       9,     4,     9,    11,    91,     4,    16,    18,   114,    29,
     112,    11,     4,     7,   110,   114,    70,   119,   110,   117,
       7,   110,   110,    84,    12,    85,    12,   110,    63,    86,
     110,    87,    88,   110,     8,     4,    80,    88,    60,     6,
       8,    15,    17,    30,    31,    32,    33,    34,    35,    41,
      45,    46,    47,    48,    49,    51,    53,    55,    56,    57,
      58,    61,    64,    66,    67,    70,    72,   100,   102,   105,
     106,   107,   108,   109,   115,   100,    70,    98,    99,   100,
     101,    70,   101,     6,     6,     6,     6,     6,     6,     6,
       6,     6,    17,   102,     6,     6,     6,     8,    15,    17,
      45,    51,    53,    61,    64,    67,    70,    72,    94,   103,
     104,   104,   105,     6,     6,    17,     9,     5,    19,    20,
      21,    22,    23,    24,    25,    26,    40,    59,    27,    28,
      39,     6,    29,     7,    10,     4,     9,     4,     9,    10,
      93,    18,   100,   100,   100,   100,   100,   100,   100,   100,
      84,   110,    62,   100,   100,    94,    70,    94,    95,    96,
      97,    70,    95,     6,     6,     6,    10,     4,    50,    50,
       8,   100,   100,   110,   100,   106,   106,   106,   106,   106,
     106,   107,   107,   112,   107,   115,   115,   115,   101,    70,
      72,   100,    70,    99,   101,   100,    16,     7,     7,     7,
       7,     7,     4,     4,     7,     7,    18,   102,     7,     7,
       4,     7,    10,     4,     9,     4,     9,    10,    92,    18,
      94,    94,    94,   100,   104,   102,   102,    89,    90,    94,
       7,     7,    18,     7,   100,   100,     8,   109,    43,    94,
      94,    95,    70,    97,    94,    16,     7,     7,     7,    14,
       9,    13,   109,     4,     7,    60,   102,     7,    90,   100,
     100,   100,     7,     9
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    75,    76,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    82,    82,    83,    84,    84,
      84,    85,    85,    86,    86,    87,    88,    88,    89,    90,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    97,    97,    98,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   109,   109,   109,
     110,   110,   110,   111,   111,   112,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   115,   116,
     117,   117,   117,   118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     0,     1,     3,     0,     3,
      13,     4,     0,     2,     1,     0,     2,     3,     0,     1,
       3,     0,     2,     0,     2,     1,     1,     3,     3,     0,
       1,     3,     0,     2,     0,     2,     0,     2,     4,     4,
       4,     3,     3,     3,     5,     1,     1,     1,     1,     4,
       1,     3,     0,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     2,     1,     0,     1,     3,     6,     4,     4,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     8,     4,     5,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     4,     3,     3,     3,     3,     6,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       8,     5,     5,     1,     1,     1,     1,     1,     1,     3,
       6,     4,     1,     3,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     0,     1,     3,     1,     2,
       0,     1,     3,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = STELLAYYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == STELLAYYEMPTY)                                        \
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
   Use STELLAYYerror or STELLAYYUNDEF. */
#define YYERRCODE STELLAYYUNDEF


/* Enable debugging if requested.  */
#if STELLAYYDEBUG

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
#else /* !STELLAYYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !STELLAYYDEBUG */


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

  yychar = STELLAYYEMPTY; /* Cause a token to be read.  */

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
  if (yychar == STELLAYYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= STELLAYYEOF)
    {
      yychar = STELLAYYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == STELLAYYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = STELLAYYUNDEF;
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
  yychar = STELLAYYEMPTY;
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
  case 2: /* Program: LanguageDecl ListExtension ListDecl  */
#line 1876 "Stella.y"
                                              {  (yyval.program_) = new Stella::AProgram((yyvsp[-2].languagedecl_), (yyvsp[-1].listextension_), (yyvsp[0].listdecl_)); (yyval.program_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Program_= (yyval.program_); }
#line 3311 "Parser.C"
    break;

  case 3: /* LanguageDecl: STELLA__SYMB_50 STELLA__SYMB_38 STELLA__SYMB_1  */
#line 1882 "Stella.y"
                                                              {  (yyval.languagedecl_) = new Stella::LanguageCore(); (yyval.languagedecl_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_LanguageDecl_= (yyval.languagedecl_); }
#line 3317 "Parser.C"
    break;

  case 4: /* Extension: STELLA__SYMB_40 STELLA__SYMB_64 ListExtensionName  */
#line 1884 "Stella.y"
                                                              {  std::reverse((yyvsp[0].listextensionname_)->begin(),(yyvsp[0].listextensionname_)->end()) ;(yyval.extension_) = new Stella::AnExtension((yyvsp[0].listextensionname_)); (yyval.extension_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Extension_= (yyval.extension_); }
#line 3323 "Parser.C"
    break;

  case 5: /* ListExtensionName: %empty  */
#line 1886 "Stella.y"
                                {  (yyval.listextensionname_) = new Stella::ListExtensionName(); Stella::YY_RESULT_ListExtensionName_= (yyval.listextensionname_); }
#line 3329 "Parser.C"
    break;

  case 6: /* ListExtensionName: STELLA__SYMB_67  */
#line 1887 "Stella.y"
                    {  (yyval.listextensionname_) = new Stella::ListExtensionName() ; (yyval.listextensionname_)->push_back((yyvsp[0].string_)); Stella::YY_RESULT_ListExtensionName_= (yyval.listextensionname_); }
#line 3335 "Parser.C"
    break;

  case 7: /* ListExtensionName: STELLA__SYMB_67 STELLA__SYMB_0 ListExtensionName  */
#line 1888 "Stella.y"
                                                     {  (yyvsp[0].listextensionname_)->push_back((yyvsp[-2].string_)) ; (yyval.listextensionname_) = (yyvsp[0].listextensionname_) ; Stella::YY_RESULT_ListExtensionName_= (yyval.listextensionname_); }
#line 3341 "Parser.C"
    break;

  case 8: /* ListExtension: %empty  */
#line 1890 "Stella.y"
                            {  (yyval.listextension_) = new Stella::ListExtension(); Stella::YY_RESULT_ListExtension_= (yyval.listextension_); }
#line 3347 "Parser.C"
    break;

  case 9: /* ListExtension: ListExtension Extension STELLA__SYMB_1  */
#line 1891 "Stella.y"
                                           {  (yyvsp[-2].listextension_)->push_back((yyvsp[-1].extension_)) ; (yyval.listextension_) = (yyvsp[-2].listextension_) ; Stella::YY_RESULT_ListExtension_= (yyval.listextension_); }
#line 3353 "Parser.C"
    break;

  case 10: /* Decl: ListAnnotation STELLA__SYMB_43 STELLA__SYMB_66 STELLA__SYMB_2 ListParamDecl STELLA__SYMB_3 ReturnType ThrowType STELLA__SYMB_4 ListDecl STELLA__SYMB_56 Expr STELLA__SYMB_5  */
#line 1893 "Stella.y"
                                                                                                                                                                                   {  std::reverse((yyvsp[-8].listparamdecl_)->begin(),(yyvsp[-8].listparamdecl_)->end()) ;(yyval.decl_) = new Stella::DeclFun((yyvsp[-12].listannotation_), (yyvsp[-10].string_), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), (yyvsp[-3].listdecl_), (yyvsp[-1].expr_)); (yyval.decl_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Decl_= (yyval.decl_); }
#line 3359 "Parser.C"
    break;

  case 11: /* Decl: STELLA__SYMB_61 STELLA__SYMB_66 STELLA__SYMB_6 Type  */
#line 1894 "Stella.y"
                                                        {  (yyval.decl_) = new Stella::DeclTypeAlias((yyvsp[-2].string_), (yyvsp[0].type_)); (yyval.decl_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Decl_= (yyval.decl_); }
#line 3365 "Parser.C"
    break;

  case 12: /* ListDecl: %empty  */
#line 1896 "Stella.y"
                       {  (yyval.listdecl_) = new Stella::ListDecl(); Stella::YY_RESULT_ListDecl_= (yyval.listdecl_); }
#line 3371 "Parser.C"
    break;

  case 13: /* ListDecl: ListDecl Decl  */
#line 1897 "Stella.y"
                  {  (yyvsp[-1].listdecl_)->push_back((yyvsp[0].decl_)) ; (yyval.listdecl_) = (yyvsp[-1].listdecl_) ; Stella::YY_RESULT_ListDecl_= (yyval.listdecl_); }
#line 3377 "Parser.C"
    break;

  case 14: /* Annotation: STELLA__SYMB_48  */
#line 1904 "Stella.y"
                             {  (yyval.annotation_) = new Stella::InlineAnnotation(); (yyval.annotation_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Annotation_= (yyval.annotation_); }
#line 3383 "Parser.C"
    break;

  case 15: /* ListAnnotation: %empty  */
#line 1906 "Stella.y"
                             {  (yyval.listannotation_) = new Stella::ListAnnotation(); Stella::YY_RESULT_ListAnnotation_= (yyval.listannotation_); }
#line 3389 "Parser.C"
    break;

  case 16: /* ListAnnotation: ListAnnotation Annotation  */
#line 1907 "Stella.y"
                              {  (yyvsp[-1].listannotation_)->push_back((yyvsp[0].annotation_)) ; (yyval.listannotation_) = (yyvsp[-1].listannotation_) ; Stella::YY_RESULT_ListAnnotation_= (yyval.listannotation_); }
#line 3395 "Parser.C"
    break;

  case 17: /* ParamDecl: STELLA__SYMB_66 STELLA__SYMB_7 Type  */
#line 1909 "Stella.y"
                                                {  (yyval.paramdecl_) = new Stella::AParamDecl((yyvsp[-2].string_), (yyvsp[0].type_)); (yyval.paramdecl_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ParamDecl_= (yyval.paramdecl_); }
#line 3401 "Parser.C"
    break;

  case 18: /* ListParamDecl: %empty  */
#line 1911 "Stella.y"
                            {  (yyval.listparamdecl_) = new Stella::ListParamDecl(); Stella::YY_RESULT_ListParamDecl_= (yyval.listparamdecl_); }
#line 3407 "Parser.C"
    break;

  case 19: /* ListParamDecl: ParamDecl  */
#line 1912 "Stella.y"
              {  (yyval.listparamdecl_) = new Stella::ListParamDecl() ; (yyval.listparamdecl_)->push_back((yyvsp[0].paramdecl_)); Stella::YY_RESULT_ListParamDecl_= (yyval.listparamdecl_); }
#line 3413 "Parser.C"
    break;

  case 20: /* ListParamDecl: ParamDecl STELLA__SYMB_0 ListParamDecl  */
#line 1913 "Stella.y"
                                           {  (yyvsp[0].listparamdecl_)->push_back((yyvsp[-2].paramdecl_)) ; (yyval.listparamdecl_) = (yyvsp[0].listparamdecl_) ; Stella::YY_RESULT_ListParamDecl_= (yyval.listparamdecl_); }
#line 3419 "Parser.C"
    break;

  case 21: /* ReturnType: %empty  */
#line 1915 "Stella.y"
                         {  (yyval.returntype_) = new Stella::NoReturnType(); (yyval.returntype_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ReturnType_= (yyval.returntype_); }
#line 3425 "Parser.C"
    break;

  case 22: /* ReturnType: STELLA__SYMB_8 Type  */
#line 1916 "Stella.y"
                        {  (yyval.returntype_) = new Stella::SomeReturnType((yyvsp[0].type_)); (yyval.returntype_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ReturnType_= (yyval.returntype_); }
#line 3431 "Parser.C"
    break;

  case 23: /* ThrowType: %empty  */
#line 1918 "Stella.y"
                        {  (yyval.throwtype_) = new Stella::NoThrowType(); (yyval.throwtype_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ThrowType_= (yyval.throwtype_); }
#line 3437 "Parser.C"
    break;

  case 24: /* ThrowType: STELLA__SYMB_59 ListType9  */
#line 1919 "Stella.y"
                              {  std::reverse((yyvsp[0].listtype_)->begin(),(yyvsp[0].listtype_)->end()) ;(yyval.throwtype_) = new Stella::SomeThrowType((yyvsp[0].listtype_)); (yyval.throwtype_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ThrowType_= (yyval.throwtype_); }
#line 3443 "Parser.C"
    break;

  case 25: /* Type9: Type  */
#line 1921 "Stella.y"
             {  (yyval.type_) = (yyvsp[0].type_); Stella::YY_RESULT_Type_= (yyval.type_); }
#line 3449 "Parser.C"
    break;

  case 26: /* ListType9: Type9  */
#line 1923 "Stella.y"
                  {  (yyval.listtype_) = new Stella::ListType() ; (yyval.listtype_)->push_back((yyvsp[0].type_)); Stella::YY_RESULT_ListType_= (yyval.listtype_); }
#line 3455 "Parser.C"
    break;

  case 27: /* ListType9: Type9 STELLA__SYMB_0 ListType9  */
#line 1924 "Stella.y"
                                   {  (yyvsp[0].listtype_)->push_back((yyvsp[-2].type_)) ; (yyval.listtype_) = (yyvsp[0].listtype_) ; Stella::YY_RESULT_ListType_= (yyval.listtype_); }
#line 3461 "Parser.C"
    break;

  case 28: /* MatchCase: Pattern STELLA__SYMB_9 Expr  */
#line 1926 "Stella.y"
                                        {  (yyval.matchcase_) = new Stella::AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); (yyval.matchcase_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_MatchCase_= (yyval.matchcase_); }
#line 3467 "Parser.C"
    break;

  case 29: /* ListMatchCase: %empty  */
#line 1928 "Stella.y"
                            {  (yyval.listmatchcase_) = new Stella::ListMatchCase(); Stella::YY_RESULT_ListMatchCase_= (yyval.listmatchcase_); }
#line 3473 "Parser.C"
    break;

  case 30: /* ListMatchCase: MatchCase  */
#line 1929 "Stella.y"
              {  (yyval.listmatchcase_) = new Stella::ListMatchCase() ; (yyval.listmatchcase_)->push_back((yyvsp[0].matchcase_)); Stella::YY_RESULT_ListMatchCase_= (yyval.listmatchcase_); }
#line 3479 "Parser.C"
    break;

  case 31: /* ListMatchCase: MatchCase STELLA__SYMB_10 ListMatchCase  */
#line 1930 "Stella.y"
                                            {  (yyvsp[0].listmatchcase_)->push_back((yyvsp[-2].matchcase_)) ; (yyval.listmatchcase_) = (yyvsp[0].listmatchcase_) ; Stella::YY_RESULT_ListMatchCase_= (yyval.listmatchcase_); }
#line 3485 "Parser.C"
    break;

  case 32: /* OptionalTyping: %empty  */
#line 1932 "Stella.y"
                             {  (yyval.optionaltyping_) = new Stella::NoTyping(); (yyval.optionaltyping_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_OptionalTyping_= (yyval.optionaltyping_); }
#line 3491 "Parser.C"
    break;

  case 33: /* OptionalTyping: STELLA__SYMB_7 Type  */
#line 1933 "Stella.y"
                        {  (yyval.optionaltyping_) = new Stella::SomeTyping((yyvsp[0].type_)); (yyval.optionaltyping_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_OptionalTyping_= (yyval.optionaltyping_); }
#line 3497 "Parser.C"
    break;

  case 34: /* PatternData: %empty  */
#line 1935 "Stella.y"
                          {  (yyval.patterndata_) = new Stella::NoPatternData(); (yyval.patterndata_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_PatternData_= (yyval.patterndata_); }
#line 3503 "Parser.C"
    break;

  case 35: /* PatternData: STELLA__SYMB_6 Pattern  */
#line 1936 "Stella.y"
                           {  (yyval.patterndata_) = new Stella::SomePatternData((yyvsp[0].pattern_)); (yyval.patterndata_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_PatternData_= (yyval.patterndata_); }
#line 3509 "Parser.C"
    break;

  case 36: /* ExprData: %empty  */
#line 1938 "Stella.y"
                       {  (yyval.exprdata_) = new Stella::NoExprData(); (yyval.exprdata_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ExprData_= (yyval.exprdata_); }
#line 3515 "Parser.C"
    break;

  case 37: /* ExprData: STELLA__SYMB_6 Expr  */
#line 1939 "Stella.y"
                        {  (yyval.exprdata_) = new Stella::SomeExprData((yyvsp[0].expr_)); (yyval.exprdata_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_ExprData_= (yyval.exprdata_); }
#line 3521 "Parser.C"
    break;

  case 38: /* Pattern: STELLA__SYMB_11 STELLA__SYMB_66 PatternData STELLA__SYMB_12  */
#line 1941 "Stella.y"
                                                                      {  (yyval.pattern_) = new Stella::PatternVariant((yyvsp[-2].string_), (yyvsp[-1].patterndata_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3527 "Parser.C"
    break;

  case 39: /* Pattern: STELLA__SYMB_47 STELLA__SYMB_2 Pattern STELLA__SYMB_3  */
#line 1942 "Stella.y"
                                                          {  (yyval.pattern_) = new Stella::PatternInl((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3533 "Parser.C"
    break;

  case 40: /* Pattern: STELLA__SYMB_49 STELLA__SYMB_2 Pattern STELLA__SYMB_3  */
#line 1943 "Stella.y"
                                                          {  (yyval.pattern_) = new Stella::PatternInr((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3539 "Parser.C"
    break;

  case 41: /* Pattern: STELLA__SYMB_4 ListPattern STELLA__SYMB_5  */
#line 1944 "Stella.y"
                                              {  std::reverse((yyvsp[-1].listpattern_)->begin(),(yyvsp[-1].listpattern_)->end()) ;(yyval.pattern_) = new Stella::PatternTuple((yyvsp[-1].listpattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3545 "Parser.C"
    break;

  case 42: /* Pattern: STELLA__SYMB_4 ListLabelledPattern STELLA__SYMB_5  */
#line 1945 "Stella.y"
                                                      {  std::reverse((yyvsp[-1].listlabelledpattern_)->begin(),(yyvsp[-1].listlabelledpattern_)->end()) ;(yyval.pattern_) = new Stella::PatternRecord((yyvsp[-1].listlabelledpattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3551 "Parser.C"
    break;

  case 43: /* Pattern: STELLA__SYMB_13 ListPattern STELLA__SYMB_14  */
#line 1946 "Stella.y"
                                                {  std::reverse((yyvsp[-1].listpattern_)->begin(),(yyvsp[-1].listpattern_)->end()) ;(yyval.pattern_) = new Stella::PatternList((yyvsp[-1].listpattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3557 "Parser.C"
    break;

  case 44: /* Pattern: STELLA__SYMB_2 Pattern STELLA__SYMB_0 Pattern STELLA__SYMB_3  */
#line 1947 "Stella.y"
                                                                 {  (yyval.pattern_) = new Stella::PatternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3563 "Parser.C"
    break;

  case 45: /* Pattern: STELLA__SYMB_41  */
#line 1948 "Stella.y"
                    {  (yyval.pattern_) = new Stella::PatternFalse(); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3569 "Parser.C"
    break;

  case 46: /* Pattern: STELLA__SYMB_60  */
#line 1949 "Stella.y"
                    {  (yyval.pattern_) = new Stella::PatternTrue(); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3575 "Parser.C"
    break;

  case 47: /* Pattern: STELLA__SYMB_63  */
#line 1950 "Stella.y"
                    {  (yyval.pattern_) = new Stella::PatternUnit(); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3581 "Parser.C"
    break;

  case 48: /* Pattern: _INTEGER_  */
#line 1951 "Stella.y"
              {  (yyval.pattern_) = new Stella::PatternInt((yyvsp[0].int_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3587 "Parser.C"
    break;

  case 49: /* Pattern: STELLA__SYMB_57 STELLA__SYMB_2 Pattern STELLA__SYMB_3  */
#line 1952 "Stella.y"
                                                          {  (yyval.pattern_) = new Stella::PatternSucc((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3593 "Parser.C"
    break;

  case 50: /* Pattern: STELLA__SYMB_66  */
#line 1953 "Stella.y"
                    {  (yyval.pattern_) = new Stella::PatternVar((yyvsp[0].string_)); (yyval.pattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3599 "Parser.C"
    break;

  case 51: /* Pattern: STELLA__SYMB_2 Pattern STELLA__SYMB_3  */
#line 1954 "Stella.y"
                                          {  (yyval.pattern_) = (yyvsp[-1].pattern_); Stella::YY_RESULT_Pattern_= (yyval.pattern_); }
#line 3605 "Parser.C"
    break;

  case 52: /* ListPattern: %empty  */
#line 1956 "Stella.y"
                          {  (yyval.listpattern_) = new Stella::ListPattern(); Stella::YY_RESULT_ListPattern_= (yyval.listpattern_); }
#line 3611 "Parser.C"
    break;

  case 53: /* ListPattern: Pattern  */
#line 1957 "Stella.y"
            {  (yyval.listpattern_) = new Stella::ListPattern() ; (yyval.listpattern_)->push_back((yyvsp[0].pattern_)); Stella::YY_RESULT_ListPattern_= (yyval.listpattern_); }
#line 3617 "Parser.C"
    break;

  case 54: /* ListPattern: Pattern STELLA__SYMB_0 ListPattern  */
#line 1958 "Stella.y"
                                       {  (yyvsp[0].listpattern_)->push_back((yyvsp[-2].pattern_)) ; (yyval.listpattern_) = (yyvsp[0].listpattern_) ; Stella::YY_RESULT_ListPattern_= (yyval.listpattern_); }
#line 3623 "Parser.C"
    break;

  case 55: /* LabelledPattern: STELLA__SYMB_66 STELLA__SYMB_6 Pattern  */
#line 1960 "Stella.y"
                                                         {  (yyval.labelledpattern_) = new Stella::ALabelledPattern((yyvsp[-2].string_), (yyvsp[0].pattern_)); (yyval.labelledpattern_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_LabelledPattern_= (yyval.labelledpattern_); }
#line 3629 "Parser.C"
    break;

  case 56: /* ListLabelledPattern: LabelledPattern  */
#line 1962 "Stella.y"
                                      {  (yyval.listlabelledpattern_) = new Stella::ListLabelledPattern() ; (yyval.listlabelledpattern_)->push_back((yyvsp[0].labelledpattern_)); Stella::YY_RESULT_ListLabelledPattern_= (yyval.listlabelledpattern_); }
#line 3635 "Parser.C"
    break;

  case 57: /* ListLabelledPattern: LabelledPattern STELLA__SYMB_0 ListLabelledPattern  */
#line 1963 "Stella.y"
                                                       {  (yyvsp[0].listlabelledpattern_)->push_back((yyvsp[-2].labelledpattern_)) ; (yyval.listlabelledpattern_) = (yyvsp[0].listlabelledpattern_) ; Stella::YY_RESULT_ListLabelledPattern_= (yyval.listlabelledpattern_); }
#line 3641 "Parser.C"
    break;

  case 58: /* Binding: STELLA__SYMB_66 STELLA__SYMB_6 Expr  */
#line 1965 "Stella.y"
                                              {  (yyval.binding_) = new Stella::ABinding((yyvsp[-2].string_), (yyvsp[0].expr_)); (yyval.binding_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Binding_= (yyval.binding_); }
#line 3647 "Parser.C"
    break;

  case 59: /* ListBinding: Binding  */
#line 1967 "Stella.y"
                      {  (yyval.listbinding_) = new Stella::ListBinding() ; (yyval.listbinding_)->push_back((yyvsp[0].binding_)); Stella::YY_RESULT_ListBinding_= (yyval.listbinding_); }
#line 3653 "Parser.C"
    break;

  case 60: /* ListBinding: Binding STELLA__SYMB_0 ListBinding  */
#line 1968 "Stella.y"
                                       {  (yyvsp[0].listbinding_)->push_back((yyvsp[-2].binding_)) ; (yyval.listbinding_) = (yyvsp[0].listbinding_) ; Stella::YY_RESULT_ListBinding_= (yyval.listbinding_); }
#line 3659 "Parser.C"
    break;

  case 61: /* Expr: Expr1 STELLA__SYMB_1 Expr  */
#line 1970 "Stella.y"
                                 {  (yyval.expr_) = new Stella::Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3665 "Parser.C"
    break;

  case 62: /* Expr: Expr1 STELLA__SYMB_1  */
#line 1971 "Stella.y"
                         {  (yyval.expr_) = (yyvsp[-1].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3671 "Parser.C"
    break;

  case 63: /* Expr: Expr1  */
#line 1972 "Stella.y"
          {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3677 "Parser.C"
    break;

  case 64: /* ListExpr: %empty  */
#line 1974 "Stella.y"
                       {  (yyval.listexpr_) = new Stella::ListExpr(); Stella::YY_RESULT_ListExpr_= (yyval.listexpr_); }
#line 3683 "Parser.C"
    break;

  case 65: /* ListExpr: Expr  */
#line 1975 "Stella.y"
         {  (yyval.listexpr_) = new Stella::ListExpr() ; (yyval.listexpr_)->push_back((yyvsp[0].expr_)); Stella::YY_RESULT_ListExpr_= (yyval.listexpr_); }
#line 3689 "Parser.C"
    break;

  case 66: /* ListExpr: Expr STELLA__SYMB_0 ListExpr  */
#line 1976 "Stella.y"
                                 {  (yyvsp[0].listexpr_)->push_back((yyvsp[-2].expr_)) ; (yyval.listexpr_) = (yyvsp[0].listexpr_) ; Stella::YY_RESULT_ListExpr_= (yyval.listexpr_); }
#line 3695 "Parser.C"
    break;

  case 67: /* Expr1: STELLA__SYMB_45 Expr1 STELLA__SYMB_58 Expr1 STELLA__SYMB_39 Expr1  */
#line 1978 "Stella.y"
                                                                          {  (yyval.expr_) = new Stella::If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3701 "Parser.C"
    break;

  case 68: /* Expr1: STELLA__SYMB_51 ListPatternBinding STELLA__SYMB_46 Expr1  */
#line 1979 "Stella.y"
                                                             {  std::reverse((yyvsp[-2].listpatternbinding_)->begin(),(yyvsp[-2].listpatternbinding_)->end()) ;(yyval.expr_) = new Stella::Let((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3707 "Parser.C"
    break;

  case 69: /* Expr1: STELLA__SYMB_52 ListPatternBinding STELLA__SYMB_46 Expr1  */
#line 1980 "Stella.y"
                                                             {  std::reverse((yyvsp[-2].listpatternbinding_)->begin(),(yyvsp[-2].listpatternbinding_)->end()) ;(yyval.expr_) = new Stella::LetRec((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3713 "Parser.C"
    break;

  case 70: /* Expr1: Expr2  */
#line 1981 "Stella.y"
          {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3719 "Parser.C"
    break;

  case 71: /* PatternBinding: Pattern STELLA__SYMB_6 Expr  */
#line 1983 "Stella.y"
                                             {  (yyval.patternbinding_) = new Stella::APatternBinding((yyvsp[-2].pattern_), (yyvsp[0].expr_)); (yyval.patternbinding_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_PatternBinding_= (yyval.patternbinding_); }
#line 3725 "Parser.C"
    break;

  case 72: /* ListPatternBinding: PatternBinding  */
#line 1985 "Stella.y"
                                    {  (yyval.listpatternbinding_) = new Stella::ListPatternBinding() ; (yyval.listpatternbinding_)->push_back((yyvsp[0].patternbinding_)); Stella::YY_RESULT_ListPatternBinding_= (yyval.listpatternbinding_); }
#line 3731 "Parser.C"
    break;

  case 73: /* ListPatternBinding: PatternBinding STELLA__SYMB_0 ListPatternBinding  */
#line 1986 "Stella.y"
                                                     {  (yyvsp[0].listpatternbinding_)->push_back((yyvsp[-2].patternbinding_)) ; (yyval.listpatternbinding_) = (yyvsp[0].listpatternbinding_) ; Stella::YY_RESULT_ListPatternBinding_= (yyval.listpatternbinding_); }
#line 3737 "Parser.C"
    break;

  case 74: /* Expr2: Expr3 STELLA__SYMB_15 Expr3  */
#line 1988 "Stella.y"
                                    {  (yyval.expr_) = new Stella::LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3743 "Parser.C"
    break;

  case 75: /* Expr2: Expr3 STELLA__SYMB_16 Expr3  */
#line 1989 "Stella.y"
                                {  (yyval.expr_) = new Stella::LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3749 "Parser.C"
    break;

  case 76: /* Expr2: Expr3 STELLA__SYMB_17 Expr3  */
#line 1990 "Stella.y"
                                {  (yyval.expr_) = new Stella::GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3755 "Parser.C"
    break;

  case 77: /* Expr2: Expr3 STELLA__SYMB_18 Expr3  */
#line 1991 "Stella.y"
                                {  (yyval.expr_) = new Stella::GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3761 "Parser.C"
    break;

  case 78: /* Expr2: Expr3 STELLA__SYMB_19 Expr3  */
#line 1992 "Stella.y"
                                {  (yyval.expr_) = new Stella::Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3767 "Parser.C"
    break;

  case 79: /* Expr2: Expr3 STELLA__SYMB_20 Expr3  */
#line 1993 "Stella.y"
                                {  (yyval.expr_) = new Stella::NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3773 "Parser.C"
    break;

  case 80: /* Expr2: Expr3  */
#line 1994 "Stella.y"
          {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3779 "Parser.C"
    break;

  case 81: /* Expr3: Expr3 STELLA__SYMB_36 Type2  */
#line 1999 "Stella.y"
                                    {  (yyval.expr_) = new Stella::TypeAsc((yyvsp[-2].expr_), (yyvsp[0].type_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3785 "Parser.C"
    break;

  case 82: /* Expr3: STELLA__SYMB_43 STELLA__SYMB_2 ListParamDecl STELLA__SYMB_3 STELLA__SYMB_4 STELLA__SYMB_56 Expr STELLA__SYMB_5  */
#line 2000 "Stella.y"
                                                                                                                   {  std::reverse((yyvsp[-5].listparamdecl_)->begin(),(yyvsp[-5].listparamdecl_)->end()) ;(yyval.expr_) = new Stella::Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3791 "Parser.C"
    break;

  case 83: /* Expr3: STELLA__SYMB_11 STELLA__SYMB_66 ExprData STELLA__SYMB_12  */
#line 2001 "Stella.y"
                                                             {  (yyval.expr_) = new Stella::Variant((yyvsp[-2].string_), (yyvsp[-1].exprdata_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3797 "Parser.C"
    break;

  case 84: /* Expr3: STELLA__SYMB_53 Expr2 STELLA__SYMB_4 ListMatchCase STELLA__SYMB_5  */
#line 2002 "Stella.y"
                                                                      {  std::reverse((yyvsp[-1].listmatchcase_)->begin(),(yyvsp[-1].listmatchcase_)->end()) ;(yyval.expr_) = new Stella::Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3803 "Parser.C"
    break;

  case 85: /* Expr3: STELLA__SYMB_13 ListExpr STELLA__SYMB_14  */
#line 2003 "Stella.y"
                                             {  std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Stella::List((yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3809 "Parser.C"
    break;

  case 86: /* Expr3: Expr3 STELLA__SYMB_21 Expr4  */
#line 2004 "Stella.y"
                                {  (yyval.expr_) = new Stella::Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3815 "Parser.C"
    break;

  case 87: /* Expr3: Expr3 STELLA__SYMB_22 Expr4  */
#line 2005 "Stella.y"
                                {  (yyval.expr_) = new Stella::Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3821 "Parser.C"
    break;

  case 88: /* Expr3: Expr3 STELLA__SYMB_55 Expr4  */
#line 2006 "Stella.y"
                                {  (yyval.expr_) = new Stella::LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3827 "Parser.C"
    break;

  case 89: /* Expr3: Expr4  */
#line 2007 "Stella.y"
          {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3833 "Parser.C"
    break;

  case 90: /* Expr4: Expr4 STELLA__SYMB_23 Expr5  */
#line 2009 "Stella.y"
                                    {  (yyval.expr_) = new Stella::Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3839 "Parser.C"
    break;

  case 91: /* Expr4: Expr4 STELLA__SYMB_24 Expr5  */
#line 2010 "Stella.y"
                                {  (yyval.expr_) = new Stella::Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3845 "Parser.C"
    break;

  case 92: /* Expr4: Expr4 STELLA__SYMB_35 Expr5  */
#line 2011 "Stella.y"
                                {  (yyval.expr_) = new Stella::LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3851 "Parser.C"
    break;

  case 93: /* Expr4: Expr5  */
#line 2012 "Stella.y"
          {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3857 "Parser.C"
    break;

  case 94: /* Expr6: Expr6 STELLA__SYMB_2 ListExpr STELLA__SYMB_3  */
#line 2014 "Stella.y"
                                                     {  std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Stella::Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3863 "Parser.C"
    break;

  case 95: /* Expr6: Expr6 STELLA__SYMB_25 STELLA__SYMB_66  */
#line 2015 "Stella.y"
                                          {  (yyval.expr_) = new Stella::DotRecord((yyvsp[-2].expr_), (yyvsp[0].string_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3869 "Parser.C"
    break;

  case 96: /* Expr6: Expr6 STELLA__SYMB_25 _INTEGER_  */
#line 2016 "Stella.y"
                                    {  (yyval.expr_) = new Stella::DotTuple((yyvsp[-2].expr_), (yyvsp[0].int_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3875 "Parser.C"
    break;

  case 97: /* Expr6: STELLA__SYMB_4 ListExpr STELLA__SYMB_5  */
#line 2017 "Stella.y"
                                           {  std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Stella::Tuple((yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3881 "Parser.C"
    break;

  case 98: /* Expr6: STELLA__SYMB_4 ListBinding STELLA__SYMB_5  */
#line 2018 "Stella.y"
                                              {  std::reverse((yyvsp[-1].listbinding_)->begin(),(yyvsp[-1].listbinding_)->end()) ;(yyval.expr_) = new Stella::Record((yyvsp[-1].listbinding_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3887 "Parser.C"
    break;

  case 99: /* Expr6: STELLA__SYMB_37 STELLA__SYMB_2 Expr STELLA__SYMB_0 Expr STELLA__SYMB_3  */
#line 2019 "Stella.y"
                                                                           {  (yyval.expr_) = new Stella::ConsList((yyvsp[-3].expr_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3893 "Parser.C"
    break;

  case 100: /* Expr6: STELLA__SYMB_26 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2020 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Head((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3899 "Parser.C"
    break;

  case 101: /* Expr6: STELLA__SYMB_27 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2021 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::IsEmpty((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3905 "Parser.C"
    break;

  case 102: /* Expr6: STELLA__SYMB_28 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2022 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Tail((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3911 "Parser.C"
    break;

  case 103: /* Expr6: STELLA__SYMB_47 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2023 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Inl((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3917 "Parser.C"
    break;

  case 104: /* Expr6: STELLA__SYMB_49 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2024 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Inr((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3923 "Parser.C"
    break;

  case 105: /* Expr6: STELLA__SYMB_57 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2025 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Succ((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3929 "Parser.C"
    break;

  case 106: /* Expr6: STELLA__SYMB_54 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2026 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::LogicNot((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3935 "Parser.C"
    break;

  case 107: /* Expr6: STELLA__SYMB_29 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2027 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Pred((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3941 "Parser.C"
    break;

  case 108: /* Expr6: STELLA__SYMB_30 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2028 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::IsZero((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3947 "Parser.C"
    break;

  case 109: /* Expr6: STELLA__SYMB_42 STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2029 "Stella.y"
                                                       {  (yyval.expr_) = new Stella::Fix((yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3953 "Parser.C"
    break;

  case 110: /* Expr6: STELLA__SYMB_31 STELLA__SYMB_2 Expr STELLA__SYMB_0 Expr STELLA__SYMB_0 Expr STELLA__SYMB_3  */
#line 2030 "Stella.y"
                                                                                               {  (yyval.expr_) = new Stella::NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3959 "Parser.C"
    break;

  case 111: /* Expr6: STELLA__SYMB_44 STELLA__SYMB_13 Type STELLA__SYMB_14 Expr7  */
#line 2031 "Stella.y"
                                                               {  (yyval.expr_) = new Stella::Fold((yyvsp[-2].type_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3965 "Parser.C"
    break;

  case 112: /* Expr6: STELLA__SYMB_62 STELLA__SYMB_13 Type STELLA__SYMB_14 Expr7  */
#line 2032 "Stella.y"
                                                               {  (yyval.expr_) = new Stella::Unfold((yyvsp[-2].type_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3971 "Parser.C"
    break;

  case 113: /* Expr6: Expr7  */
#line 2033 "Stella.y"
          {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3977 "Parser.C"
    break;

  case 114: /* Expr7: STELLA__SYMB_60  */
#line 2035 "Stella.y"
                        {  (yyval.expr_) = new Stella::ConstTrue(); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3983 "Parser.C"
    break;

  case 115: /* Expr7: STELLA__SYMB_41  */
#line 2036 "Stella.y"
                    {  (yyval.expr_) = new Stella::ConstFalse(); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3989 "Parser.C"
    break;

  case 116: /* Expr7: STELLA__SYMB_63  */
#line 2037 "Stella.y"
                    {  (yyval.expr_) = new Stella::ConstUnit(); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 3995 "Parser.C"
    break;

  case 117: /* Expr7: _INTEGER_  */
#line 2038 "Stella.y"
              {  (yyval.expr_) = new Stella::ConstInt((yyvsp[0].int_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 4001 "Parser.C"
    break;

  case 118: /* Expr7: STELLA__SYMB_66  */
#line 2039 "Stella.y"
                    {  (yyval.expr_) = new Stella::Var((yyvsp[0].string_)); (yyval.expr_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 4007 "Parser.C"
    break;

  case 119: /* Expr7: STELLA__SYMB_2 Expr STELLA__SYMB_3  */
#line 2040 "Stella.y"
                                       {  (yyval.expr_) = (yyvsp[-1].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 4013 "Parser.C"
    break;

  case 120: /* Type: STELLA__SYMB_43 STELLA__SYMB_2 ListType STELLA__SYMB_3 STELLA__SYMB_8 Type  */
#line 2042 "Stella.y"
                                                                                  {  std::reverse((yyvsp[-3].listtype_)->begin(),(yyvsp[-3].listtype_)->end()) ;(yyval.type_) = new Stella::TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4019 "Parser.C"
    break;

  case 121: /* Type: STELLA__SYMB_65 STELLA__SYMB_66 STELLA__SYMB_25 Type  */
#line 2043 "Stella.y"
                                                         {  (yyval.type_) = new Stella::TypeRec((yyvsp[-2].string_), (yyvsp[0].type_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4025 "Parser.C"
    break;

  case 122: /* Type: Type1  */
#line 2044 "Stella.y"
          {  (yyval.type_) = (yyvsp[0].type_); Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4031 "Parser.C"
    break;

  case 123: /* Type1: Type2 STELLA__SYMB_21 Type2  */
#line 2046 "Stella.y"
                                    {  (yyval.type_) = new Stella::TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4037 "Parser.C"
    break;

  case 124: /* Type1: Type2  */
#line 2047 "Stella.y"
          {  (yyval.type_) = (yyvsp[0].type_); Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4043 "Parser.C"
    break;

  case 125: /* Type2: STELLA__SYMB_4 ListType STELLA__SYMB_5  */
#line 2049 "Stella.y"
                                               {  std::reverse((yyvsp[-1].listtype_)->begin(),(yyvsp[-1].listtype_)->end()) ;(yyval.type_) = new Stella::TypeTuple((yyvsp[-1].listtype_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4049 "Parser.C"
    break;

  case 126: /* Type2: STELLA__SYMB_4 ListRecordFieldType STELLA__SYMB_5  */
#line 2050 "Stella.y"
                                                      {  std::reverse((yyvsp[-1].listrecordfieldtype_)->begin(),(yyvsp[-1].listrecordfieldtype_)->end()) ;(yyval.type_) = new Stella::TypeRecord((yyvsp[-1].listrecordfieldtype_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4055 "Parser.C"
    break;

  case 127: /* Type2: STELLA__SYMB_11 ListVariantFieldType STELLA__SYMB_12  */
#line 2051 "Stella.y"
                                                         {  std::reverse((yyvsp[-1].listvariantfieldtype_)->begin(),(yyvsp[-1].listvariantfieldtype_)->end()) ;(yyval.type_) = new Stella::TypeVariant((yyvsp[-1].listvariantfieldtype_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4061 "Parser.C"
    break;

  case 128: /* Type2: STELLA__SYMB_13 Type STELLA__SYMB_14  */
#line 2052 "Stella.y"
                                         {  (yyval.type_) = new Stella::TypeList((yyvsp[-1].type_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4067 "Parser.C"
    break;

  case 129: /* Type2: Type3  */
#line 2053 "Stella.y"
          {  (yyval.type_) = (yyvsp[0].type_); Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4073 "Parser.C"
    break;

  case 130: /* Type3: STELLA__SYMB_32  */
#line 2055 "Stella.y"
                        {  (yyval.type_) = new Stella::TypeBool(); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4079 "Parser.C"
    break;

  case 131: /* Type3: STELLA__SYMB_33  */
#line 2056 "Stella.y"
                    {  (yyval.type_) = new Stella::TypeNat(); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4085 "Parser.C"
    break;

  case 132: /* Type3: STELLA__SYMB_34  */
#line 2057 "Stella.y"
                    {  (yyval.type_) = new Stella::TypeUnit(); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4091 "Parser.C"
    break;

  case 133: /* Type3: STELLA__SYMB_66  */
#line 2058 "Stella.y"
                    {  (yyval.type_) = new Stella::TypeVar((yyvsp[0].string_)); (yyval.type_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4097 "Parser.C"
    break;

  case 134: /* Type3: STELLA__SYMB_2 Type STELLA__SYMB_3  */
#line 2059 "Stella.y"
                                       {  (yyval.type_) = (yyvsp[-1].type_); Stella::YY_RESULT_Type_= (yyval.type_); }
#line 4103 "Parser.C"
    break;

  case 135: /* ListType: %empty  */
#line 2061 "Stella.y"
                       {  (yyval.listtype_) = new Stella::ListType(); Stella::YY_RESULT_ListType_= (yyval.listtype_); }
#line 4109 "Parser.C"
    break;

  case 136: /* ListType: Type  */
#line 2062 "Stella.y"
         {  (yyval.listtype_) = new Stella::ListType() ; (yyval.listtype_)->push_back((yyvsp[0].type_)); Stella::YY_RESULT_ListType_= (yyval.listtype_); }
#line 4115 "Parser.C"
    break;

  case 137: /* ListType: Type STELLA__SYMB_0 ListType  */
#line 2063 "Stella.y"
                                 {  (yyvsp[0].listtype_)->push_back((yyvsp[-2].type_)) ; (yyval.listtype_) = (yyvsp[0].listtype_) ; Stella::YY_RESULT_ListType_= (yyval.listtype_); }
#line 4121 "Parser.C"
    break;

  case 138: /* Expr5: Expr6  */
#line 2065 "Stella.y"
              {  (yyval.expr_) = (yyvsp[0].expr_); Stella::YY_RESULT_Expr_= (yyval.expr_); }
#line 4127 "Parser.C"
    break;

  case 139: /* VariantFieldType: STELLA__SYMB_66 OptionalTyping  */
#line 2067 "Stella.y"
                                                  {  (yyval.variantfieldtype_) = new Stella::AVariantFieldType((yyvsp[-1].string_), (yyvsp[0].optionaltyping_)); (yyval.variantfieldtype_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_VariantFieldType_= (yyval.variantfieldtype_); }
#line 4133 "Parser.C"
    break;

  case 140: /* ListVariantFieldType: %empty  */
#line 2069 "Stella.y"
                                   {  (yyval.listvariantfieldtype_) = new Stella::ListVariantFieldType(); Stella::YY_RESULT_ListVariantFieldType_= (yyval.listvariantfieldtype_); }
#line 4139 "Parser.C"
    break;

  case 141: /* ListVariantFieldType: VariantFieldType  */
#line 2070 "Stella.y"
                     {  (yyval.listvariantfieldtype_) = new Stella::ListVariantFieldType() ; (yyval.listvariantfieldtype_)->push_back((yyvsp[0].variantfieldtype_)); Stella::YY_RESULT_ListVariantFieldType_= (yyval.listvariantfieldtype_); }
#line 4145 "Parser.C"
    break;

  case 142: /* ListVariantFieldType: VariantFieldType STELLA__SYMB_0 ListVariantFieldType  */
#line 2071 "Stella.y"
                                                         {  (yyvsp[0].listvariantfieldtype_)->push_back((yyvsp[-2].variantfieldtype_)) ; (yyval.listvariantfieldtype_) = (yyvsp[0].listvariantfieldtype_) ; Stella::YY_RESULT_ListVariantFieldType_= (yyval.listvariantfieldtype_); }
#line 4151 "Parser.C"
    break;

  case 143: /* RecordFieldType: STELLA__SYMB_66 STELLA__SYMB_7 Type  */
#line 2073 "Stella.y"
                                                      {  (yyval.recordfieldtype_) = new Stella::ARecordFieldType((yyvsp[-2].string_), (yyvsp[0].type_)); (yyval.recordfieldtype_)->line_number = Stellayy_mylinenumber; Stella::YY_RESULT_RecordFieldType_= (yyval.recordfieldtype_); }
#line 4157 "Parser.C"
    break;

  case 144: /* ListRecordFieldType: RecordFieldType  */
#line 2075 "Stella.y"
                                      {  (yyval.listrecordfieldtype_) = new Stella::ListRecordFieldType() ; (yyval.listrecordfieldtype_)->push_back((yyvsp[0].recordfieldtype_)); Stella::YY_RESULT_ListRecordFieldType_= (yyval.listrecordfieldtype_); }
#line 4163 "Parser.C"
    break;

  case 145: /* ListRecordFieldType: RecordFieldType STELLA__SYMB_0 ListRecordFieldType  */
#line 2076 "Stella.y"
                                                       {  (yyvsp[0].listrecordfieldtype_)->push_back((yyvsp[-2].recordfieldtype_)) ; (yyval.listrecordfieldtype_) = (yyvsp[0].listrecordfieldtype_) ; Stella::YY_RESULT_ListRecordFieldType_= (yyval.listrecordfieldtype_); }
#line 4169 "Parser.C"
    break;


#line 4173 "Parser.C"

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
  yytoken = yychar == STELLAYYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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

      if (yychar <= STELLAYYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == STELLAYYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = STELLAYYEMPTY;
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
  if (yychar != STELLAYYEMPTY)
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

