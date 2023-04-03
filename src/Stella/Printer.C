/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include <string>
#include "Printer.H"
#define INDENT_WIDTH 2

namespace Stella
{
//You may wish to change render
void PrintAbsyn::render(Char c)
{
  if (c == '{')
  {
     bufAppend('\n');
     indent();
     bufAppend(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppend('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppend(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppend(c);
  }
  else if (c == '}')
  {
     int t;
     _n_ = _n_ - INDENT_WIDTH;
     for (t=0; t<INDENT_WIDTH; t++) {
       backup();
     }
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == 0) return;
  else
  {
     bufAppend(' ');
     bufAppend(c);
     bufAppend(' ');
  }
}

void PrintAbsyn::render(String s_)
{
  const char *s = s_.c_str() ;
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}
void PrintAbsyn::render(const char *s)
{
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}

void PrintAbsyn::indent()
{
  int n = _n_;
  while (n > 0)
  {
    bufAppend(' ');
    n--;
  }
}

void PrintAbsyn::backup()
{
  if (buf_[cur_ - 1] == ' ')
  {
    buf_[cur_ - 1] = 0;
    cur_--;
  }
}

PrintAbsyn::PrintAbsyn(void)
{
  _i_ = 0; _n_ = 0;
  buf_ = 0;
  bufReset();
}

PrintAbsyn::~PrintAbsyn(void)
{
}

char *PrintAbsyn::print(Visitable *v)
{
  _i_ = 0; _n_ = 0;
  bufReset();
  v->accept(this);
  return buf_;
}

void PrintAbsyn::visitProgram(Program *p) {} //abstract class

void PrintAbsyn::visitAProgram(AProgram *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  _i_ = 0; p->languagedecl_->accept(this);
  if(p->listextension_) {_i_ = 0; p->listextension_->accept(this);}
  if(p->listdecl_) {_i_ = 0; p->listdecl_->accept(this);}

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListStellaIdent(ListStellaIdent *liststellaident)
{
  for (ListStellaIdent::const_iterator i = liststellaident->begin() ; i != liststellaident->end() ; ++i)
  {
    visitStellaIdent(*i) ;
    if (i != liststellaident->end() - 1) render(',');
  }
}void PrintAbsyn::visitLanguageDecl(LanguageDecl *p) {} //abstract class

void PrintAbsyn::visitLanguageCore(LanguageCore *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("language");
  render("core");
  render(';');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExtension(Extension *p) {} //abstract class

void PrintAbsyn::visitAnExtension(AnExtension *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("extend");
  render("with");
  if(p->listextensionname_) {_i_ = 0; p->listextensionname_->accept(this);}

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListExtensionName(ListExtensionName *listextensionname)
{
  for (ListExtensionName::const_iterator i = listextensionname->begin() ; i != listextensionname->end() ; ++i)
  {
    visitExtensionName(*i) ;
    if (i != listextensionname->end() - 1) render(',');
  }
}void PrintAbsyn::visitListExtension(ListExtension *listextension)
{
  for (ListExtension::const_iterator i = listextension->begin() ; i != listextension->end() ; ++i)
  {
    (*i)->accept(this);
    render(';');
  }
}void PrintAbsyn::visitDecl(Decl *p) {} //abstract class

void PrintAbsyn::visitDeclFun(DeclFun *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  if(p->listannotation_) {_i_ = 0; p->listannotation_->accept(this);}
  render("fn");
  visitIdent(p->stellaident_);
  render('(');
  if(p->listparamdecl_) {_i_ = 0; p->listparamdecl_->accept(this);}
  render(')');
  _i_ = 0; p->returntype_->accept(this);
  _i_ = 0; p->throwtype_->accept(this);
  render('{');
  if(p->listdecl_) {_i_ = 0; p->listdecl_->accept(this);}
  render("return");
  _i_ = 0; p->expr_->accept(this);
  render('}');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDeclTypeAlias(DeclTypeAlias *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("type");
  visitIdent(p->stellaident_);
  render('=');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListDecl(ListDecl *listdecl)
{
  for (ListDecl::const_iterator i = listdecl->begin() ; i != listdecl->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitLocalDecl(LocalDecl *p) {} //abstract class

void PrintAbsyn::visitALocalDecl(ALocalDecl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  _i_ = 0; p->decl_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListLocalDecl(ListLocalDecl *listlocaldecl)
{
  for (ListLocalDecl::const_iterator i = listlocaldecl->begin() ; i != listlocaldecl->end() ; ++i)
  {
    (*i)->accept(this);
    render(';');
  }
}void PrintAbsyn::visitAnnotation(Annotation *p) {} //abstract class

void PrintAbsyn::visitInlineAnnotation(InlineAnnotation *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("inline");

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListAnnotation(ListAnnotation *listannotation)
{
  for (ListAnnotation::const_iterator i = listannotation->begin() ; i != listannotation->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitParamDecl(ParamDecl *p) {} //abstract class

void PrintAbsyn::visitAParamDecl(AParamDecl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);
  render(':');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListParamDecl(ListParamDecl *listparamdecl)
{
  for (ListParamDecl::const_iterator i = listparamdecl->begin() ; i != listparamdecl->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listparamdecl->end() - 1) render(',');
  }
}void PrintAbsyn::visitReturnType(ReturnType *p) {} //abstract class

void PrintAbsyn::visitNoReturnType(NoReturnType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);


  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSomeReturnType(SomeReturnType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("->");
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitThrowType(ThrowType *p) {} //abstract class

void PrintAbsyn::visitNoThrowType(NoThrowType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);


  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSomeThrowType(SomeThrowType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("throws");
  if(p->listtype_) {_i_ = 9; p->listtype_->accept(this);}

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType(Type *p) {} //abstract class

void PrintAbsyn::visitTypeFun(TypeFun *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("fn");
  render('(');
  if(p->listtype_) {_i_ = 0; p->listtype_->accept(this);}
  render(')');
  render("->");
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeRec(TypeRec *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('\181');
  visitIdent(p->stellaident_);
  render('.');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeSum(TypeSum *p)
{
  int oldi = _i_;
  if (oldi > 1) render(STELLA__L_PAREN);

  _i_ = 2; p->type_1->accept(this);
  render('+');
  _i_ = 2; p->type_2->accept(this);

  if (oldi > 1) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeTuple(TypeTuple *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  render('{');
  if(p->listtype_) {_i_ = 0; p->listtype_->accept(this);}
  render('}');

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeRecord(TypeRecord *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  render('{');
  if(p->listrecordfieldtype_) {_i_ = 0; p->listrecordfieldtype_->accept(this);}
  render('}');

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeVariant(TypeVariant *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  render("<|");
  if(p->listvariantfieldtype_) {_i_ = 0; p->listvariantfieldtype_->accept(this);}
  render("|>");

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeList(TypeList *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  render('[');
  _i_ = 0; p->type_->accept(this);
  render(']');

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeBool(TypeBool *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render("Bool");

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeNat(TypeNat *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render("Nat");

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeUnit(TypeUnit *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render("Unit");

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeVar(TypeVar *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListType(ListType *listtype)
{
  for (ListType::const_iterator i = listtype->begin() ; i != listtype->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listtype->end() - 1) switch(_i_)
                                  {
                                    case 9: render(','); break;
                                    default: render(',');
                                  }
  }
}void PrintAbsyn::visitMatchCase(MatchCase *p) {} //abstract class

void PrintAbsyn::visitAMatchCase(AMatchCase *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  _i_ = 0; p->pattern_->accept(this);
  render("=>");
  _i_ = 0; p->expr_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListMatchCase(ListMatchCase *listmatchcase)
{
  for (ListMatchCase::const_iterator i = listmatchcase->begin() ; i != listmatchcase->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmatchcase->end() - 1) render('|');
  }
}void PrintAbsyn::visitOptionalTyping(OptionalTyping *p) {} //abstract class

void PrintAbsyn::visitNoTyping(NoTyping *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);


  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSomeTyping(SomeTyping *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render(':');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternData(PatternData *p) {} //abstract class

void PrintAbsyn::visitNoPatternData(NoPatternData *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);


  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSomePatternData(SomePatternData *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('=');
  _i_ = 0; p->pattern_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExprData(ExprData *p) {} //abstract class

void PrintAbsyn::visitNoExprData(NoExprData *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);


  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSomeExprData(SomeExprData *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('=');
  _i_ = 0; p->expr_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPattern(Pattern *p) {} //abstract class

void PrintAbsyn::visitPatternVariant(PatternVariant *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("<|");
  visitIdent(p->stellaident_);
  _i_ = 0; p->patterndata_->accept(this);
  render("|>");

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternInl(PatternInl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("inl");
  render('(');
  _i_ = 0; p->pattern_->accept(this);
  render(')');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternInr(PatternInr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("inr");
  render('(');
  _i_ = 0; p->pattern_->accept(this);
  render(')');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternTuple(PatternTuple *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('{');
  if(p->listpattern_) {_i_ = 0; p->listpattern_->accept(this);}
  render('}');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternRecord(PatternRecord *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('{');
  if(p->listlabelledpattern_) {_i_ = 0; p->listlabelledpattern_->accept(this);}
  render('}');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternList(PatternList *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('[');
  if(p->listpattern_) {_i_ = 0; p->listpattern_->accept(this);}
  render(']');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternCons(PatternCons *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render('(');
  _i_ = 0; p->pattern_1->accept(this);
  render(',');
  _i_ = 0; p->pattern_2->accept(this);
  render(')');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternFalse(PatternFalse *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("false");

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternTrue(PatternTrue *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("true");

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternUnit(PatternUnit *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("unit");

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternInt(PatternInt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternSucc(PatternSucc *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  render("succ");
  render('(');
  _i_ = 0; p->pattern_->accept(this);
  render(')');

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPatternVar(PatternVar *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListPattern(ListPattern *listpattern)
{
  for (ListPattern::const_iterator i = listpattern->begin() ; i != listpattern->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpattern->end() - 1) render(',');
  }
}void PrintAbsyn::visitLabelledPattern(LabelledPattern *p) {} //abstract class

void PrintAbsyn::visitALabelledPattern(ALabelledPattern *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);
  render('=');
  _i_ = 0; p->pattern_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListLabelledPattern(ListLabelledPattern *listlabelledpattern)
{
  for (ListLabelledPattern::const_iterator i = listlabelledpattern->begin() ; i != listlabelledpattern->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listlabelledpattern->end() - 1) render(',');
  }
}void PrintAbsyn::visitBinding(Binding *p) {} //abstract class

void PrintAbsyn::visitABinding(ABinding *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);
  render('=');
  _i_ = 0; p->expr_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListBinding(ListBinding *listbinding)
{
  for (ListBinding::const_iterator i = listbinding->begin() ; i != listbinding->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listbinding->end() - 1) render(',');
  }
}void PrintAbsyn::visitExpr(Expr *p) {} //abstract class

void PrintAbsyn::visitSequence(Sequence *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  _i_ = 1; p->expr_1->accept(this);
  render(';');
  _i_ = 0; p->expr_2->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIf(If *p)
{
  int oldi = _i_;
  if (oldi > 1) render(STELLA__L_PAREN);

  render("if");
  _i_ = 1; p->expr_1->accept(this);
  render("then");
  _i_ = 1; p->expr_2->accept(this);
  render("else");
  _i_ = 1; p->expr_3->accept(this);

  if (oldi > 1) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLet(Let *p)
{
  int oldi = _i_;
  if (oldi > 1) render(STELLA__L_PAREN);

  render("let");
  if(p->listpatternbinding_) {_i_ = 0; p->listpatternbinding_->accept(this);}
  render("in");
  _i_ = 1; p->expr_->accept(this);

  if (oldi > 1) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLetRec(LetRec *p)
{
  int oldi = _i_;
  if (oldi > 1) render(STELLA__L_PAREN);

  render("letrec");
  if(p->listpatternbinding_) {_i_ = 0; p->listpatternbinding_->accept(this);}
  render("in");
  _i_ = 1; p->expr_->accept(this);

  if (oldi > 1) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLessThan(LessThan *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render('<');
  _i_ = 3; p->expr_2->accept(this);

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLessThanOrEqual(LessThanOrEqual *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render("<=");
  _i_ = 3; p->expr_2->accept(this);

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGreaterThan(GreaterThan *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render('>');
  _i_ = 3; p->expr_2->accept(this);

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGreaterThanOrEqual(GreaterThanOrEqual *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render(">=");
  _i_ = 3; p->expr_2->accept(this);

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEqual(Equal *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render("==");
  _i_ = 3; p->expr_2->accept(this);

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitNotEqual(NotEqual *p)
{
  int oldi = _i_;
  if (oldi > 2) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render("!=");
  _i_ = 3; p->expr_2->accept(this);

  if (oldi > 2) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeAsc(TypeAsc *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_->accept(this);
  render("as");
  _i_ = 2; p->type_->accept(this);

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAbstraction(Abstraction *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render("fn");
  render('(');
  if(p->listparamdecl_) {_i_ = 0; p->listparamdecl_->accept(this);}
  render(')');
  render('{');
  render("return");
  _i_ = 0; p->expr_->accept(this);
  render('}');

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitVariant(Variant *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render("<|");
  visitIdent(p->stellaident_);
  _i_ = 0; p->exprdata_->accept(this);
  render("|>");

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMatch(Match *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render("match");
  _i_ = 2; p->expr_->accept(this);
  render('{');
  if(p->listmatchcase_) {_i_ = 0; p->listmatchcase_->accept(this);}
  render('}');

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitList(List *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  render('[');
  if(p->listexpr_) {_i_ = 0; p->listexpr_->accept(this);}
  render(']');

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAdd(Add *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render('+');
  _i_ = 4; p->expr_2->accept(this);

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSubtract(Subtract *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render('-');
  _i_ = 4; p->expr_2->accept(this);

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLogicOr(LogicOr *p)
{
  int oldi = _i_;
  if (oldi > 3) render(STELLA__L_PAREN);

  _i_ = 3; p->expr_1->accept(this);
  render("or");
  _i_ = 4; p->expr_2->accept(this);

  if (oldi > 3) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMultiply(Multiply *p)
{
  int oldi = _i_;
  if (oldi > 4) render(STELLA__L_PAREN);

  _i_ = 4; p->expr_1->accept(this);
  render('*');
  _i_ = 5; p->expr_2->accept(this);

  if (oldi > 4) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDivide(Divide *p)
{
  int oldi = _i_;
  if (oldi > 4) render(STELLA__L_PAREN);

  _i_ = 4; p->expr_1->accept(this);
  render('/');
  _i_ = 5; p->expr_2->accept(this);

  if (oldi > 4) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLogicAnd(LogicAnd *p)
{
  int oldi = _i_;
  if (oldi > 4) render(STELLA__L_PAREN);

  _i_ = 4; p->expr_1->accept(this);
  render("and");
  _i_ = 5; p->expr_2->accept(this);

  if (oldi > 4) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitApplication(Application *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  _i_ = 6; p->expr_->accept(this);
  render('(');
  if(p->listexpr_) {_i_ = 0; p->listexpr_->accept(this);}
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDotRecord(DotRecord *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  _i_ = 6; p->expr_->accept(this);
  render('.');
  visitIdent(p->stellaident_);

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDotTuple(DotTuple *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  _i_ = 6; p->expr_->accept(this);
  render('.');
  visitInteger(p->integer_);

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTuple(Tuple *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render('{');
  if(p->listexpr_) {_i_ = 0; p->listexpr_->accept(this);}
  render('}');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRecord(Record *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render('{');
  if(p->listbinding_) {_i_ = 0; p->listbinding_->accept(this);}
  render('}');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitConsList(ConsList *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("cons");
  render('(');
  _i_ = 0; p->expr_1->accept(this);
  render(',');
  _i_ = 0; p->expr_2->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitHead(Head *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("List::head");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIsEmpty(IsEmpty *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("List::isempty");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTail(Tail *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("List::tail");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInl(Inl *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("inl");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInr(Inr *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("inr");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSucc(Succ *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("succ");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLogicNot(LogicNot *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("not");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPred(Pred *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("Nat::pred");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIsZero(IsZero *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("Nat::iszero");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFix(Fix *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("fix");
  render('(');
  _i_ = 0; p->expr_->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitNatRec(NatRec *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("Nat::rec");
  render('(');
  _i_ = 0; p->expr_1->accept(this);
  render(',');
  _i_ = 0; p->expr_2->accept(this);
  render(',');
  _i_ = 0; p->expr_3->accept(this);
  render(')');

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFold(Fold *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("fold");
  render('[');
  _i_ = 0; p->type_->accept(this);
  render(']');
  _i_ = 7; p->expr_->accept(this);

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitUnfold(Unfold *p)
{
  int oldi = _i_;
  if (oldi > 6) render(STELLA__L_PAREN);

  render("unfold");
  render('[');
  _i_ = 0; p->type_->accept(this);
  render(']');
  _i_ = 7; p->expr_->accept(this);

  if (oldi > 6) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitConstTrue(ConstTrue *p)
{
  int oldi = _i_;
  if (oldi > 7) render(STELLA__L_PAREN);

  render("true");

  if (oldi > 7) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitConstFalse(ConstFalse *p)
{
  int oldi = _i_;
  if (oldi > 7) render(STELLA__L_PAREN);

  render("false");

  if (oldi > 7) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitConstUnit(ConstUnit *p)
{
  int oldi = _i_;
  if (oldi > 7) render(STELLA__L_PAREN);

  render("unit");

  if (oldi > 7) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitConstInt(ConstInt *p)
{
  int oldi = _i_;
  if (oldi > 7) render(STELLA__L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 7) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitVar(Var *p)
{
  int oldi = _i_;
  if (oldi > 7) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);

  if (oldi > 7) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListExpr(ListExpr *listexpr)
{
  for (ListExpr::const_iterator i = listexpr->begin() ; i != listexpr->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexpr->end() - 1) switch(_i_)
                                  {
                                    case 2: render(';'); break;
                                    default: render(',');
                                  }
  }
}void PrintAbsyn::visitPatternBinding(PatternBinding *p) {} //abstract class

void PrintAbsyn::visitAPatternBinding(APatternBinding *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  _i_ = 0; p->pattern_->accept(this);
  render('=');
  _i_ = 0; p->expr_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListPatternBinding(ListPatternBinding *listpatternbinding)
{
  for (ListPatternBinding::const_iterator i = listpatternbinding->begin() ; i != listpatternbinding->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpatternbinding->end() - 1) render(',');
  }
}void PrintAbsyn::visitVariantFieldType(VariantFieldType *p) {} //abstract class

void PrintAbsyn::visitAVariantFieldType(AVariantFieldType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);
  _i_ = 0; p->optionaltyping_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListVariantFieldType(ListVariantFieldType *listvariantfieldtype)
{
  for (ListVariantFieldType::const_iterator i = listvariantfieldtype->begin() ; i != listvariantfieldtype->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listvariantfieldtype->end() - 1) render(',');
  }
}void PrintAbsyn::visitRecordFieldType(RecordFieldType *p) {} //abstract class

void PrintAbsyn::visitARecordFieldType(ARecordFieldType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  visitIdent(p->stellaident_);
  render(':');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListRecordFieldType(ListRecordFieldType *listrecordfieldtype)
{
  for (ListRecordFieldType::const_iterator i = listrecordfieldtype->begin() ; i != listrecordfieldtype->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listrecordfieldtype->end() - 1) render(',');
  }
}void PrintAbsyn::visitTyping(Typing *p) {} //abstract class

void PrintAbsyn::visitATyping(ATyping *p)
{
  int oldi = _i_;
  if (oldi > 0) render(STELLA__L_PAREN);

  _i_ = 0; p->expr_->accept(this);
  render(':');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(STELLA__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}

void PrintAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}

void PrintAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}

void PrintAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

void PrintAbsyn::visitIdent(String s)
{
  render(s);
}

void PrintAbsyn::visitStellaIdent(String s)
{
  render(s);
}


void PrintAbsyn::visitExtensionName(String s)
{
  render(s);
}


ShowAbsyn::ShowAbsyn(void)
{
  buf_ = 0;
  bufReset();
}

ShowAbsyn::~ShowAbsyn(void)
{
}

char *ShowAbsyn::show(Visitable *v)
{
  bufReset();
  v->accept(this);
  return buf_;
}

void ShowAbsyn::visitProgram(Program *p) {} //abstract class

void ShowAbsyn::visitAProgram(AProgram *p)
{
  bufAppend('(');
  bufAppend("AProgram");
  bufAppend(' ');
  bufAppend('[');
  if (p->languagedecl_)  p->languagedecl_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listextension_)  p->listextension_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listdecl_)  p->listdecl_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListStellaIdent(ListStellaIdent *liststellaident)
{
  for (ListStellaIdent::const_iterator i = liststellaident->begin() ; i != liststellaident->end() ; ++i)
  {
    visitStellaIdent(*i) ;
    if (i != liststellaident->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitLanguageDecl(LanguageDecl *p) {} //abstract class

void ShowAbsyn::visitLanguageCore(LanguageCore *p)
{
  bufAppend("LanguageCore");
}
void ShowAbsyn::visitExtension(Extension *p) {} //abstract class

void ShowAbsyn::visitAnExtension(AnExtension *p)
{
  bufAppend('(');
  bufAppend("AnExtension");
  bufAppend(' ');
  bufAppend('[');
  if (p->listextensionname_)  p->listextensionname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListExtensionName(ListExtensionName *listextensionname)
{
  for (ListExtensionName::const_iterator i = listextensionname->begin() ; i != listextensionname->end() ; ++i)
  {
    visitExtensionName(*i) ;
    if (i != listextensionname->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListExtension(ListExtension *listextension)
{
  for (ListExtension::const_iterator i = listextension->begin() ; i != listextension->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listextension->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitDecl(Decl *p) {} //abstract class

void ShowAbsyn::visitDeclFun(DeclFun *p)
{
  bufAppend('(');
  bufAppend("DeclFun");
  bufAppend(' ');
  bufAppend('[');
  if (p->listannotation_)  p->listannotation_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listparamdecl_)  p->listparamdecl_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->returntype_)  p->returntype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->throwtype_)  p->throwtype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listdecl_)  p->listdecl_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDeclTypeAlias(DeclTypeAlias *p)
{
  bufAppend('(');
  bufAppend("DeclTypeAlias");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListDecl(ListDecl *listdecl)
{
  for (ListDecl::const_iterator i = listdecl->begin() ; i != listdecl->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listdecl->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitLocalDecl(LocalDecl *p) {} //abstract class

void ShowAbsyn::visitALocalDecl(ALocalDecl *p)
{
  bufAppend('(');
  bufAppend("ALocalDecl");
  bufAppend(' ');
  bufAppend('[');
  if (p->decl_)  p->decl_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListLocalDecl(ListLocalDecl *listlocaldecl)
{
  for (ListLocalDecl::const_iterator i = listlocaldecl->begin() ; i != listlocaldecl->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listlocaldecl->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitAnnotation(Annotation *p) {} //abstract class

void ShowAbsyn::visitInlineAnnotation(InlineAnnotation *p)
{
  bufAppend("InlineAnnotation");
}
void ShowAbsyn::visitListAnnotation(ListAnnotation *listannotation)
{
  for (ListAnnotation::const_iterator i = listannotation->begin() ; i != listannotation->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listannotation->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitParamDecl(ParamDecl *p) {} //abstract class

void ShowAbsyn::visitAParamDecl(AParamDecl *p)
{
  bufAppend('(');
  bufAppend("AParamDecl");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListParamDecl(ListParamDecl *listparamdecl)
{
  for (ListParamDecl::const_iterator i = listparamdecl->begin() ; i != listparamdecl->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listparamdecl->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitReturnType(ReturnType *p) {} //abstract class

void ShowAbsyn::visitNoReturnType(NoReturnType *p)
{
  bufAppend("NoReturnType");
}
void ShowAbsyn::visitSomeReturnType(SomeReturnType *p)
{
  bufAppend('(');
  bufAppend("SomeReturnType");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitThrowType(ThrowType *p) {} //abstract class

void ShowAbsyn::visitNoThrowType(NoThrowType *p)
{
  bufAppend("NoThrowType");
}
void ShowAbsyn::visitSomeThrowType(SomeThrowType *p)
{
  bufAppend('(');
  bufAppend("SomeThrowType");
  bufAppend(' ');
  bufAppend('[');
  if (p->listtype_)  p->listtype_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitType(Type *p) {} //abstract class

void ShowAbsyn::visitTypeFun(TypeFun *p)
{
  bufAppend('(');
  bufAppend("TypeFun");
  bufAppend(' ');
  bufAppend('[');
  if (p->listtype_)  p->listtype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTypeRec(TypeRec *p)
{
  bufAppend('(');
  bufAppend("TypeRec");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTypeSum(TypeSum *p)
{
  bufAppend('(');
  bufAppend("TypeSum");
  bufAppend(' ');
  p->type_1->accept(this);
  bufAppend(' ');
  p->type_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitTypeTuple(TypeTuple *p)
{
  bufAppend('(');
  bufAppend("TypeTuple");
  bufAppend(' ');
  bufAppend('[');
  if (p->listtype_)  p->listtype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTypeRecord(TypeRecord *p)
{
  bufAppend('(');
  bufAppend("TypeRecord");
  bufAppend(' ');
  bufAppend('[');
  if (p->listrecordfieldtype_)  p->listrecordfieldtype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTypeVariant(TypeVariant *p)
{
  bufAppend('(');
  bufAppend("TypeVariant");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvariantfieldtype_)  p->listvariantfieldtype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTypeList(TypeList *p)
{
  bufAppend('(');
  bufAppend("TypeList");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTypeBool(TypeBool *p)
{
  bufAppend("TypeBool");
}
void ShowAbsyn::visitTypeNat(TypeNat *p)
{
  bufAppend("TypeNat");
}
void ShowAbsyn::visitTypeUnit(TypeUnit *p)
{
  bufAppend("TypeUnit");
}
void ShowAbsyn::visitTypeVar(TypeVar *p)
{
  bufAppend('(');
  bufAppend("TypeVar");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(')');
}
void ShowAbsyn::visitListType(ListType *listtype)
{
  for (ListType::const_iterator i = listtype->begin() ; i != listtype->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listtype->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitMatchCase(MatchCase *p) {} //abstract class

void ShowAbsyn::visitAMatchCase(AMatchCase *p)
{
  bufAppend('(');
  bufAppend("AMatchCase");
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListMatchCase(ListMatchCase *listmatchcase)
{
  for (ListMatchCase::const_iterator i = listmatchcase->begin() ; i != listmatchcase->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmatchcase->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitOptionalTyping(OptionalTyping *p) {} //abstract class

void ShowAbsyn::visitNoTyping(NoTyping *p)
{
  bufAppend("NoTyping");
}
void ShowAbsyn::visitSomeTyping(SomeTyping *p)
{
  bufAppend('(');
  bufAppend("SomeTyping");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPatternData(PatternData *p) {} //abstract class

void ShowAbsyn::visitNoPatternData(NoPatternData *p)
{
  bufAppend("NoPatternData");
}
void ShowAbsyn::visitSomePatternData(SomePatternData *p)
{
  bufAppend('(');
  bufAppend("SomePatternData");
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitExprData(ExprData *p) {} //abstract class

void ShowAbsyn::visitNoExprData(NoExprData *p)
{
  bufAppend("NoExprData");
}
void ShowAbsyn::visitSomeExprData(SomeExprData *p)
{
  bufAppend('(');
  bufAppend("SomeExprData");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPattern(Pattern *p) {} //abstract class

void ShowAbsyn::visitPatternVariant(PatternVariant *p)
{
  bufAppend('(');
  bufAppend("PatternVariant");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->patterndata_)  p->patterndata_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternInl(PatternInl *p)
{
  bufAppend('(');
  bufAppend("PatternInl");
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternInr(PatternInr *p)
{
  bufAppend('(');
  bufAppend("PatternInr");
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternTuple(PatternTuple *p)
{
  bufAppend('(');
  bufAppend("PatternTuple");
  bufAppend(' ');
  bufAppend('[');
  if (p->listpattern_)  p->listpattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternRecord(PatternRecord *p)
{
  bufAppend('(');
  bufAppend("PatternRecord");
  bufAppend(' ');
  bufAppend('[');
  if (p->listlabelledpattern_)  p->listlabelledpattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternList(PatternList *p)
{
  bufAppend('(');
  bufAppend("PatternList");
  bufAppend(' ');
  bufAppend('[');
  if (p->listpattern_)  p->listpattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternCons(PatternCons *p)
{
  bufAppend('(');
  bufAppend("PatternCons");
  bufAppend(' ');
  p->pattern_1->accept(this);
  bufAppend(' ');
  p->pattern_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternFalse(PatternFalse *p)
{
  bufAppend("PatternFalse");
}
void ShowAbsyn::visitPatternTrue(PatternTrue *p)
{
  bufAppend("PatternTrue");
}
void ShowAbsyn::visitPatternUnit(PatternUnit *p)
{
  bufAppend("PatternUnit");
}
void ShowAbsyn::visitPatternInt(PatternInt *p)
{
  bufAppend('(');
  bufAppend("PatternInt");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitPatternSucc(PatternSucc *p)
{
  bufAppend('(');
  bufAppend("PatternSucc");
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPatternVar(PatternVar *p)
{
  bufAppend('(');
  bufAppend("PatternVar");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(')');
}
void ShowAbsyn::visitListPattern(ListPattern *listpattern)
{
  for (ListPattern::const_iterator i = listpattern->begin() ; i != listpattern->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpattern->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitLabelledPattern(LabelledPattern *p) {} //abstract class

void ShowAbsyn::visitALabelledPattern(ALabelledPattern *p)
{
  bufAppend('(');
  bufAppend("ALabelledPattern");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListLabelledPattern(ListLabelledPattern *listlabelledpattern)
{
  for (ListLabelledPattern::const_iterator i = listlabelledpattern->begin() ; i != listlabelledpattern->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listlabelledpattern->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitBinding(Binding *p) {} //abstract class

void ShowAbsyn::visitABinding(ABinding *p)
{
  bufAppend('(');
  bufAppend("ABinding");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListBinding(ListBinding *listbinding)
{
  for (ListBinding::const_iterator i = listbinding->begin() ; i != listbinding->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listbinding->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitExpr(Expr *p) {} //abstract class

void ShowAbsyn::visitSequence(Sequence *p)
{
  bufAppend('(');
  bufAppend("Sequence");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitIf(If *p)
{
  bufAppend('(');
  bufAppend("If");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(' ');
  p->expr_3->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitLet(Let *p)
{
  bufAppend('(');
  bufAppend("Let");
  bufAppend(' ');
  bufAppend('[');
  if (p->listpatternbinding_)  p->listpatternbinding_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLetRec(LetRec *p)
{
  bufAppend('(');
  bufAppend("LetRec");
  bufAppend(' ');
  bufAppend('[');
  if (p->listpatternbinding_)  p->listpatternbinding_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLessThan(LessThan *p)
{
  bufAppend('(');
  bufAppend("LessThan");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitLessThanOrEqual(LessThanOrEqual *p)
{
  bufAppend('(');
  bufAppend("LessThanOrEqual");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitGreaterThan(GreaterThan *p)
{
  bufAppend('(');
  bufAppend("GreaterThan");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitGreaterThanOrEqual(GreaterThanOrEqual *p)
{
  bufAppend('(');
  bufAppend("GreaterThanOrEqual");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEqual(Equal *p)
{
  bufAppend('(');
  bufAppend("Equal");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitNotEqual(NotEqual *p)
{
  bufAppend('(');
  bufAppend("NotEqual");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitTypeAsc(TypeAsc *p)
{
  bufAppend('(');
  bufAppend("TypeAsc");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitAbstraction(Abstraction *p)
{
  bufAppend('(');
  bufAppend("Abstraction");
  bufAppend(' ');
  bufAppend('[');
  if (p->listparamdecl_)  p->listparamdecl_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitVariant(Variant *p)
{
  bufAppend('(');
  bufAppend("Variant");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->exprdata_)  p->exprdata_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitMatch(Match *p)
{
  bufAppend('(');
  bufAppend("Match");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listmatchcase_)  p->listmatchcase_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitList(List *p)
{
  bufAppend('(');
  bufAppend("List");
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpr_)  p->listexpr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitAdd(Add *p)
{
  bufAppend('(');
  bufAppend("Add");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitSubtract(Subtract *p)
{
  bufAppend('(');
  bufAppend("Subtract");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitLogicOr(LogicOr *p)
{
  bufAppend('(');
  bufAppend("LogicOr");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitMultiply(Multiply *p)
{
  bufAppend('(');
  bufAppend("Multiply");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitDivide(Divide *p)
{
  bufAppend('(');
  bufAppend("Divide");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitLogicAnd(LogicAnd *p)
{
  bufAppend('(');
  bufAppend("LogicAnd");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitApplication(Application *p)
{
  bufAppend('(');
  bufAppend("Application");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpr_)  p->listexpr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDotRecord(DotRecord *p)
{
  bufAppend('(');
  bufAppend("DotRecord");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(')');
}
void ShowAbsyn::visitDotTuple(DotTuple *p)
{
  bufAppend('(');
  bufAppend("DotTuple");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitTuple(Tuple *p)
{
  bufAppend('(');
  bufAppend("Tuple");
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpr_)  p->listexpr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitRecord(Record *p)
{
  bufAppend('(');
  bufAppend("Record");
  bufAppend(' ');
  bufAppend('[');
  if (p->listbinding_)  p->listbinding_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitConsList(ConsList *p)
{
  bufAppend('(');
  bufAppend("ConsList");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitHead(Head *p)
{
  bufAppend('(');
  bufAppend("Head");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitIsEmpty(IsEmpty *p)
{
  bufAppend('(');
  bufAppend("IsEmpty");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTail(Tail *p)
{
  bufAppend('(');
  bufAppend("Tail");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitInl(Inl *p)
{
  bufAppend('(');
  bufAppend("Inl");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitInr(Inr *p)
{
  bufAppend('(');
  bufAppend("Inr");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitSucc(Succ *p)
{
  bufAppend('(');
  bufAppend("Succ");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitLogicNot(LogicNot *p)
{
  bufAppend('(');
  bufAppend("LogicNot");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPred(Pred *p)
{
  bufAppend('(');
  bufAppend("Pred");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitIsZero(IsZero *p)
{
  bufAppend('(');
  bufAppend("IsZero");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitFix(Fix *p)
{
  bufAppend('(');
  bufAppend("Fix");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitNatRec(NatRec *p)
{
  bufAppend('(');
  bufAppend("NatRec");
  bufAppend(' ');
  p->expr_1->accept(this);
  bufAppend(' ');
  p->expr_2->accept(this);
  bufAppend(' ');
  p->expr_3->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitFold(Fold *p)
{
  bufAppend('(');
  bufAppend("Fold");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitUnfold(Unfold *p)
{
  bufAppend('(');
  bufAppend("Unfold");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitConstTrue(ConstTrue *p)
{
  bufAppend("ConstTrue");
}
void ShowAbsyn::visitConstFalse(ConstFalse *p)
{
  bufAppend("ConstFalse");
}
void ShowAbsyn::visitConstUnit(ConstUnit *p)
{
  bufAppend("ConstUnit");
}
void ShowAbsyn::visitConstInt(ConstInt *p)
{
  bufAppend('(');
  bufAppend("ConstInt");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitVar(Var *p)
{
  bufAppend('(');
  bufAppend("Var");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(')');
}
void ShowAbsyn::visitListExpr(ListExpr *listexpr)
{
  for (ListExpr::const_iterator i = listexpr->begin() ; i != listexpr->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexpr->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPatternBinding(PatternBinding *p) {} //abstract class

void ShowAbsyn::visitAPatternBinding(APatternBinding *p)
{
  bufAppend('(');
  bufAppend("APatternBinding");
  bufAppend(' ');
  bufAppend('[');
  if (p->pattern_)  p->pattern_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListPatternBinding(ListPatternBinding *listpatternbinding)
{
  for (ListPatternBinding::const_iterator i = listpatternbinding->begin() ; i != listpatternbinding->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpatternbinding->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitVariantFieldType(VariantFieldType *p) {} //abstract class

void ShowAbsyn::visitAVariantFieldType(AVariantFieldType *p)
{
  bufAppend('(');
  bufAppend("AVariantFieldType");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->optionaltyping_)  p->optionaltyping_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListVariantFieldType(ListVariantFieldType *listvariantfieldtype)
{
  for (ListVariantFieldType::const_iterator i = listvariantfieldtype->begin() ; i != listvariantfieldtype->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listvariantfieldtype->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitRecordFieldType(RecordFieldType *p) {} //abstract class

void ShowAbsyn::visitARecordFieldType(ARecordFieldType *p)
{
  bufAppend('(');
  bufAppend("ARecordFieldType");
  bufAppend(' ');
  visitIdent(p->stellaident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListRecordFieldType(ListRecordFieldType *listrecordfieldtype)
{
  for (ListRecordFieldType::const_iterator i = listrecordfieldtype->begin() ; i != listrecordfieldtype->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listrecordfieldtype->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitTyping(Typing *p) {} //abstract class

void ShowAbsyn::visitATyping(ATyping *p)
{
  bufAppend('(');
  bufAppend("ATyping");
  bufAppend(' ');
  bufAppend('[');
  if (p->expr_)  p->expr_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}
void ShowAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}
void ShowAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}
void ShowAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}
void ShowAbsyn::visitIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

void ShowAbsyn::visitStellaIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}


void ShowAbsyn::visitExtensionName(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}


}
