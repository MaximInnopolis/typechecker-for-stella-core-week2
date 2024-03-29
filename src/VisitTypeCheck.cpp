#include "VisitTypeCheck.h"
#include <iostream>

namespace Stella
{
  void VisitTypeCheck::visitProgram(Program *t) {}                   // abstract class
  void VisitTypeCheck::visitLanguageDecl(LanguageDecl *t) {}         // abstract class
  void VisitTypeCheck::visitExtension(Extension *t) {}               // abstract class
  void VisitTypeCheck::visitDecl(Decl *t) {}                         // abstract class
  void VisitTypeCheck::visitLocalDecl(LocalDecl *t) {}               // abstract class
  void VisitTypeCheck::visitAnnotation(Annotation *t) {}             // abstract class
  void VisitTypeCheck::visitParamDecl(ParamDecl *t) {}               // abstract class
  void VisitTypeCheck::visitReturnType(ReturnType *t) {}             // abstract class
  void VisitTypeCheck::visitThrowType(ThrowType *t) {}               // abstract class
  void VisitTypeCheck::visitType(Type *t) {}                         // abstract class
  void VisitTypeCheck::visitMatchCase(MatchCase *t) {}               // abstract class
  void VisitTypeCheck::visitOptionalTyping(OptionalTyping *t) {}     // abstract class
  void VisitTypeCheck::visitPatternData(PatternData *t) {}           // abstract class
  void VisitTypeCheck::visitExprData(ExprData *t) {}                 // abstract class
  void VisitTypeCheck::visitPattern(Pattern *t) {}                   // abstract class
  void VisitTypeCheck::visitLabelledPattern(LabelledPattern *t) {}   // abstract class
  void VisitTypeCheck::visitBinding(Binding *t) {}                   // abstract class
  void VisitTypeCheck::visitExpr(Expr *t) {}                         // abstract class
  void VisitTypeCheck::visitPatternBinding(PatternBinding *t) {}     // abstract class
  void VisitTypeCheck::visitVariantFieldType(VariantFieldType *t) {} // abstract class
  void VisitTypeCheck::visitRecordFieldType(RecordFieldType *t) {}   // abstract class
  void VisitTypeCheck::visitTyping(Typing *t) {}                     // abstract class

  void VisitTypeCheck::visitAProgram(AProgram *a_program)
  {
    /* Code For AProgram Goes Here */

    if (a_program->languagedecl_)
      a_program->languagedecl_->accept(this);
    if (a_program->listextension_)
      a_program->listextension_->accept(this);
    if (a_program->listdecl_)
      a_program->listdecl_->accept(this);
  }

  void VisitTypeCheck::visitLanguageCore(LanguageCore *language_core)
  {
    /* Code For LanguageCore Goes Here */
  }

  void VisitTypeCheck::visitAnExtension(AnExtension *an_extension)
  {
    /* Code For AnExtension Goes Here */

    if (an_extension->listextensionname_)
      an_extension->listextensionname_->accept(this);
  }

  void VisitTypeCheck::visitDeclFun(DeclFun *decl_fun)
  {
      /* Code For DeclFun Goes Here */
      std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                   "\nVisiting function declaration for " << decl_fun->stellaident_ << "\n";

      if (decl_fun->listannotation_)
          decl_fun->listannotation_->accept(this);
      visitStellaIdent(decl_fun->stellaident_);
      if (decl_fun->listparamdecl_)
          decl_fun->listparamdecl_->accept(this);
      if (decl_fun->returntype_)
          decl_fun->returntype_->accept(this);
      if (decl_fun->throwtype_)
          decl_fun->throwtype_->accept(this);
      if (decl_fun->listdecl_)
          decl_fun->listdecl_->accept(this);
      if (decl_fun->expr_)
          decl_fun->expr_->accept(this);

      auto returnType = dynamic_cast<SomeReturnType* >(decl_fun->returntype_)->type_;
      auto paramDecl = dynamic_cast<AParamDecl *>((*decl_fun->listparamdecl_)[0]);
      auto paramType = paramDecl->type_;

      std::cout << "\nFunction name: " << decl_fun->stellaident_ << ", function return type: "
      << printer.print(returnType) << ", function param type: " << printer.print(paramType) << std::endl;

      std::pair<std::string, Type*> decl_fun_pair;

      // Add identifier in the pair
      decl_fun_pair.first = decl_fun->stellaident_;

      ListType *args = new ListType();
      args->push_back(paramType);
      TypeFun *typeFun = new TypeFun(args, returnType);

      // Add type of the function in the pair
      decl_fun_pair.second = typeFun;

      //Insert into context id and type of function
      context.insert(decl_fun_pair);

      std::string param = printer.print(decl_fun->listparamdecl_);
      // Get parameter id out of listparamdecl_
      std::string word = param.substr(0, param.find(" "));

      // Remove parameters of function from context
      context.erase(word);
      for (auto& p : context)
          std::cout << "Currently in context: "<< p.first << " with type " << printer.print(p.second) << std::endl;
  }

  void VisitTypeCheck::visitDeclTypeAlias(DeclTypeAlias *decl_type_alias)
  {
    /* Code For DeclTypeAlias Goes Here */

    visitStellaIdent(decl_type_alias->stellaident_);
    if (decl_type_alias->type_)
      decl_type_alias->type_->accept(this);
  }

  void VisitTypeCheck::visitALocalDecl(ALocalDecl *a_local_decl)
  {
    /* Code For ALocalDecl Goes Here */

    if (a_local_decl->decl_)
      a_local_decl->decl_->accept(this);
  }

  void VisitTypeCheck::visitInlineAnnotation(InlineAnnotation *inline_annotation)
  {
    /* Code For InlineAnnotation Goes Here */
  }

  void VisitTypeCheck::visitAParamDecl(AParamDecl *a_param_decl)
  {
      /* Code For AParamDecl Goes Here */
      std::cout << "Visiting parameter declaration: " << a_param_decl->stellaident_ << " of type " << printer.print(a_param_decl->type_) << std::endl;

      std::pair<std::string, Type*> param_pair;
      param_pair.first = a_param_decl->stellaident_;
      param_pair.second = a_param_decl->type_;

      // Insert parameter id and its type into context
      context.insert(param_pair);

      visitStellaIdent(a_param_decl->stellaident_);
      if (a_param_decl->type_)
          a_param_decl->type_->accept(this);
  }

  void VisitTypeCheck::visitNoReturnType(NoReturnType *no_return_type)
  {
    /* Code For NoReturnType Goes Here */
  }

  void VisitTypeCheck::visitSomeReturnType(SomeReturnType *some_return_type)
  {
      /* Code For SomeReturnType Goes Here */

      std::cout << "Visiting return type: " << printer.print(some_return_type->type_) << std::endl;

      // Add into expected type return type of function
      expectedType = some_return_type->type_;

      if (some_return_type->type_)
          some_return_type->type_->accept(this);
    }

  void VisitTypeCheck::visitNoThrowType(NoThrowType *no_throw_type)
  {
    /* Code For NoThrowType Goes Here */
  }

  void VisitTypeCheck::visitSomeThrowType(SomeThrowType *some_throw_type)
  {
    /* Code For SomeThrowType Goes Here */

    if (some_throw_type->listtype_)
      some_throw_type->listtype_->accept(this);
  }

  void VisitTypeCheck::visitTypeFun(TypeFun *type_fun)
  {
    /* Code For TypeFun Goes Here */

    if (type_fun->listtype_)
      type_fun->listtype_->accept(this);
    if (type_fun->type_)
      type_fun->type_->accept(this);
  }

  void VisitTypeCheck::visitTypeRec(TypeRec *type_rec)
  {
    /* Code For TypeRec Goes Here */

    visitStellaIdent(type_rec->stellaident_);
    if (type_rec->type_)
      type_rec->type_->accept(this);
  }

  void VisitTypeCheck::visitTypeSum(TypeSum *type_sum)
  {
    /* Code For TypeSum Goes Here */

    if (type_sum->type_1)
      type_sum->type_1->accept(this);
    if (type_sum->type_2)
      type_sum->type_2->accept(this);
  }

  void VisitTypeCheck::visitTypeTuple(TypeTuple *type_tuple)
  {
    /* Code For TypeTuple Goes Here */

    if (type_tuple->listtype_)
      type_tuple->listtype_->accept(this);
  }

  void VisitTypeCheck::visitTypeRecord(TypeRecord *type_record)
  {
    /* Code For TypeRecord Goes Here */

    if (type_record->listrecordfieldtype_)
      type_record->listrecordfieldtype_->accept(this);
  }

  void VisitTypeCheck::visitTypeVariant(TypeVariant *type_variant)
  {
    /* Code For TypeVariant Goes Here */

    if (type_variant->listvariantfieldtype_)
      type_variant->listvariantfieldtype_->accept(this);
  }

  void VisitTypeCheck::visitTypeList(TypeList *type_list)
  {
    /* Code For TypeList Goes Here */

    if (type_list->type_)
      type_list->type_->accept(this);
  }

  void VisitTypeCheck::visitTypeBool(TypeBool *type_bool)
  {
    /* Code For TypeBool Goes Here */
  }

  void VisitTypeCheck::visitTypeNat(TypeNat *type_nat)
  {
    /* Code For TypeNat Goes Here */
  }

  void VisitTypeCheck::visitTypeUnit(TypeUnit *type_unit)
  {
    /* Code For TypeUnit Goes Here */
  }

  void VisitTypeCheck::visitTypeVar(TypeVar *type_var)
  {
    /* Code For TypeVar Goes Here */

    visitStellaIdent(type_var->stellaident_);
  }

  void VisitTypeCheck::visitAMatchCase(AMatchCase *a_match_case)
  {
    /* Code For AMatchCase Goes Here */

    std::cout << "\nVisiting match case: " << printer.print(a_match_case) << std::endl;
    std::cout << "Match case pattern: " << printer.print(a_match_case->pattern_) << std::endl;
    std::cout << "Match case expr: " << printer.print(a_match_case->expr_) << std::endl;

    for (auto& p : context)
        std::cout << "Currently in context: "<< p.first << std::endl;

    auto expType = expectedType;
    std::cout << "Expected type: " << printer.print(expType) << std::endl;

    if (a_match_case->pattern_)
      a_match_case->pattern_->accept(this);
    if (a_match_case->expr_)
      a_match_case->expr_->accept(this);
  }

  void VisitTypeCheck::visitNoTyping(NoTyping *no_typing)
  {
    /* Code For NoTyping Goes Here */
  }

  void VisitTypeCheck::visitSomeTyping(SomeTyping *some_typing)
  {
    /* Code For SomeTyping Goes Here */

    if (some_typing->type_)
      some_typing->type_->accept(this);
  }

  void VisitTypeCheck::visitNoPatternData(NoPatternData *no_pattern_data)
  {
    /* Code For NoPatternData Goes Here */
  }

  void VisitTypeCheck::visitSomePatternData(SomePatternData *some_pattern_data)
  {
    /* Code For SomePatternData Goes Here */

    if (some_pattern_data->pattern_)
      some_pattern_data->pattern_->accept(this);
  }

  void VisitTypeCheck::visitNoExprData(NoExprData *no_expr_data)
  {
    /* Code For NoExprData Goes Here */
  }

  void VisitTypeCheck::visitSomeExprData(SomeExprData *some_expr_data)
  {
    /* Code For SomeExprData Goes Here */

    if (some_expr_data->expr_)
      some_expr_data->expr_->accept(this);
  }

  void VisitTypeCheck::visitPatternVariant(PatternVariant *pattern_variant)
  {
    /* Code For PatternVariant Goes Here */

    visitStellaIdent(pattern_variant->stellaident_);
    if (pattern_variant->patterndata_)
      pattern_variant->patterndata_->accept(this);
  }

  void VisitTypeCheck::visitPatternInl(PatternInl *pattern_inl)
  {
    /* Code For PatternInl Goes Here */

    std::cout << "\nVisiting Pattern inl: " << printer.print(pattern_inl) << std::endl;
    std::cout << "Pattern: " << printer.print(pattern_inl->pattern_) << std::endl;
    std::cout << "Expected type: " << printer.print(expectedType) << std::endl;
    std::cout << "Inl type: " << printer.print(lastVisitedType) << std::endl;

    if (auto typeSum = dynamic_cast<TypeSum* >(lastVisitedType)){
        std::cout << "Successful casting into typeSum: " << printer.print(typeSum) << std::endl;
        lastVisitedType = typeSum->type_1;
        if (pattern_inl->pattern_)
            pattern_inl->pattern_->accept(this);
    } else {
        std::cout << "ERROR\tCannot cast into typeSum: " << pattern_inl->line_number << '\n';
        exit(1);
    }
  }

  void VisitTypeCheck::visitPatternInr(PatternInr *pattern_inr)
  {
    /* Code For PatternInr Goes Here */

    std::cout << "\nVisiting Pattern inr: " << printer.print(pattern_inr) << std::endl;
    std::cout << "Pattern: " << printer.print(pattern_inr->pattern_) << std::endl;
    std::cout << "Expected type: " << printer.print(expectedType) << std::endl;
    std::cout << "Inr type: " << printer.print(lastVisitedType) << std::endl;

    if (auto typeSum = dynamic_cast<TypeSum* >(lastVisitedType))
        {std::cout << "Successful casting into typeSum: " << printer.print(typeSum) << std::endl;
            lastVisitedType = typeSum->type_2;
        if (pattern_inr->pattern_)
            pattern_inr->pattern_->accept(this);
    } else {
        std::cout << "ERROR\tCannot cast into typeSum: " << pattern_inr->line_number << '\n';
        exit(1);
    }
  }

  void VisitTypeCheck::visitPatternTuple(PatternTuple *pattern_tuple)
  {
    /* Code For PatternTuple Goes Here */

    if (pattern_tuple->listpattern_)
      pattern_tuple->listpattern_->accept(this);
  }

  void VisitTypeCheck::visitPatternRecord(PatternRecord *pattern_record)
  {
    /* Code For PatternRecord Goes Here */

    if (pattern_record->listlabelledpattern_)
      pattern_record->listlabelledpattern_->accept(this);
  }

  void VisitTypeCheck::visitPatternList(PatternList *pattern_list)
  {
    /* Code For PatternList Goes Here */

    if (pattern_list->listpattern_)
      pattern_list->listpattern_->accept(this);
  }

  void VisitTypeCheck::visitPatternCons(PatternCons *pattern_cons)
  {
    /* Code For PatternCons Goes Here */

    if (pattern_cons->pattern_1)
      pattern_cons->pattern_1->accept(this);
    if (pattern_cons->pattern_2)
      pattern_cons->pattern_2->accept(this);
  }

  void VisitTypeCheck::visitPatternFalse(PatternFalse *pattern_false)
  {
    /* Code For PatternFalse Goes Here */
  }

  void VisitTypeCheck::visitPatternTrue(PatternTrue *pattern_true)
  {
    /* Code For PatternTrue Goes Here */
  }

  void VisitTypeCheck::visitPatternUnit(PatternUnit *pattern_unit)
  {
    /* Code For PatternUnit Goes Here */
  }

  void VisitTypeCheck::visitPatternInt(PatternInt *pattern_int)
  {
    /* Code For PatternInt Goes Here */

    visitInteger(pattern_int->integer_);
  }

  void VisitTypeCheck::visitPatternSucc(PatternSucc *pattern_succ)
  {
    /* Code For PatternSucc Goes Here */

    if (pattern_succ->pattern_)
      pattern_succ->pattern_->accept(this);
  }

  void VisitTypeCheck::visitPatternVar(PatternVar *pattern_var)
  {
    /* Code For PatternVar Goes Here */

    std::cout << "\nVisiting Pattern var: " << printer.print(pattern_var) << std::endl;
    std::cout << "Identifier: " << pattern_var->stellaident_ << std::endl;
    std::cout << "Expected type: " << printer.print(expectedType) << std::endl;
    std::cout << "Var type: " << printer.print(lastVisitedType) << std::endl;

    std::pair<std::string, Type* > var_pair;
    var_pair.first = pattern_var->stellaident_;
    var_pair.second = lastVisitedType;
    context.insert(var_pair);

    for (auto &p: context)
        std::cout << "Currently in context: " << p.first << " of type " << printer.print(p.second) << std::endl;

    visitStellaIdent(pattern_var->stellaident_);
  }

  void VisitTypeCheck::visitALabelledPattern(ALabelledPattern *a_labelled_pattern)
  {
    /* Code For ALabelledPattern Goes Here */

    visitStellaIdent(a_labelled_pattern->stellaident_);
    if (a_labelled_pattern->pattern_)
      a_labelled_pattern->pattern_->accept(this);
  }

  void VisitTypeCheck::visitABinding(ABinding *a_binding)
  {
    /* Code For ABinding Goes Here */

    visitStellaIdent(a_binding->stellaident_);
    if (a_binding->expr_)
      a_binding->expr_->accept(this);
  }

  void VisitTypeCheck::visitSequence(Sequence *sequence)
  {
    /* Code For Sequence Goes Here */

    if (sequence->expr_1)
      sequence->expr_1->accept(this);
    if (sequence->expr_2)
      sequence->expr_2->accept(this);
  }

  void VisitTypeCheck::visitIf(If *if_) {
      /* Code For If Goes Here */

      std::cout << "\nVisiting if: expr1: " << printer.print(if_->expr_1)
                  << ", expr2: " << printer.print(if_->expr_2) << ", expr3: " << printer.print(if_->expr_3) << std::endl;

      for (auto &p: context)
          std::cout << "Currently in context: " << p.first << " of type " << printer.print(p.second) << std::endl;

      std::cout << "Expected type: " << printer.print(expectedType) << std::endl;
      auto expType = expectedType;

      std::string expr1 = printer.print(if_->expr_1);

      // Remove extra space sign from expr1 for proper matching expr1 and elements from context
      expr1 = expr1.substr(0, expr1.find(" "));

      if (expr1 != "true" && expr1 != "false") {
          // Looking for expr1 in the context
          if (auto search = context.find(expr1); search != context.end()){
              std::string type = printer.print(search->second);
              std::cout << "Type of found var: " << type << std::endl;

              if (type != "Bool ") {
                  if (auto type_fun = dynamic_cast<TypeFun* >(search->second)){
                      auto type_bool = dynamic_cast<Type* >(type_fun->type_);
                      std::string bool_str = printer.print(type_bool);
                      std::cout << "Return type of function: " << search->first << " is " << bool_str << std::endl;
                      if (bool_str != "Bool ") {
                          std::cout << "ERROR\tExpected Bool at line: " << if_->line_number << '\n';
                          exit(1);
                      }
                  } else {
                      std::cout << "ERROR\tExpected Bool at line: " << if_->line_number << '\n';
                      exit(1);
                  }
              }
          }
          else {
              std::cout << "ERROR\tExpected Bool at line: " << if_->line_number << '\n';
              exit(1);
          }
      }
      if (if_->expr_2)
          if_->expr_2->accept(this);
      if (if_->expr_3)
          if_->expr_3->accept(this);
      expectedType = expType;
  }

  void VisitTypeCheck::visitLet(Let *let)
  {
    /* Code For Let Goes Here */

    if (let->listpatternbinding_)
      let->listpatternbinding_->accept(this);
    if (let->expr_)
      let->expr_->accept(this);
  }

  void VisitTypeCheck::visitLetRec(LetRec *let_rec)
  {
    /* Code For LetRec Goes Here */

    if (let_rec->listpatternbinding_)
      let_rec->listpatternbinding_->accept(this);
    if (let_rec->expr_)
      let_rec->expr_->accept(this);
  }

  void VisitTypeCheck::visitLessThan(LessThan *less_than)
  {
    /* Code For LessThan Goes Here */

    if (less_than->expr_1)
      less_than->expr_1->accept(this);
    if (less_than->expr_2)
      less_than->expr_2->accept(this);
  }

  void VisitTypeCheck::visitLessThanOrEqual(LessThanOrEqual *less_than_or_equal)
  {
    /* Code For LessThanOrEqual Goes Here */

    if (less_than_or_equal->expr_1)
      less_than_or_equal->expr_1->accept(this);
    if (less_than_or_equal->expr_2)
      less_than_or_equal->expr_2->accept(this);
  }

  void VisitTypeCheck::visitGreaterThan(GreaterThan *greater_than)
  {
    /* Code For GreaterThan Goes Here */

    if (greater_than->expr_1)
      greater_than->expr_1->accept(this);
    if (greater_than->expr_2)
      greater_than->expr_2->accept(this);
  }

  void VisitTypeCheck::visitGreaterThanOrEqual(GreaterThanOrEqual *greater_than_or_equal)
  {
    /* Code For GreaterThanOrEqual Goes Here */

    if (greater_than_or_equal->expr_1)
      greater_than_or_equal->expr_1->accept(this);
    if (greater_than_or_equal->expr_2)
      greater_than_or_equal->expr_2->accept(this);
  }

  void VisitTypeCheck::visitEqual(Equal *equal)
  {
    /* Code For Equal Goes Here */

    if (equal->expr_1)
      equal->expr_1->accept(this);
    if (equal->expr_2)
      equal->expr_2->accept(this);
  }

  void VisitTypeCheck::visitNotEqual(NotEqual *not_equal)
  {
    /* Code For NotEqual Goes Here */

    if (not_equal->expr_1)
      not_equal->expr_1->accept(this);
    if (not_equal->expr_2)
      not_equal->expr_2->accept(this);
  }

  void VisitTypeCheck::visitTypeAsc(TypeAsc *type_asc)
  {
    /* Code For TypeAsc Goes Here */

    if (type_asc->expr_)
      type_asc->expr_->accept(this);
    if (type_asc->type_)
      type_asc->type_->accept(this);
  }

  void VisitTypeCheck::visitAbstraction(Abstraction *abstraction)
  {
      /* Code For Abstraction Goes Here */

      std::cout << "\nVisiting abstract function: fn" << std::endl;
      std::cout << "Expected type: " << printer.print(expectedType) << std::endl;
      // Save expectedType in the variable
      auto expType = expectedType;
      if (auto typeAbst = dynamic_cast<TypeFun* >(expectedType)) {
          std::cout << "Type of abstract function: " << printer.print(typeAbst) << std::endl;
          std::cout << "Return type for abstract function: " << printer.print(typeAbst->type_) << std::endl;
          expectedType = dynamic_cast<Type* >(typeAbst->type_);
          std::cout << "Expected type: " << printer.print(expectedType) << std::endl;
          //Creating lastVisitedType
          lastVisitedType = dynamic_cast<Type* >(typeAbst);
      }
      else {
          std::cout << "ERROR\tExpected abstract at line: " << abstraction->line_number << '\n';
          exit(1);
      }

      if (abstraction->listparamdecl_)
          abstraction->listparamdecl_->accept(this);
      if (abstraction->expr_)
          abstraction->expr_->accept(this);

      //Restore expectedType from variable
      expectedType = expType;
      std::cout << "Parameters of function: " << printer.print(abstraction->listparamdecl_) << std::endl;

      std::string param = printer.print(abstraction->listparamdecl_);
      std::string word = param.substr(0, param.find(" "));

      //Remove parameters from function
      context.erase(word);
  }

  void VisitTypeCheck::visitVariant(Variant *variant)
  {
    /* Code For Variant Goes Here */

    std::cout << "\nVisiting variant: " << printer.print(variant) << std::endl;
    std::cout << "Identifier: " << variant->stellaident_ << std::endl;
    std::cout << "Expr data: " << printer.print(variant->exprdata_) << std::endl;

    for (auto& p : context)
        std::cout << "Currently in context: "<< p.first << std::endl;

    auto expType = expectedType;
    std::cout << "Expected type: " << printer.print(expType) << std::endl;

    visitStellaIdent(variant->stellaident_);
    if (variant->exprdata_)
      variant->exprdata_->accept(this);
  }

  void VisitTypeCheck::visitMatch(Match *match)
  {
    /* Code For Match Goes Here */

    std::cout << "\nVisiting match: " << printer.print(match) << std::endl;
    std::cout << "List match case: " << printer.print(match->listmatchcase_) << std::endl;
    std::cout << "Match expr: " << printer.print(match->expr_) << std::endl;

    for (auto& p : context)
        std::cout << "Currently in context: "<< p.first << std::endl;

    auto expType = expectedType;

    if (match->expr_)
        match->expr_->accept(this);

    auto lisMatchcaseExpectedType = lastVisitedType;
    std::cout << "\nListMatchCase type: " << printer.print(lisMatchcaseExpectedType) << std::endl;

    auto listMatchCase = *match->listmatchcase_;

    for (int i = 0; i < listMatchCase.size(); i++){
        std::cout << "\nMatchCase type: " << printer.print(lisMatchcaseExpectedType) << std::endl;
        std::cout << "\nMatchCase: " << printer.print(listMatchCase[i]) << std::endl;

        if (auto matchCase = dynamic_cast<AMatchCase* >(listMatchCase[i])) {
            auto matchCaseExpr = matchCase->expr_;
            auto matchCasePattern = matchCase->pattern_;

            std::cout << "MatchCase Expr: " << printer.print(matchCaseExpr) << std::endl;
            std::cout << "MatchCase Pattern: " << printer.print(matchCasePattern) << std::endl;

            if (auto patternInl = dynamic_cast<PatternInl* >(matchCasePattern)){
                std::cout << "PatternInl: " << printer.print(patternInl) << std::endl;
                patternInl->accept(this);
                matchCaseExpr->accept(this);
                lastVisitedType = lisMatchcaseExpectedType;
            }
            else if (auto patternInr = dynamic_cast<PatternInr* >(matchCasePattern)){
                std::cout << "PatternInr: " << printer.print(patternInr) << std::endl;
                patternInr->accept(this);
                matchCaseExpr->accept(this);
                lastVisitedType = lisMatchcaseExpectedType;
            }
            else {
                std::cout << "ERROR\tUndefined pattern: " << match->line_number << '\n';
                exit(1);
            }
        } else{
            std::cout << "ERROR\tCasting from matchCase to AmatchCase gone wrong: " << match->line_number << '\n';
            exit(1);
        }
    }

    expectedType = expType;
  }

  void VisitTypeCheck::visitList(List *list)
  {
    /* Code For List Goes Here */

    if (list->listexpr_)
      list->listexpr_->accept(this);
  }

  void VisitTypeCheck::visitAdd(Add *add)
  {
    /* Code For Add Goes Here */

    if (add->expr_1)
      add->expr_1->accept(this);
    if (add->expr_2)
      add->expr_2->accept(this);
  }

  void VisitTypeCheck::visitSubtract(Subtract *subtract)
  {
    /* Code For Subtract Goes Here */

    if (subtract->expr_1)
      subtract->expr_1->accept(this);
    if (subtract->expr_2)
      subtract->expr_2->accept(this);
  }

  void VisitTypeCheck::visitLogicOr(LogicOr *logic_or)
  {
    /* Code For LogicOr Goes Here */

    if (logic_or->expr_1)
      logic_or->expr_1->accept(this);
    if (logic_or->expr_2)
      logic_or->expr_2->accept(this);
  }

  void VisitTypeCheck::visitMultiply(Multiply *multiply)
  {
    /* Code For Multiply Goes Here */

    if (multiply->expr_1)
      multiply->expr_1->accept(this);
    if (multiply->expr_2)
      multiply->expr_2->accept(this);
  }

  void VisitTypeCheck::visitDivide(Divide *divide)
  {
    /* Code For Divide Goes Here */

    if (divide->expr_1)
      divide->expr_1->accept(this);
    if (divide->expr_2)
      divide->expr_2->accept(this);
  }

  void VisitTypeCheck::visitLogicAnd(LogicAnd *logic_and)
  {
    /* Code For LogicAnd Goes Here */

    if (logic_and->expr_1)
      logic_and->expr_1->accept(this);
    if (logic_and->expr_2)
      logic_and->expr_2->accept(this);
  }

  void VisitTypeCheck::visitApplication(Application *application)
  {
      /* Code For Application Goes Here */
      std::cout << "\nVisiting application: " << printer.print(application) << std::endl;
      std::cout << "Application list expression: " << printer.print(application->listexpr_) << std::endl;
      std::cout << "Application expression: " << printer.print(application->expr_) << std::endl;
      for (auto& p : context)
          std::cout << "Currently in context : " << p.first << " of type " << printer.print(p.second) << std::endl;

      std::cout << "Expected type: " << printer.print(expectedType) << std::endl;

      // Save expectedType in the variable
      auto expType = expectedType;

      std::string expression = printer.print(application->expr_);
      std::string word = expression.substr(0, expression.find(" "));

      if (auto search = context.find(word); search != context.end()){
          auto var = search->first;
          auto var_type = search->second;
          std::cout << "Variable " << var << " of type " << printer.print(var_type) << " was found in context" << std::endl;
          if (auto varFuncType = dynamic_cast<TypeFun*>(var_type)){
              std::cout << "Variable " << var << " casted to function type: " << printer.print(varFuncType) << std::endl;
              std::cout << "List type:  " << printer.print(varFuncType->listtype_) << std::endl;
              std::cout << "Type:  " << printer.print(varFuncType->type_) << std::endl;
              expectedType = varFuncType->type_;
          } else {
              std::cout << "ERROR\tExpected application at line: " << application->line_number << '\n';
              exit(1);
          }
      } else {
          std::cout << "ERROR\tUndefined var " << printer.print(application->expr_) << " at line: " << application->line_number << '\n';
          exit(1);
      }

      if (application->expr_)
          application->expr_->accept(this);
      if (application->listexpr_)
          application->listexpr_->accept(this);

      // Make expected type as it was before falling into function
      expectedType = expType;
  }

  void VisitTypeCheck::visitDotRecord(DotRecord *dot_record)
  {
    /* Code For DotRecord Goes Here */

    if (dot_record->expr_)
      dot_record->expr_->accept(this);
    visitStellaIdent(dot_record->stellaident_);
  }

  void VisitTypeCheck::visitDotTuple(DotTuple *dot_tuple)
  {
    /* Code For DotTuple Goes Here */
    std::cout << "\nVisiting dot: " << printer.print(dot_tuple) << std::endl;

    for (auto& p : context)
        std::cout << "Currently in context: " << p.first << " of type: " << printer.print(p.second) << std::endl;

    std::string strExpType = printer.print(expectedType);
    std::cout << "Expected type: " << strExpType << std::endl;

    auto expType = expectedType;

    if (dot_tuple->expr_)
        dot_tuple->expr_->accept(this);

    expectedType = lastVisitedType;
    visitInteger(dot_tuple->integer_);
    std::cout << "Expected type: " << strExpType << std::endl;

    int pos = dot_tuple->integer_ - 1;

    if (auto tupleType = dynamic_cast<TypeTuple* >(expectedType)) {

        auto arrayOfTupleType = *tupleType->listtype_;

        if (arrayOfTupleType.size() >= pos + 1) {

            auto dotType = (*tupleType->listtype_)[pos];

            std::string strDotType = printer.print(dotType);

            if (strDotType != strExpType){
                std::cout << "ERROR\tType mismatch in dot Tuple at line: " << dot_tuple->line_number << '\n';
                exit(1);
            }
        }
        else {
            std::cout << "ERROR\tDot pos is out of range at line: " << dot_tuple->line_number << '\n';
            exit(1);
        }
    } else {
        std::cout <<"ERROR\tCannot cast expected type to tuple type" << std::endl;
        exit(1);
    }

    // Making lastVisitedType
    lastVisitedType = expType;
    expectedType = expType;
  }

  void VisitTypeCheck::visitTuple(Tuple *tuple)
  {
    /* Code For Tuple Goes Here */

    std::cout << "\nVisiting tuple: " << printer.print(tuple) << std::endl;

    for (auto& p : context)
        std::cout << "Currently in context: " << p.first << " of type: " << printer.print(p.second) << std::endl;

    auto expType = expectedType;
    std::cout << "Expected type: " << printer.print(expType) << std::endl;

    if (auto tupleType = dynamic_cast<TypeTuple* >(expectedType)){
        std::cout << "List type: " << printer.print(tupleType->listtype_) << std::endl;

        auto arrayOfExpectTypes = *tupleType->listtype_;
        int sizeOfExpectArray = arrayOfExpectTypes.size();
        std::cout << "Size of expected array: " << sizeOfExpectArray << std::endl;

        auto arrayOfExpr = *tuple->listexpr_;
        int sizeOfRealArray = arrayOfExpr.size();
        std::cout << "Size of real array: " << sizeOfRealArray << std::endl;

        if (sizeOfExpectArray != sizeOfRealArray){
            std::cout << "ERROR\tSize mismatch of tuple at line: " << tuple->line_number << '\n';
            exit(1);
        }

        for (int ind = 0; ind < sizeOfRealArray; ind++){
            std::cout << "\nVisiting element of array of expr" << std::endl;
            expectedType = arrayOfExpectTypes[ind];
            arrayOfExpr[ind]->accept(this);
        }
    } else {
        std::cout << "ERROR\tExpected Tuple at line: " << tuple->line_number << '\n';
        exit(1);
    }


    expectedType = expType;
    std::cout << "Expected type: " << printer.print(expType) << std::endl;
    // Making lastVisitedType
    lastVisitedType = expType;
  }

  void VisitTypeCheck::visitRecord(Record *record)
  {
    /* Code For Record Goes Here */

    std::cout << "\nVisiting record: " << printer.print(record) << std::endl;
    std::cout << "List binding: " << printer.print(record->listbinding_) << std::endl;

    for (auto& p : context)
        std::cout << "Currently in context: "<< p.first << std::endl;

    auto expType = expectedType;
    std::cout << "Expected type: " << printer.print(expType) << std::endl;

    if (auto recordType = dynamic_cast<TypeRecord* >(expectedType)){
        std::cout << "List record field type: " << printer.print(recordType->listrecordfieldtype_) << std::endl;

        auto arrayOfExpectBindings = *recordType->listrecordfieldtype_;
        int sizeOfExpectArray = arrayOfExpectBindings.size();
        std::cout << "Size of expected array: " << sizeOfExpectArray << std::endl;

        auto arrayOfBindings = *record->listbinding_;
        int sizeOfRealArray = arrayOfBindings.size();
        std::cout << "Size of real array: " << sizeOfRealArray << std::endl;

        if (sizeOfExpectArray != sizeOfRealArray){
            std::cout << "ERROR\tSize mismatch of record at line: " << record->line_number << '\n';
            exit(1);
        }
//        for (int ind = 0; ind < arrayOfBindings.size() - 1; ind++){
//            expectedType = arrayOfExpectBindings[ind];
//            arrayOfBindings[ind]->accept(this);
//            std::cout << "\nVisiting next element of array of bindings" << std::endl;
//        }
    } else {
        std::cout << "ERROR\tExpected Record at line: " << record->line_number << '\n';
        exit(1);
    }

    // Making lastVisitedType
    lastVisitedType = expectedType;

    if (record->listbinding_)
      record->listbinding_->accept(this);

    expectedType = expType;
  }

  void VisitTypeCheck::visitConsList(ConsList *cons_list)
  {
    /* Code For ConsList Goes Here */

    if (cons_list->expr_1)
      cons_list->expr_1->accept(this);
    if (cons_list->expr_2)
      cons_list->expr_2->accept(this);
  }

  void VisitTypeCheck::visitHead(Head *head)
  {
    /* Code For Head Goes Here */

    if (head->expr_)
      head->expr_->accept(this);
  }

  void VisitTypeCheck::visitIsEmpty(IsEmpty *is_empty)
  {
    /* Code For IsEmpty Goes Here */

    if (is_empty->expr_)
      is_empty->expr_->accept(this);
  }

  void VisitTypeCheck::visitTail(Tail *tail)
  {
    /* Code For Tail Goes Here */

    if (tail->expr_)
      tail->expr_->accept(this);
  }

  void VisitTypeCheck::visitInl(Inl *inl)
  {
    /* Code For Inl Goes Here */

    std::cout << "\nVisiting inl: " << printer.print(inl) << std::endl;
    std::cout << "Inl expr: " << printer.print(inl->expr_) << std::endl;
    std::cout << "Inl expected type: " << printer.print(expectedType) << std::endl;
    std::cout << "Inr type: " << printer.print(lastVisitedType) << std::endl;

    auto expType = expectedType;

    for (auto& p : context)
        std::cout << "Currently in context: "<< p.first << ", of type " << printer.print(p.second) << std::endl;

    expectedType = lastVisitedType;

    if (inl->expr_)
      inl->expr_->accept(this);

    expectedType = expType;
  }

  void VisitTypeCheck::visitInr(Inr *inr)
  {
    /* Code For Inr Goes Here */

    std::cout << "\nVisiting inr: " << printer.print(inr) << std::endl;
    std::cout << "Inr expr: " << printer.print(inr->expr_) << std::endl;
    std::cout << "Inr expected type: " << printer.print(expectedType) << std::endl;
    std::cout << "Inr type: " << printer.print(lastVisitedType) << std::endl;

    auto expType = expectedType;

    for (auto& p : context)
        std::cout << "Currently in context: "<< p.first << ", of type " << printer.print(p.second) << std::endl;

    expectedType = lastVisitedType;

    if (inr->expr_)
      inr->expr_->accept(this);

    expectedType = expType;
  }

  void VisitTypeCheck::visitSucc(Succ *succ)
  {
      /* Code For Succ Goes Here */
      std::cout << "\nVisiting succ: " << printer.print(succ) << std::endl;

      for (auto& p : context)
          std::cout << "Currently in context: "<< p.first << std::endl;

      std::string expType = printer.print(expectedType);
      std::cout << "Expected type: " << expType << std::endl;

      if (expType != "Nat " && expectedType != NULL){
          std::cout << "ERROR\tExpected Nat at line: " << succ->line_number << '\n';
          exit(1);
      }

      // Making lastVisitedType
      lastVisitedType = expectedType;

      if (succ->expr_)
          succ->expr_->accept(this);
  }

  void VisitTypeCheck::visitLogicNot(LogicNot *logic_not)
  {
    /* Code For LogicNot Goes Here */

    if (logic_not->expr_)
      logic_not->expr_->accept(this);
  }

  void VisitTypeCheck::visitPred(Pred *pred)
  {
    /* Code For Pred Goes Here */

    if (pred->expr_)
      pred->expr_->accept(this);
  }

  void VisitTypeCheck::visitIsZero(IsZero *is_zero)
  {
    /* Code For IsZero Goes Here */

    if (is_zero->expr_)
      is_zero->expr_->accept(this);
  }

  void VisitTypeCheck::visitFix(Fix *fix)
  {
    /* Code For Fix Goes Here */

    if (fix->expr_)
      fix->expr_->accept(this);
  }

  void VisitTypeCheck::visitNatRec(NatRec *nat_rec)
  {
      /* Code For NatRec Goes Here */
      std::cout << "\nVisiting: Nat::rec" << std::endl;
      std::cout << "Expected type: " << printer.print(expectedType) << std::endl;

      //Save expectedType into temporary variable
      auto expType = expectedType;

      std::cout << "Expr1: " << printer.print(nat_rec->expr_1) << std::endl;
      std::cout << "Expr2: " << printer.print(nat_rec->expr_2) << std::endl;
      std::cout << "Expr3: " << printer.print(nat_rec->expr_3) << std::endl;

      if (nat_rec->expr_1)
          nat_rec->expr_1->accept(this);
      if (nat_rec->expr_2)
          nat_rec->expr_2->accept(this);

      // Creating type of exp3 based on type of expr2
      Type *typeT = lastVisitedType;    // T
      ListType *args1 = new ListType();
      args1->push_back(typeT);
      Type *fun1 = new TypeFun(args1, typeT); // fn(T) -> T

      TypeNat *type_Nat = new TypeNat();   // Nat
      ListType *args2 = new ListType();
      args2->push_back(type_Nat);
      Type *fun2 = new TypeFun(args2, fun1);   // fn(Nat) -> (fn(T) -> T)

      std::cout << "Generated function: " << printer.print(fun2) << std::endl;

      expectedType = fun2;
      if (nat_rec->expr_3)
          nat_rec->expr_3->accept(this);

      //Restore expectedType from variable
      expectedType = expType;
  }

  void VisitTypeCheck::visitFold(Fold *fold)
  {
    /* Code For Fold Goes Here */

    if (fold->type_)
      fold->type_->accept(this);
    if (fold->expr_)
      fold->expr_->accept(this);
  }

  void VisitTypeCheck::visitUnfold(Unfold *unfold)
  {
    /* Code For Unfold Goes Here */

    if (unfold->type_)
      unfold->type_->accept(this);
    if (unfold->expr_)
      unfold->expr_->accept(this);
  }

  void VisitTypeCheck::visitConstTrue(ConstTrue *const_true)
  {
      /* Code For ConstTrue Goes Here */
      std::cout << "\nVisiting const true: " << printer.print(const_true) << std::endl;

      for (auto& p : context)
          std::cout << "Currently in context : " << p.first << std::endl;

      std::string strExpType = printer.print(expectedType);
      std::cout << "Expected type: " << strExpType << std::endl;

      if (strExpType != "Bool "){
          std::cout << "ERROR\tExpected Bool at line: " << const_true->line_number << '\n';
          exit(1);
      }

      // Making lastVisitedType
      lastVisitedType = expectedType;
  }

  void VisitTypeCheck::visitConstFalse(ConstFalse *const_false) {
      /* Code For ConstFalse Goes Here */
      std::cout << "\nVisiting const false: " << printer.print(const_false) << std::endl;
      for (auto &p: context)
            std::cout << "Currently in context : " << p.first << std::endl;

      std::string strExpType = printer.print(expectedType);
      std::cout << "Expected type: " << strExpType << std::endl;

      if (strExpType != "Bool "){
          std::cout << "ERROR\tExpected Bool at line: " << const_false->line_number << '\n';
          exit(1);
      }

      // Making lastVisitedType
      lastVisitedType = expectedType;
  }

  void VisitTypeCheck::visitConstUnit(ConstUnit *const_unit)
  {
    /* Code For ConstUnit Goes Here */
      std::cout << "\nVisiting const unit: " << printer.print(const_unit) << std::endl;
      for (auto &p: context)
          std::cout << "Currently in context : " << p.first << std::endl;

      std::string strExpType = printer.print(expectedType);
      std::cout << "Expected type: " << strExpType << std::endl;

      if (strExpType != "Unit "){
          std::cout << "ERROR\tExpected Unit at line: " << const_unit->line_number << '\n';
          exit(1);
      }

      // Making lastVisitedType
      lastVisitedType = expectedType;
  }

  void VisitTypeCheck::visitConstInt(ConstInt *const_int)
  {
      /* Code For ConstInt Goes Here */
      std::cout << "\nVisiting const int: " << const_int->integer_ << std::endl;

      for (auto& p : context)
          std::cout << "Currently in context : " << p.first << std::endl;

      std::string strExpType = printer.print(expectedType);
      std::cout << "Expected type: " << strExpType << std::endl;

      if (strExpType != "Nat "){
          std::cout << "ERROR\tExpected Nat at line: " << const_int->line_number << '\n';
          exit(1);
      }

      // Making lastVisitedType
      lastVisitedType = expectedType;

      visitInteger(const_int->integer_);
  }

  void VisitTypeCheck::visitVar(Var *var)
  {
      /* Code For Var Goes Here */
      std::cout << "\nVisiting var: " << var->stellaident_ << std::endl;

      for (auto& p : context)
          std::cout << "Currently in context : " << p.first << " of type " << printer.print(p.second) << std::endl;

      std::string strExpectedType = printer.print(expectedType);
      std::cout << "Expected type: " << strExpectedType << std::endl;

      auto expType = expectedType;

      // Looking for var in context
      if (auto search = context.find(var->stellaident_); search != context.end()){
          auto var_type = search->second;

          std::string strVar_type = printer.print(var_type);
          std::cout << "Var type: " << strVar_type << std::endl;

          // Making lastVisitedType
          lastVisitedType = var_type;
      }
      else {
          std::cout << "ERROR\tUndefined var " << printer.print(var) << "at line:" << var->line_number << '\n';
          exit(1);
      }


      visitStellaIdent(var->stellaident_);

      expectedType = expType;
  }

  void VisitTypeCheck::visitAPatternBinding(APatternBinding *a_pattern_binding)
  {
    /* Code For APatternBinding Goes Here */

    if (a_pattern_binding->pattern_)
      a_pattern_binding->pattern_->accept(this);
    if (a_pattern_binding->expr_)
      a_pattern_binding->expr_->accept(this);
  }

  void VisitTypeCheck::visitAVariantFieldType(AVariantFieldType *a_variant_field_type)
  {
    /* Code For AVariantFieldType Goes Here */

    visitStellaIdent(a_variant_field_type->stellaident_);
    if (a_variant_field_type->optionaltyping_)
      a_variant_field_type->optionaltyping_->accept(this);
  }

  void VisitTypeCheck::visitARecordFieldType(ARecordFieldType *a_record_field_type)
  {
    /* Code For ARecordFieldType Goes Here */

    visitStellaIdent(a_record_field_type->stellaident_);
    if (a_record_field_type->type_)
      a_record_field_type->type_->accept(this);
  }

  void VisitTypeCheck::visitATyping(ATyping *a_typing)
  {
    /* Code For ATyping Goes Here */

    if (a_typing->expr_)
      a_typing->expr_->accept(this);
    if (a_typing->type_)
      a_typing->type_->accept(this);
  }

  void VisitTypeCheck::visitListStellaIdent(ListStellaIdent *list_stella_ident)
  {
    for (ListStellaIdent::iterator i = list_stella_ident->begin(); i != list_stella_ident->end(); ++i)
    {
      visitStellaIdent(*i);
    }
  }

  void VisitTypeCheck::visitListExtensionName(ListExtensionName *list_extension_name)
  {
    for (ListExtensionName::iterator i = list_extension_name->begin(); i != list_extension_name->end(); ++i)
    {
      visitExtensionName(*i);
    }
  }

  void VisitTypeCheck::visitListExtension(ListExtension *list_extension)
  {
    for (ListExtension::iterator i = list_extension->begin(); i != list_extension->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListDecl(ListDecl *list_decl)
  {
    for (ListDecl::iterator i = list_decl->begin(); i != list_decl->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListLocalDecl(ListLocalDecl *list_local_decl)
  {
    for (ListLocalDecl::iterator i = list_local_decl->begin(); i != list_local_decl->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListAnnotation(ListAnnotation *list_annotation)
  {
    for (ListAnnotation::iterator i = list_annotation->begin(); i != list_annotation->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListParamDecl(ListParamDecl *list_param_decl)
  {
    for (ListParamDecl::iterator i = list_param_decl->begin(); i != list_param_decl->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListType(ListType *list_type)
  {
    for (ListType::iterator i = list_type->begin(); i != list_type->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListMatchCase(ListMatchCase *list_match_case)
  {
    for (ListMatchCase::iterator i = list_match_case->begin(); i != list_match_case->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListPattern(ListPattern *list_pattern)
  {
    for (ListPattern::iterator i = list_pattern->begin(); i != list_pattern->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListLabelledPattern(ListLabelledPattern *list_labelled_pattern)
  {
    for (ListLabelledPattern::iterator i = list_labelled_pattern->begin(); i != list_labelled_pattern->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListBinding(ListBinding *list_binding)
  {
    for (ListBinding::iterator i = list_binding->begin(); i != list_binding->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListExpr(ListExpr *list_expr)
  {
    for (ListExpr::iterator i = list_expr->begin(); i != list_expr->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListPatternBinding(ListPatternBinding *list_pattern_binding)
  {
    for (ListPatternBinding::iterator i = list_pattern_binding->begin(); i != list_pattern_binding->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListVariantFieldType(ListVariantFieldType *list_variant_field_type)
  {
    for (ListVariantFieldType::iterator i = list_variant_field_type->begin(); i != list_variant_field_type->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitListRecordFieldType(ListRecordFieldType *list_record_field_type)
  {
    for (ListRecordFieldType::iterator i = list_record_field_type->begin(); i != list_record_field_type->end(); ++i)
    {
      (*i)->accept(this);
    }
  }

  void VisitTypeCheck::visitInteger(Integer x)
  {
    /* Code for Integer Goes Here */
  }

  void VisitTypeCheck::visitChar(Char x)
  {
    /* Code for Char Goes Here */
  }

  void VisitTypeCheck::visitDouble(Double x)
  {
    /* Code for Double Goes Here */
  }

  void VisitTypeCheck::visitString(String x)
  {
    /* Code for String Goes Here */
  }

  void VisitTypeCheck::visitIdent(Ident x)
  {
    /* Code for Ident Goes Here */
  }

  void VisitTypeCheck::visitStellaIdent(StellaIdent x)
  {
    /* Code for StellaIdent Goes Here */
  }

  void VisitTypeCheck::visitExtensionName(ExtensionName x)
  {
    /* Code for ExtensionName Goes Here */
  }

}
