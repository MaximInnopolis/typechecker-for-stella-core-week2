/* File generated by the BNF Converter (bnfc 2.9.4.1). */

#ifndef STELLA_PRINTER_HEADER
#define STELLA_PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

namespace Stella
{
/* Certain applications may improve performance by changing the buffer size */
#define STELLA_BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define STELLA__L_PAREN '('
#define STELLA__R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
  void onEmptyLine(void);
  void removeTrailingSpaces(void);
  void removeTrailingWhitespace(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitProgram(Program *p); /* abstract class */
  void visitAProgram(AProgram *p);
  void visitListStellaIdent(ListStellaIdent *p);
  void iterListStellaIdent(ListStellaIdent::const_iterator i, ListStellaIdent::const_iterator j);
  void visitLanguageDecl(LanguageDecl *p); /* abstract class */
  void visitLanguageCore(LanguageCore *p);
  void visitExtension(Extension *p); /* abstract class */
  void visitAnExtension(AnExtension *p);
  void visitListExtensionName(ListExtensionName *p);
  void iterListExtensionName(ListExtensionName::const_iterator i, ListExtensionName::const_iterator j);
  void visitListExtension(ListExtension *p);
  void iterListExtension(ListExtension::const_iterator i, ListExtension::const_iterator j);
  void visitDecl(Decl *p); /* abstract class */
  void visitDeclFun(DeclFun *p);
  void visitDeclTypeAlias(DeclTypeAlias *p);
  void visitListDecl(ListDecl *p);
  void iterListDecl(ListDecl::const_iterator i, ListDecl::const_iterator j);
  void visitLocalDecl(LocalDecl *p); /* abstract class */
  void visitALocalDecl(ALocalDecl *p);
  void visitListLocalDecl(ListLocalDecl *p);
  void iterListLocalDecl(ListLocalDecl::const_iterator i, ListLocalDecl::const_iterator j);
  void visitAnnotation(Annotation *p); /* abstract class */
  void visitInlineAnnotation(InlineAnnotation *p);
  void visitListAnnotation(ListAnnotation *p);
  void iterListAnnotation(ListAnnotation::const_iterator i, ListAnnotation::const_iterator j);
  void visitParamDecl(ParamDecl *p); /* abstract class */
  void visitAParamDecl(AParamDecl *p);
  void visitListParamDecl(ListParamDecl *p);
  void iterListParamDecl(ListParamDecl::const_iterator i, ListParamDecl::const_iterator j);
  void visitReturnType(ReturnType *p); /* abstract class */
  void visitNoReturnType(NoReturnType *p);
  void visitSomeReturnType(SomeReturnType *p);
  void visitThrowType(ThrowType *p); /* abstract class */
  void visitNoThrowType(NoThrowType *p);
  void visitSomeThrowType(SomeThrowType *p);
  void visitType(Type *p); /* abstract class */
  void visitTypeFun(TypeFun *p);
  void visitTypeRec(TypeRec *p);
  void visitTypeSum(TypeSum *p);
  void visitTypeTuple(TypeTuple *p);
  void visitTypeRecord(TypeRecord *p);
  void visitTypeVariant(TypeVariant *p);
  void visitTypeList(TypeList *p);
  void visitTypeBool(TypeBool *p);
  void visitTypeNat(TypeNat *p);
  void visitTypeUnit(TypeUnit *p);
  void visitTypeVar(TypeVar *p);
  void visitListType(ListType *p);
  void iterListType(ListType::const_iterator i, ListType::const_iterator j);
  void visitMatchCase(MatchCase *p); /* abstract class */
  void visitAMatchCase(AMatchCase *p);
  void visitListMatchCase(ListMatchCase *p);
  void iterListMatchCase(ListMatchCase::const_iterator i, ListMatchCase::const_iterator j);
  void visitOptionalTyping(OptionalTyping *p); /* abstract class */
  void visitNoTyping(NoTyping *p);
  void visitSomeTyping(SomeTyping *p);
  void visitPatternData(PatternData *p); /* abstract class */
  void visitNoPatternData(NoPatternData *p);
  void visitSomePatternData(SomePatternData *p);
  void visitExprData(ExprData *p); /* abstract class */
  void visitNoExprData(NoExprData *p);
  void visitSomeExprData(SomeExprData *p);
  void visitPattern(Pattern *p); /* abstract class */
  void visitPatternVariant(PatternVariant *p);
  void visitPatternInl(PatternInl *p);
  void visitPatternInr(PatternInr *p);
  void visitPatternTuple(PatternTuple *p);
  void visitPatternRecord(PatternRecord *p);
  void visitPatternList(PatternList *p);
  void visitPatternCons(PatternCons *p);
  void visitPatternFalse(PatternFalse *p);
  void visitPatternTrue(PatternTrue *p);
  void visitPatternUnit(PatternUnit *p);
  void visitPatternInt(PatternInt *p);
  void visitPatternSucc(PatternSucc *p);
  void visitPatternVar(PatternVar *p);
  void visitListPattern(ListPattern *p);
  void iterListPattern(ListPattern::const_iterator i, ListPattern::const_iterator j);
  void visitLabelledPattern(LabelledPattern *p); /* abstract class */
  void visitALabelledPattern(ALabelledPattern *p);
  void visitListLabelledPattern(ListLabelledPattern *p);
  void iterListLabelledPattern(ListLabelledPattern::const_iterator i, ListLabelledPattern::const_iterator j);
  void visitBinding(Binding *p); /* abstract class */
  void visitABinding(ABinding *p);
  void visitListBinding(ListBinding *p);
  void iterListBinding(ListBinding::const_iterator i, ListBinding::const_iterator j);
  void visitExpr(Expr *p); /* abstract class */
  void visitSequence(Sequence *p);
  void visitIf(If *p);
  void visitLet(Let *p);
  void visitLetRec(LetRec *p);
  void visitLessThan(LessThan *p);
  void visitLessThanOrEqual(LessThanOrEqual *p);
  void visitGreaterThan(GreaterThan *p);
  void visitGreaterThanOrEqual(GreaterThanOrEqual *p);
  void visitEqual(Equal *p);
  void visitNotEqual(NotEqual *p);
  void visitTypeAsc(TypeAsc *p);
  void visitAbstraction(Abstraction *p);
  void visitVariant(Variant *p);
  void visitMatch(Match *p);
  void visitList(List *p);
  void visitAdd(Add *p);
  void visitSubtract(Subtract *p);
  void visitLogicOr(LogicOr *p);
  void visitMultiply(Multiply *p);
  void visitDivide(Divide *p);
  void visitLogicAnd(LogicAnd *p);
  void visitApplication(Application *p);
  void visitDotRecord(DotRecord *p);
  void visitDotTuple(DotTuple *p);
  void visitTuple(Tuple *p);
  void visitRecord(Record *p);
  void visitConsList(ConsList *p);
  void visitHead(Head *p);
  void visitIsEmpty(IsEmpty *p);
  void visitTail(Tail *p);
  void visitInl(Inl *p);
  void visitInr(Inr *p);
  void visitSucc(Succ *p);
  void visitLogicNot(LogicNot *p);
  void visitPred(Pred *p);
  void visitIsZero(IsZero *p);
  void visitFix(Fix *p);
  void visitNatRec(NatRec *p);
  void visitFold(Fold *p);
  void visitUnfold(Unfold *p);
  void visitConstTrue(ConstTrue *p);
  void visitConstFalse(ConstFalse *p);
  void visitConstUnit(ConstUnit *p);
  void visitConstInt(ConstInt *p);
  void visitVar(Var *p);
  void visitListExpr(ListExpr *p);
  void iterListExpr(ListExpr::const_iterator i, ListExpr::const_iterator j);
  void visitPatternBinding(PatternBinding *p); /* abstract class */
  void visitAPatternBinding(APatternBinding *p);
  void visitListPatternBinding(ListPatternBinding *p);
  void iterListPatternBinding(ListPatternBinding::const_iterator i, ListPatternBinding::const_iterator j);
  void visitVariantFieldType(VariantFieldType *p); /* abstract class */
  void visitAVariantFieldType(AVariantFieldType *p);
  void visitListVariantFieldType(ListVariantFieldType *p);
  void iterListVariantFieldType(ListVariantFieldType::const_iterator i, ListVariantFieldType::const_iterator j);
  void visitRecordFieldType(RecordFieldType *p); /* abstract class */
  void visitARecordFieldType(ARecordFieldType *p);
  void visitListRecordFieldType(ListRecordFieldType *p);
  void iterListRecordFieldType(ListRecordFieldType::const_iterator i, ListRecordFieldType::const_iterator j);
  void visitTyping(Typing *p); /* abstract class */
  void visitATyping(ATyping *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
  void visitStellaIdent(String s);
  void visitExtensionName(String s);
 protected:
  char *buf_;
  size_t cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    size_t end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) delete[] buf_;
    buf_size = STELLA_BUFFER_INITIAL;
    buf_ = new char[buf_size];
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = new char[buf_size];
    if (buf_)
    {
      strcpy(temp, buf_);
      delete[] buf_;
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitProgram(Program *p); /* abstract class */
  void visitAProgram(AProgram *p);
  void visitListStellaIdent(ListStellaIdent *p);
  void iterListStellaIdent(ListStellaIdent::const_iterator i, ListStellaIdent::const_iterator j);
  void visitLanguageDecl(LanguageDecl *p); /* abstract class */
  void visitLanguageCore(LanguageCore *p);
  void visitExtension(Extension *p); /* abstract class */
  void visitAnExtension(AnExtension *p);
  void visitListExtensionName(ListExtensionName *p);
  void iterListExtensionName(ListExtensionName::const_iterator i, ListExtensionName::const_iterator j);
  void visitListExtension(ListExtension *p);
  void iterListExtension(ListExtension::const_iterator i, ListExtension::const_iterator j);
  void visitDecl(Decl *p); /* abstract class */
  void visitDeclFun(DeclFun *p);
  void visitDeclTypeAlias(DeclTypeAlias *p);
  void visitListDecl(ListDecl *p);
  void iterListDecl(ListDecl::const_iterator i, ListDecl::const_iterator j);
  void visitLocalDecl(LocalDecl *p); /* abstract class */
  void visitALocalDecl(ALocalDecl *p);
  void visitListLocalDecl(ListLocalDecl *p);
  void iterListLocalDecl(ListLocalDecl::const_iterator i, ListLocalDecl::const_iterator j);
  void visitAnnotation(Annotation *p); /* abstract class */
  void visitInlineAnnotation(InlineAnnotation *p);
  void visitListAnnotation(ListAnnotation *p);
  void iterListAnnotation(ListAnnotation::const_iterator i, ListAnnotation::const_iterator j);
  void visitParamDecl(ParamDecl *p); /* abstract class */
  void visitAParamDecl(AParamDecl *p);
  void visitListParamDecl(ListParamDecl *p);
  void iterListParamDecl(ListParamDecl::const_iterator i, ListParamDecl::const_iterator j);
  void visitReturnType(ReturnType *p); /* abstract class */
  void visitNoReturnType(NoReturnType *p);
  void visitSomeReturnType(SomeReturnType *p);
  void visitThrowType(ThrowType *p); /* abstract class */
  void visitNoThrowType(NoThrowType *p);
  void visitSomeThrowType(SomeThrowType *p);
  void visitType(Type *p); /* abstract class */
  void visitTypeFun(TypeFun *p);
  void visitTypeRec(TypeRec *p);
  void visitTypeSum(TypeSum *p);
  void visitTypeTuple(TypeTuple *p);
  void visitTypeRecord(TypeRecord *p);
  void visitTypeVariant(TypeVariant *p);
  void visitTypeList(TypeList *p);
  void visitTypeBool(TypeBool *p);
  void visitTypeNat(TypeNat *p);
  void visitTypeUnit(TypeUnit *p);
  void visitTypeVar(TypeVar *p);
  void visitListType(ListType *p);
  void iterListType(ListType::const_iterator i, ListType::const_iterator j);
  void visitMatchCase(MatchCase *p); /* abstract class */
  void visitAMatchCase(AMatchCase *p);
  void visitListMatchCase(ListMatchCase *p);
  void iterListMatchCase(ListMatchCase::const_iterator i, ListMatchCase::const_iterator j);
  void visitOptionalTyping(OptionalTyping *p); /* abstract class */
  void visitNoTyping(NoTyping *p);
  void visitSomeTyping(SomeTyping *p);
  void visitPatternData(PatternData *p); /* abstract class */
  void visitNoPatternData(NoPatternData *p);
  void visitSomePatternData(SomePatternData *p);
  void visitExprData(ExprData *p); /* abstract class */
  void visitNoExprData(NoExprData *p);
  void visitSomeExprData(SomeExprData *p);
  void visitPattern(Pattern *p); /* abstract class */
  void visitPatternVariant(PatternVariant *p);
  void visitPatternInl(PatternInl *p);
  void visitPatternInr(PatternInr *p);
  void visitPatternTuple(PatternTuple *p);
  void visitPatternRecord(PatternRecord *p);
  void visitPatternList(PatternList *p);
  void visitPatternCons(PatternCons *p);
  void visitPatternFalse(PatternFalse *p);
  void visitPatternTrue(PatternTrue *p);
  void visitPatternUnit(PatternUnit *p);
  void visitPatternInt(PatternInt *p);
  void visitPatternSucc(PatternSucc *p);
  void visitPatternVar(PatternVar *p);
  void visitListPattern(ListPattern *p);
  void iterListPattern(ListPattern::const_iterator i, ListPattern::const_iterator j);
  void visitLabelledPattern(LabelledPattern *p); /* abstract class */
  void visitALabelledPattern(ALabelledPattern *p);
  void visitListLabelledPattern(ListLabelledPattern *p);
  void iterListLabelledPattern(ListLabelledPattern::const_iterator i, ListLabelledPattern::const_iterator j);
  void visitBinding(Binding *p); /* abstract class */
  void visitABinding(ABinding *p);
  void visitListBinding(ListBinding *p);
  void iterListBinding(ListBinding::const_iterator i, ListBinding::const_iterator j);
  void visitExpr(Expr *p); /* abstract class */
  void visitSequence(Sequence *p);
  void visitIf(If *p);
  void visitLet(Let *p);
  void visitLetRec(LetRec *p);
  void visitLessThan(LessThan *p);
  void visitLessThanOrEqual(LessThanOrEqual *p);
  void visitGreaterThan(GreaterThan *p);
  void visitGreaterThanOrEqual(GreaterThanOrEqual *p);
  void visitEqual(Equal *p);
  void visitNotEqual(NotEqual *p);
  void visitTypeAsc(TypeAsc *p);
  void visitAbstraction(Abstraction *p);
  void visitVariant(Variant *p);
  void visitMatch(Match *p);
  void visitList(List *p);
  void visitAdd(Add *p);
  void visitSubtract(Subtract *p);
  void visitLogicOr(LogicOr *p);
  void visitMultiply(Multiply *p);
  void visitDivide(Divide *p);
  void visitLogicAnd(LogicAnd *p);
  void visitApplication(Application *p);
  void visitDotRecord(DotRecord *p);
  void visitDotTuple(DotTuple *p);
  void visitTuple(Tuple *p);
  void visitRecord(Record *p);
  void visitConsList(ConsList *p);
  void visitHead(Head *p);
  void visitIsEmpty(IsEmpty *p);
  void visitTail(Tail *p);
  void visitInl(Inl *p);
  void visitInr(Inr *p);
  void visitSucc(Succ *p);
  void visitLogicNot(LogicNot *p);
  void visitPred(Pred *p);
  void visitIsZero(IsZero *p);
  void visitFix(Fix *p);
  void visitNatRec(NatRec *p);
  void visitFold(Fold *p);
  void visitUnfold(Unfold *p);
  void visitConstTrue(ConstTrue *p);
  void visitConstFalse(ConstFalse *p);
  void visitConstUnit(ConstUnit *p);
  void visitConstInt(ConstInt *p);
  void visitVar(Var *p);
  void visitListExpr(ListExpr *p);
  void iterListExpr(ListExpr::const_iterator i, ListExpr::const_iterator j);
  void visitPatternBinding(PatternBinding *p); /* abstract class */
  void visitAPatternBinding(APatternBinding *p);
  void visitListPatternBinding(ListPatternBinding *p);
  void iterListPatternBinding(ListPatternBinding::const_iterator i, ListPatternBinding::const_iterator j);
  void visitVariantFieldType(VariantFieldType *p); /* abstract class */
  void visitAVariantFieldType(AVariantFieldType *p);
  void visitListVariantFieldType(ListVariantFieldType *p);
  void iterListVariantFieldType(ListVariantFieldType::const_iterator i, ListVariantFieldType::const_iterator j);
  void visitRecordFieldType(RecordFieldType *p); /* abstract class */
  void visitARecordFieldType(ARecordFieldType *p);
  void visitListRecordFieldType(ListRecordFieldType *p);
  void iterListRecordFieldType(ListRecordFieldType::const_iterator i, ListRecordFieldType::const_iterator j);
  void visitTyping(Typing *p); /* abstract class */
  void visitATyping(ATyping *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
  void visitStellaIdent(String s);
  void visitExtensionName(String s);
 protected:
  char *buf_;
  size_t cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    size_t end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) delete[] buf_;
    buf_size = STELLA_BUFFER_INITIAL;
    buf_ = new char[buf_size];
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = new char[buf_size];
    if (buf_)
    {
      strcpy(temp, buf_);
      delete[] buf_;
    }
    buf_ = temp;
  }
};


}

#endif
