/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"


namespace Stella
{
void Skeleton::visitProgram(Program *t) {} //abstract class
void Skeleton::visitLanguageDecl(LanguageDecl *t) {} //abstract class
void Skeleton::visitExtension(Extension *t) {} //abstract class
void Skeleton::visitDecl(Decl *t) {} //abstract class
void Skeleton::visitLocalDecl(LocalDecl *t) {} //abstract class
void Skeleton::visitAnnotation(Annotation *t) {} //abstract class
void Skeleton::visitParamDecl(ParamDecl *t) {} //abstract class
void Skeleton::visitReturnType(ReturnType *t) {} //abstract class
void Skeleton::visitThrowType(ThrowType *t) {} //abstract class
void Skeleton::visitType(Type *t) {} //abstract class
void Skeleton::visitMatchCase(MatchCase *t) {} //abstract class
void Skeleton::visitOptionalTyping(OptionalTyping *t) {} //abstract class
void Skeleton::visitPatternData(PatternData *t) {} //abstract class
void Skeleton::visitExprData(ExprData *t) {} //abstract class
void Skeleton::visitPattern(Pattern *t) {} //abstract class
void Skeleton::visitLabelledPattern(LabelledPattern *t) {} //abstract class
void Skeleton::visitBinding(Binding *t) {} //abstract class
void Skeleton::visitExpr(Expr *t) {} //abstract class
void Skeleton::visitPatternBinding(PatternBinding *t) {} //abstract class
void Skeleton::visitVariantFieldType(VariantFieldType *t) {} //abstract class
void Skeleton::visitRecordFieldType(RecordFieldType *t) {} //abstract class
void Skeleton::visitTyping(Typing *t) {} //abstract class

void Skeleton::visitAProgram(AProgram *a_program)
{
  /* Code For AProgram Goes Here */

  a_program->languagedecl_->accept(this);
  a_program->listextension_->accept(this);
  a_program->listdecl_->accept(this);

}

void Skeleton::visitLanguageCore(LanguageCore *language_core)
{
  /* Code For LanguageCore Goes Here */


}

void Skeleton::visitAnExtension(AnExtension *an_extension)
{
  /* Code For AnExtension Goes Here */

  an_extension->listextensionname_->accept(this);

}

void Skeleton::visitDeclFun(DeclFun *decl_fun)
{
  /* Code For DeclFun Goes Here */

  decl_fun->listannotation_->accept(this);
  visitStellaIdent(decl_fun->stellaident_);
  decl_fun->listparamdecl_->accept(this);
  decl_fun->returntype_->accept(this);
  decl_fun->throwtype_->accept(this);
  decl_fun->listdecl_->accept(this);
  decl_fun->expr_->accept(this);

}

void Skeleton::visitDeclTypeAlias(DeclTypeAlias *decl_type_alias)
{
  /* Code For DeclTypeAlias Goes Here */

  visitStellaIdent(decl_type_alias->stellaident_);
  decl_type_alias->type_->accept(this);

}

void Skeleton::visitALocalDecl(ALocalDecl *a_local_decl)
{
  /* Code For ALocalDecl Goes Here */

  a_local_decl->decl_->accept(this);

}

void Skeleton::visitInlineAnnotation(InlineAnnotation *inline_annotation)
{
  /* Code For InlineAnnotation Goes Here */


}

void Skeleton::visitAParamDecl(AParamDecl *a_param_decl)
{
  /* Code For AParamDecl Goes Here */

  visitStellaIdent(a_param_decl->stellaident_);
  a_param_decl->type_->accept(this);

}

void Skeleton::visitNoReturnType(NoReturnType *no_return_type)
{
  /* Code For NoReturnType Goes Here */


}

void Skeleton::visitSomeReturnType(SomeReturnType *some_return_type)
{
  /* Code For SomeReturnType Goes Here */

  some_return_type->type_->accept(this);

}

void Skeleton::visitNoThrowType(NoThrowType *no_throw_type)
{
  /* Code For NoThrowType Goes Here */


}

void Skeleton::visitSomeThrowType(SomeThrowType *some_throw_type)
{
  /* Code For SomeThrowType Goes Here */

  some_throw_type->listtype_->accept(this);

}

void Skeleton::visitTypeFun(TypeFun *type_fun)
{
  /* Code For TypeFun Goes Here */

  type_fun->listtype_->accept(this);
  type_fun->type_->accept(this);

}

void Skeleton::visitTypeRec(TypeRec *type_rec)
{
  /* Code For TypeRec Goes Here */

  visitStellaIdent(type_rec->stellaident_);
  type_rec->type_->accept(this);

}

void Skeleton::visitTypeSum(TypeSum *type_sum)
{
  /* Code For TypeSum Goes Here */

  type_sum->type_1->accept(this);
  type_sum->type_2->accept(this);

}

void Skeleton::visitTypeTuple(TypeTuple *type_tuple)
{
  /* Code For TypeTuple Goes Here */

  type_tuple->listtype_->accept(this);

}

void Skeleton::visitTypeRecord(TypeRecord *type_record)
{
  /* Code For TypeRecord Goes Here */

  type_record->listrecordfieldtype_->accept(this);

}

void Skeleton::visitTypeVariant(TypeVariant *type_variant)
{
  /* Code For TypeVariant Goes Here */

  type_variant->listvariantfieldtype_->accept(this);

}

void Skeleton::visitTypeList(TypeList *type_list)
{
  /* Code For TypeList Goes Here */

  type_list->type_->accept(this);

}

void Skeleton::visitTypeBool(TypeBool *type_bool)
{
  /* Code For TypeBool Goes Here */


}

void Skeleton::visitTypeNat(TypeNat *type_nat)
{
  /* Code For TypeNat Goes Here */


}

void Skeleton::visitTypeUnit(TypeUnit *type_unit)
{
  /* Code For TypeUnit Goes Here */


}

void Skeleton::visitTypeVar(TypeVar *type_var)
{
  /* Code For TypeVar Goes Here */

  visitStellaIdent(type_var->stellaident_);

}

void Skeleton::visitAMatchCase(AMatchCase *a_match_case)
{
  /* Code For AMatchCase Goes Here */

  a_match_case->pattern_->accept(this);
  a_match_case->expr_->accept(this);

}

void Skeleton::visitNoTyping(NoTyping *no_typing)
{
  /* Code For NoTyping Goes Here */


}

void Skeleton::visitSomeTyping(SomeTyping *some_typing)
{
  /* Code For SomeTyping Goes Here */

  some_typing->type_->accept(this);

}

void Skeleton::visitNoPatternData(NoPatternData *no_pattern_data)
{
  /* Code For NoPatternData Goes Here */


}

void Skeleton::visitSomePatternData(SomePatternData *some_pattern_data)
{
  /* Code For SomePatternData Goes Here */

  some_pattern_data->pattern_->accept(this);

}

void Skeleton::visitNoExprData(NoExprData *no_expr_data)
{
  /* Code For NoExprData Goes Here */


}

void Skeleton::visitSomeExprData(SomeExprData *some_expr_data)
{
  /* Code For SomeExprData Goes Here */

  some_expr_data->expr_->accept(this);

}

void Skeleton::visitPatternVariant(PatternVariant *pattern_variant)
{
  /* Code For PatternVariant Goes Here */

  visitStellaIdent(pattern_variant->stellaident_);
  pattern_variant->patterndata_->accept(this);

}

void Skeleton::visitPatternInl(PatternInl *pattern_inl)
{
  /* Code For PatternInl Goes Here */

  pattern_inl->pattern_->accept(this);

}

void Skeleton::visitPatternInr(PatternInr *pattern_inr)
{
  /* Code For PatternInr Goes Here */

  pattern_inr->pattern_->accept(this);

}

void Skeleton::visitPatternTuple(PatternTuple *pattern_tuple)
{
  /* Code For PatternTuple Goes Here */

  pattern_tuple->listpattern_->accept(this);

}

void Skeleton::visitPatternRecord(PatternRecord *pattern_record)
{
  /* Code For PatternRecord Goes Here */

  pattern_record->listlabelledpattern_->accept(this);

}

void Skeleton::visitPatternList(PatternList *pattern_list)
{
  /* Code For PatternList Goes Here */

  pattern_list->listpattern_->accept(this);

}

void Skeleton::visitPatternCons(PatternCons *pattern_cons)
{
  /* Code For PatternCons Goes Here */

  pattern_cons->pattern_1->accept(this);
  pattern_cons->pattern_2->accept(this);

}

void Skeleton::visitPatternFalse(PatternFalse *pattern_false)
{
  /* Code For PatternFalse Goes Here */


}

void Skeleton::visitPatternTrue(PatternTrue *pattern_true)
{
  /* Code For PatternTrue Goes Here */


}

void Skeleton::visitPatternUnit(PatternUnit *pattern_unit)
{
  /* Code For PatternUnit Goes Here */


}

void Skeleton::visitPatternInt(PatternInt *pattern_int)
{
  /* Code For PatternInt Goes Here */

  visitInteger(pattern_int->integer_);

}

void Skeleton::visitPatternSucc(PatternSucc *pattern_succ)
{
  /* Code For PatternSucc Goes Here */

  pattern_succ->pattern_->accept(this);

}

void Skeleton::visitPatternVar(PatternVar *pattern_var)
{
  /* Code For PatternVar Goes Here */

  visitStellaIdent(pattern_var->stellaident_);

}

void Skeleton::visitALabelledPattern(ALabelledPattern *a_labelled_pattern)
{
  /* Code For ALabelledPattern Goes Here */

  visitStellaIdent(a_labelled_pattern->stellaident_);
  a_labelled_pattern->pattern_->accept(this);

}

void Skeleton::visitABinding(ABinding *a_binding)
{
  /* Code For ABinding Goes Here */

  visitStellaIdent(a_binding->stellaident_);
  a_binding->expr_->accept(this);

}

void Skeleton::visitSequence(Sequence *sequence)
{
  /* Code For Sequence Goes Here */

  sequence->expr_1->accept(this);
  sequence->expr_2->accept(this);

}

void Skeleton::visitIf(If *if_)
{
  /* Code For If Goes Here */

  if_->expr_1->accept(this);
  if_->expr_2->accept(this);
  if_->expr_3->accept(this);

}

void Skeleton::visitLet(Let *let)
{
  /* Code For Let Goes Here */

  let->listpatternbinding_->accept(this);
  let->expr_->accept(this);

}

void Skeleton::visitLetRec(LetRec *let_rec)
{
  /* Code For LetRec Goes Here */

  let_rec->listpatternbinding_->accept(this);
  let_rec->expr_->accept(this);

}

void Skeleton::visitLessThan(LessThan *less_than)
{
  /* Code For LessThan Goes Here */

  less_than->expr_1->accept(this);
  less_than->expr_2->accept(this);

}

void Skeleton::visitLessThanOrEqual(LessThanOrEqual *less_than_or_equal)
{
  /* Code For LessThanOrEqual Goes Here */

  less_than_or_equal->expr_1->accept(this);
  less_than_or_equal->expr_2->accept(this);

}

void Skeleton::visitGreaterThan(GreaterThan *greater_than)
{
  /* Code For GreaterThan Goes Here */

  greater_than->expr_1->accept(this);
  greater_than->expr_2->accept(this);

}

void Skeleton::visitGreaterThanOrEqual(GreaterThanOrEqual *greater_than_or_equal)
{
  /* Code For GreaterThanOrEqual Goes Here */

  greater_than_or_equal->expr_1->accept(this);
  greater_than_or_equal->expr_2->accept(this);

}

void Skeleton::visitEqual(Equal *equal)
{
  /* Code For Equal Goes Here */

  equal->expr_1->accept(this);
  equal->expr_2->accept(this);

}

void Skeleton::visitNotEqual(NotEqual *not_equal)
{
  /* Code For NotEqual Goes Here */

  not_equal->expr_1->accept(this);
  not_equal->expr_2->accept(this);

}

void Skeleton::visitTypeAsc(TypeAsc *type_asc)
{
  /* Code For TypeAsc Goes Here */

  type_asc->expr_->accept(this);
  type_asc->type_->accept(this);

}

void Skeleton::visitAbstraction(Abstraction *abstraction)
{
  /* Code For Abstraction Goes Here */

  abstraction->listparamdecl_->accept(this);
  abstraction->expr_->accept(this);

}

void Skeleton::visitVariant(Variant *variant)
{
  /* Code For Variant Goes Here */

  visitStellaIdent(variant->stellaident_);
  variant->exprdata_->accept(this);

}

void Skeleton::visitMatch(Match *match)
{
  /* Code For Match Goes Here */

  match->expr_->accept(this);
  match->listmatchcase_->accept(this);

}

void Skeleton::visitList(List *list)
{
  /* Code For List Goes Here */

  list->listexpr_->accept(this);

}

void Skeleton::visitAdd(Add *add)
{
  /* Code For Add Goes Here */

  add->expr_1->accept(this);
  add->expr_2->accept(this);

}

void Skeleton::visitSubtract(Subtract *subtract)
{
  /* Code For Subtract Goes Here */

  subtract->expr_1->accept(this);
  subtract->expr_2->accept(this);

}

void Skeleton::visitLogicOr(LogicOr *logic_or)
{
  /* Code For LogicOr Goes Here */

  logic_or->expr_1->accept(this);
  logic_or->expr_2->accept(this);

}

void Skeleton::visitMultiply(Multiply *multiply)
{
  /* Code For Multiply Goes Here */

  multiply->expr_1->accept(this);
  multiply->expr_2->accept(this);

}

void Skeleton::visitDivide(Divide *divide)
{
  /* Code For Divide Goes Here */

  divide->expr_1->accept(this);
  divide->expr_2->accept(this);

}

void Skeleton::visitLogicAnd(LogicAnd *logic_and)
{
  /* Code For LogicAnd Goes Here */

  logic_and->expr_1->accept(this);
  logic_and->expr_2->accept(this);

}

void Skeleton::visitApplication(Application *application)
{
  /* Code For Application Goes Here */

  application->expr_->accept(this);
  application->listexpr_->accept(this);

}

void Skeleton::visitDotRecord(DotRecord *dot_record)
{
  /* Code For DotRecord Goes Here */

  dot_record->expr_->accept(this);
  visitStellaIdent(dot_record->stellaident_);

}

void Skeleton::visitDotTuple(DotTuple *dot_tuple)
{
  /* Code For DotTuple Goes Here */

  dot_tuple->expr_->accept(this);
  visitInteger(dot_tuple->integer_);

}

void Skeleton::visitTuple(Tuple *tuple)
{
  /* Code For Tuple Goes Here */

  tuple->listexpr_->accept(this);

}

void Skeleton::visitRecord(Record *record)
{
  /* Code For Record Goes Here */

  record->listbinding_->accept(this);

}

void Skeleton::visitConsList(ConsList *cons_list)
{
  /* Code For ConsList Goes Here */

  cons_list->expr_1->accept(this);
  cons_list->expr_2->accept(this);

}

void Skeleton::visitHead(Head *head)
{
  /* Code For Head Goes Here */

  head->expr_->accept(this);

}

void Skeleton::visitIsEmpty(IsEmpty *is_empty)
{
  /* Code For IsEmpty Goes Here */

  is_empty->expr_->accept(this);

}

void Skeleton::visitTail(Tail *tail)
{
  /* Code For Tail Goes Here */

  tail->expr_->accept(this);

}

void Skeleton::visitInl(Inl *inl)
{
  /* Code For Inl Goes Here */

  inl->expr_->accept(this);

}

void Skeleton::visitInr(Inr *inr)
{
  /* Code For Inr Goes Here */

  inr->expr_->accept(this);

}

void Skeleton::visitSucc(Succ *succ)
{
  /* Code For Succ Goes Here */

  succ->expr_->accept(this);

}

void Skeleton::visitLogicNot(LogicNot *logic_not)
{
  /* Code For LogicNot Goes Here */

  logic_not->expr_->accept(this);

}

void Skeleton::visitPred(Pred *pred)
{
  /* Code For Pred Goes Here */

  pred->expr_->accept(this);

}

void Skeleton::visitIsZero(IsZero *is_zero)
{
  /* Code For IsZero Goes Here */

  is_zero->expr_->accept(this);

}

void Skeleton::visitFix(Fix *fix)
{
  /* Code For Fix Goes Here */

  fix->expr_->accept(this);

}

void Skeleton::visitNatRec(NatRec *nat_rec)
{
  /* Code For NatRec Goes Here */

  nat_rec->expr_1->accept(this);
  nat_rec->expr_2->accept(this);
  nat_rec->expr_3->accept(this);

}

void Skeleton::visitFold(Fold *fold)
{
  /* Code For Fold Goes Here */

  fold->type_->accept(this);
  fold->expr_->accept(this);

}

void Skeleton::visitUnfold(Unfold *unfold)
{
  /* Code For Unfold Goes Here */

  unfold->type_->accept(this);
  unfold->expr_->accept(this);

}

void Skeleton::visitConstTrue(ConstTrue *const_true)
{
  /* Code For ConstTrue Goes Here */


}

void Skeleton::visitConstFalse(ConstFalse *const_false)
{
  /* Code For ConstFalse Goes Here */


}

void Skeleton::visitConstUnit(ConstUnit *const_unit)
{
  /* Code For ConstUnit Goes Here */


}

void Skeleton::visitConstInt(ConstInt *const_int)
{
  /* Code For ConstInt Goes Here */

  visitInteger(const_int->integer_);

}

void Skeleton::visitVar(Var *var)
{
  /* Code For Var Goes Here */

  visitStellaIdent(var->stellaident_);

}

void Skeleton::visitAPatternBinding(APatternBinding *a_pattern_binding)
{
  /* Code For APatternBinding Goes Here */

  a_pattern_binding->pattern_->accept(this);
  a_pattern_binding->expr_->accept(this);

}

void Skeleton::visitAVariantFieldType(AVariantFieldType *a_variant_field_type)
{
  /* Code For AVariantFieldType Goes Here */

  visitStellaIdent(a_variant_field_type->stellaident_);
  a_variant_field_type->optionaltyping_->accept(this);

}

void Skeleton::visitARecordFieldType(ARecordFieldType *a_record_field_type)
{
  /* Code For ARecordFieldType Goes Here */

  visitStellaIdent(a_record_field_type->stellaident_);
  a_record_field_type->type_->accept(this);

}

void Skeleton::visitATyping(ATyping *a_typing)
{
  /* Code For ATyping Goes Here */

  a_typing->expr_->accept(this);
  a_typing->type_->accept(this);

}


void Skeleton::visitListStellaIdent(ListStellaIdent *list_stella_ident)
{
  for (ListStellaIdent::iterator i = list_stella_ident->begin() ; i != list_stella_ident->end() ; ++i)
  {
    visitStellaIdent(*i) ;
  }
}

void Skeleton::visitListExtensionName(ListExtensionName *list_extension_name)
{
  for (ListExtensionName::iterator i = list_extension_name->begin() ; i != list_extension_name->end() ; ++i)
  {
    visitExtensionName(*i) ;
  }
}

void Skeleton::visitListExtension(ListExtension *list_extension)
{
  for (ListExtension::iterator i = list_extension->begin() ; i != list_extension->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListDecl(ListDecl *list_decl)
{
  for (ListDecl::iterator i = list_decl->begin() ; i != list_decl->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListLocalDecl(ListLocalDecl *list_local_decl)
{
  for (ListLocalDecl::iterator i = list_local_decl->begin() ; i != list_local_decl->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListAnnotation(ListAnnotation *list_annotation)
{
  for (ListAnnotation::iterator i = list_annotation->begin() ; i != list_annotation->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListParamDecl(ListParamDecl *list_param_decl)
{
  for (ListParamDecl::iterator i = list_param_decl->begin() ; i != list_param_decl->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListType(ListType *list_type)
{
  for (ListType::iterator i = list_type->begin() ; i != list_type->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListMatchCase(ListMatchCase *list_match_case)
{
  for (ListMatchCase::iterator i = list_match_case->begin() ; i != list_match_case->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListPattern(ListPattern *list_pattern)
{
  for (ListPattern::iterator i = list_pattern->begin() ; i != list_pattern->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListLabelledPattern(ListLabelledPattern *list_labelled_pattern)
{
  for (ListLabelledPattern::iterator i = list_labelled_pattern->begin() ; i != list_labelled_pattern->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListBinding(ListBinding *list_binding)
{
  for (ListBinding::iterator i = list_binding->begin() ; i != list_binding->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListExpr(ListExpr *list_expr)
{
  for (ListExpr::iterator i = list_expr->begin() ; i != list_expr->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListPatternBinding(ListPatternBinding *list_pattern_binding)
{
  for (ListPatternBinding::iterator i = list_pattern_binding->begin() ; i != list_pattern_binding->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListVariantFieldType(ListVariantFieldType *list_variant_field_type)
{
  for (ListVariantFieldType::iterator i = list_variant_field_type->begin() ; i != list_variant_field_type->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListRecordFieldType(ListRecordFieldType *list_record_field_type)
{
  for (ListRecordFieldType::iterator i = list_record_field_type->begin() ; i != list_record_field_type->end() ; ++i)
  {
    (*i)->accept(this);
  }
}


void Skeleton::visitStellaIdent(StellaIdent x)
{
  /* Code for StellaIdent Goes Here */
}

void Skeleton::visitExtensionName(ExtensionName x)
{
  /* Code for ExtensionName Goes Here */
}

void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}


}
