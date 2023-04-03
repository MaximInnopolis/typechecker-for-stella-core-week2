#ifndef STELLA_PRINTER_HEADER
#define STELLA_PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
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
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitProgram(Program *p); /* abstract class */
  void visitAProgram(AProgram *p);
  void visitListStellaIdent(ListStellaIdent *p);
  void visitLanguageDecl(LanguageDecl *p); /* abstract class */
  void visitLanguageCore(LanguageCore *p);
  void visitExtension(Extension *p); /* abstract class */
  void visitAnExtension(AnExtension *p);
  void visitListExtensionName(ListExtensionName *p);
  void visitListExtension(ListExtension *p);
  void visitDecl(Decl *p); /* abstract class */
  void visitDeclFun(DeclFun *p);
  void visitDeclTypeAlias(DeclTypeAlias *p);
  void visitListDecl(ListDecl *p);
  void visitLocalDecl(LocalDecl *p); /* abstract class */
  void visitALocalDecl(ALocalDecl *p);
  void visitListLocalDecl(ListLocalDecl *p);
  void visitAnnotation(Annotation *p); /* abstract class */
  void visitInlineAnnotation(InlineAnnotation *p);
  void visitListAnnotation(ListAnnotation *p);
  void visitParamDecl(ParamDecl *p); /* abstract class */
  void visitAParamDecl(AParamDecl *p);
  void visitListParamDecl(ListParamDecl *p);
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
  void visitMatchCase(MatchCase *p); /* abstract class */
  void visitAMatchCase(AMatchCase *p);
  void visitListMatchCase(ListMatchCase *p);
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
  void visitLabelledPattern(LabelledPattern *p); /* abstract class */
  void visitALabelledPattern(ALabelledPattern *p);
  void visitListLabelledPattern(ListLabelledPattern *p);
  void visitBinding(Binding *p); /* abstract class */
  void visitABinding(ABinding *p);
  void visitListBinding(ListBinding *p);
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
  void visitPatternBinding(PatternBinding *p); /* abstract class */
  void visitAPatternBinding(APatternBinding *p);
  void visitListPatternBinding(ListPatternBinding *p);
  void visitVariantFieldType(VariantFieldType *p); /* abstract class */
  void visitAVariantFieldType(AVariantFieldType *p);
  void visitListVariantFieldType(ListVariantFieldType *p);
  void visitRecordFieldType(RecordFieldType *p); /* abstract class */
  void visitARecordFieldType(ARecordFieldType *p);
  void visitListRecordFieldType(ListRecordFieldType *p);
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
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int len = strlen(s);
    while (cur_ + len >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
    }
    resizeBuffer();
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = STELLA_BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
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
  void visitLanguageDecl(LanguageDecl *p); /* abstract class */
  void visitLanguageCore(LanguageCore *p);
  void visitExtension(Extension *p); /* abstract class */
  void visitAnExtension(AnExtension *p);
  void visitListExtensionName(ListExtensionName *p);
  void visitListExtension(ListExtension *p);
  void visitDecl(Decl *p); /* abstract class */
  void visitDeclFun(DeclFun *p);
  void visitDeclTypeAlias(DeclTypeAlias *p);
  void visitListDecl(ListDecl *p);
  void visitLocalDecl(LocalDecl *p); /* abstract class */
  void visitALocalDecl(ALocalDecl *p);
  void visitListLocalDecl(ListLocalDecl *p);
  void visitAnnotation(Annotation *p); /* abstract class */
  void visitInlineAnnotation(InlineAnnotation *p);
  void visitListAnnotation(ListAnnotation *p);
  void visitParamDecl(ParamDecl *p); /* abstract class */
  void visitAParamDecl(AParamDecl *p);
  void visitListParamDecl(ListParamDecl *p);
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
  void visitMatchCase(MatchCase *p); /* abstract class */
  void visitAMatchCase(AMatchCase *p);
  void visitListMatchCase(ListMatchCase *p);
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
  void visitLabelledPattern(LabelledPattern *p); /* abstract class */
  void visitALabelledPattern(ALabelledPattern *p);
  void visitListLabelledPattern(ListLabelledPattern *p);
  void visitBinding(Binding *p); /* abstract class */
  void visitABinding(ABinding *p);
  void visitListBinding(ListBinding *p);
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
  void visitPatternBinding(PatternBinding *p); /* abstract class */
  void visitAPatternBinding(APatternBinding *p);
  void visitListPatternBinding(ListPatternBinding *p);
  void visitVariantFieldType(VariantFieldType *p); /* abstract class */
  void visitAVariantFieldType(AVariantFieldType *p);
  void visitListVariantFieldType(ListVariantFieldType *p);
  void visitRecordFieldType(RecordFieldType *p); /* abstract class */
  void visitARecordFieldType(ARecordFieldType *p);
  void visitListRecordFieldType(ListRecordFieldType *p);
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
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int len = strlen(s);
    while (cur_ + len >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
    }
    resizeBuffer();
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = STELLA_BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};


}

#endif

