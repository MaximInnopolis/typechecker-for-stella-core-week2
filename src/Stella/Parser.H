#ifndef STELLA_PARSER_HEADER_FILE
#define STELLA_PARSER_HEADER_FILE

#include<vector>
#include<string>

namespace Stella
{
class Program;
class ListStellaIdent;
class LanguageDecl;
class Extension;
class ListExtensionName;
class ListExtension;
class Decl;
class ListDecl;
class LocalDecl;
class ListLocalDecl;
class Annotation;
class ListAnnotation;
class ParamDecl;
class ListParamDecl;
class ReturnType;
class ThrowType;
class Type;
class ListType;
class MatchCase;
class ListMatchCase;
class OptionalTyping;
class PatternData;
class ExprData;
class Pattern;
class ListPattern;
class LabelledPattern;
class ListLabelledPattern;
class Binding;
class ListBinding;
class Expr;
class ListExpr;
class PatternBinding;
class ListPatternBinding;
class VariantFieldType;
class ListVariantFieldType;
class RecordFieldType;
class ListRecordFieldType;
class Typing;

typedef union
{
  int int_;
  char char_;
  double double_;
  char* string_;
  Program* program_;
  ListStellaIdent* liststellaident_;
  LanguageDecl* languagedecl_;
  Extension* extension_;
  ListExtensionName* listextensionname_;
  ListExtension* listextension_;
  Decl* decl_;
  ListDecl* listdecl_;
  LocalDecl* localdecl_;
  ListLocalDecl* listlocaldecl_;
  Annotation* annotation_;
  ListAnnotation* listannotation_;
  ParamDecl* paramdecl_;
  ListParamDecl* listparamdecl_;
  ReturnType* returntype_;
  ThrowType* throwtype_;
  MatchCase* matchcase_;
  ListMatchCase* listmatchcase_;
  OptionalTyping* optionaltyping_;
  PatternData* patterndata_;
  ExprData* exprdata_;
  Pattern* pattern_;
  ListPattern* listpattern_;
  LabelledPattern* labelledpattern_;
  ListLabelledPattern* listlabelledpattern_;
  Binding* binding_;
  ListBinding* listbinding_;
  Expr* expr_;
  ListExpr* listexpr_;
  PatternBinding* patternbinding_;
  ListPatternBinding* listpatternbinding_;
  Type* type_;
  ListType* listtype_;
  VariantFieldType* variantfieldtype_;
  ListVariantFieldType* listvariantfieldtype_;
  RecordFieldType* recordfieldtype_;
  ListRecordFieldType* listrecordfieldtype_;
  Typing* typing_;
} YYSTYPE;

Program* pProgram(FILE *inp);
Program* pProgram(const char *str);
ListStellaIdent* pListStellaIdent(FILE *inp);
ListStellaIdent* pListStellaIdent(const char *str);
LanguageDecl* pLanguageDecl(FILE *inp);
LanguageDecl* pLanguageDecl(const char *str);
Extension* pExtension(FILE *inp);
Extension* pExtension(const char *str);
ListExtensionName* pListExtensionName(FILE *inp);
ListExtensionName* pListExtensionName(const char *str);
ListExtension* pListExtension(FILE *inp);
ListExtension* pListExtension(const char *str);
Decl* pDecl(FILE *inp);
Decl* pDecl(const char *str);
ListDecl* pListDecl(FILE *inp);
ListDecl* pListDecl(const char *str);
LocalDecl* pLocalDecl(FILE *inp);
LocalDecl* pLocalDecl(const char *str);
ListLocalDecl* pListLocalDecl(FILE *inp);
ListLocalDecl* pListLocalDecl(const char *str);
Annotation* pAnnotation(FILE *inp);
Annotation* pAnnotation(const char *str);
ListAnnotation* pListAnnotation(FILE *inp);
ListAnnotation* pListAnnotation(const char *str);
ParamDecl* pParamDecl(FILE *inp);
ParamDecl* pParamDecl(const char *str);
ListParamDecl* pListParamDecl(FILE *inp);
ListParamDecl* pListParamDecl(const char *str);
ReturnType* pReturnType(FILE *inp);
ReturnType* pReturnType(const char *str);
ThrowType* pThrowType(FILE *inp);
ThrowType* pThrowType(const char *str);
Type* pType9(FILE *inp);
Type* pType9(const char *str);
ListType* pListType9(FILE *inp);
ListType* pListType9(const char *str);
MatchCase* pMatchCase(FILE *inp);
MatchCase* pMatchCase(const char *str);
ListMatchCase* pListMatchCase(FILE *inp);
ListMatchCase* pListMatchCase(const char *str);
OptionalTyping* pOptionalTyping(FILE *inp);
OptionalTyping* pOptionalTyping(const char *str);
PatternData* pPatternData(FILE *inp);
PatternData* pPatternData(const char *str);
ExprData* pExprData(FILE *inp);
ExprData* pExprData(const char *str);
Pattern* pPattern(FILE *inp);
Pattern* pPattern(const char *str);
ListPattern* pListPattern(FILE *inp);
ListPattern* pListPattern(const char *str);
LabelledPattern* pLabelledPattern(FILE *inp);
LabelledPattern* pLabelledPattern(const char *str);
ListLabelledPattern* pListLabelledPattern(FILE *inp);
ListLabelledPattern* pListLabelledPattern(const char *str);
Binding* pBinding(FILE *inp);
Binding* pBinding(const char *str);
ListBinding* pListBinding(FILE *inp);
ListBinding* pListBinding(const char *str);
Expr* pExpr(FILE *inp);
Expr* pExpr(const char *str);
ListExpr* pListExpr(FILE *inp);
ListExpr* pListExpr(const char *str);
Expr* pExpr1(FILE *inp);
Expr* pExpr1(const char *str);
PatternBinding* pPatternBinding(FILE *inp);
PatternBinding* pPatternBinding(const char *str);
ListPatternBinding* pListPatternBinding(FILE *inp);
ListPatternBinding* pListPatternBinding(const char *str);
Expr* pExpr2(FILE *inp);
Expr* pExpr2(const char *str);
ListExpr* pListExpr2(FILE *inp);
ListExpr* pListExpr2(const char *str);
Expr* pExpr3(FILE *inp);
Expr* pExpr3(const char *str);
Expr* pExpr4(FILE *inp);
Expr* pExpr4(const char *str);
Expr* pExpr6(FILE *inp);
Expr* pExpr6(const char *str);
Expr* pExpr7(FILE *inp);
Expr* pExpr7(const char *str);
Type* pType(FILE *inp);
Type* pType(const char *str);
Type* pType1(FILE *inp);
Type* pType1(const char *str);
Type* pType2(FILE *inp);
Type* pType2(const char *str);
Type* pType3(FILE *inp);
Type* pType3(const char *str);
ListType* pListType(FILE *inp);
ListType* pListType(const char *str);
Expr* pExpr5(FILE *inp);
Expr* pExpr5(const char *str);
VariantFieldType* pVariantFieldType(FILE *inp);
VariantFieldType* pVariantFieldType(const char *str);
ListVariantFieldType* pListVariantFieldType(FILE *inp);
ListVariantFieldType* pListVariantFieldType(const char *str);
RecordFieldType* pRecordFieldType(FILE *inp);
RecordFieldType* pRecordFieldType(const char *str);
ListRecordFieldType* pListRecordFieldType(FILE *inp);
ListRecordFieldType* pListRecordFieldType(const char *str);
Typing* pTyping(FILE *inp);
Typing* pTyping(const char *str);

}

#define STELLA__ERROR_ 258
#define STELLA__SYMB_0 259
#define STELLA__SYMB_1 260
#define STELLA__SYMB_2 261
#define STELLA__SYMB_3 262
#define STELLA__SYMB_4 263
#define STELLA__SYMB_5 264
#define STELLA__SYMB_6 265
#define STELLA__SYMB_7 266
#define STELLA__SYMB_8 267
#define STELLA__SYMB_9 268
#define STELLA__SYMB_10 269
#define STELLA__SYMB_11 270
#define STELLA__SYMB_12 271
#define STELLA__SYMB_13 272
#define STELLA__SYMB_14 273
#define STELLA__SYMB_15 274
#define STELLA__SYMB_16 275
#define STELLA__SYMB_17 276
#define STELLA__SYMB_18 277
#define STELLA__SYMB_19 278
#define STELLA__SYMB_20 279
#define STELLA__SYMB_21 280
#define STELLA__SYMB_22 281
#define STELLA__SYMB_23 282
#define STELLA__SYMB_24 283
#define STELLA__SYMB_25 284
#define STELLA__SYMB_26 285
#define STELLA__SYMB_27 286
#define STELLA__SYMB_28 287
#define STELLA__SYMB_29 288
#define STELLA__SYMB_30 289
#define STELLA__SYMB_31 290
#define STELLA__SYMB_32 291
#define STELLA__SYMB_33 292
#define STELLA__SYMB_34 293
#define STELLA__SYMB_35 294
#define STELLA__SYMB_36 295
#define STELLA__SYMB_37 296
#define STELLA__SYMB_38 297
#define STELLA__SYMB_39 298
#define STELLA__SYMB_40 299
#define STELLA__SYMB_41 300
#define STELLA__SYMB_42 301
#define STELLA__SYMB_43 302
#define STELLA__SYMB_44 303
#define STELLA__SYMB_45 304
#define STELLA__SYMB_46 305
#define STELLA__SYMB_47 306
#define STELLA__SYMB_48 307
#define STELLA__SYMB_49 308
#define STELLA__SYMB_50 309
#define STELLA__SYMB_51 310
#define STELLA__SYMB_52 311
#define STELLA__SYMB_53 312
#define STELLA__SYMB_54 313
#define STELLA__SYMB_55 314
#define STELLA__SYMB_56 315
#define STELLA__SYMB_57 316
#define STELLA__SYMB_58 317
#define STELLA__SYMB_59 318
#define STELLA__SYMB_60 319
#define STELLA__SYMB_61 320
#define STELLA__SYMB_62 321
#define STELLA__SYMB_63 322
#define STELLA__SYMB_64 323
#define STELLA__SYMB_65 324
#define STELLA__SYMB_66 325
#define STELLA__SYMB_67 326
#define STELLA__INTEGER_ 327

extern Stella::YYSTYPE Stellayylval;

#endif
