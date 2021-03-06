/***************************************************************************
			   visit_exprNumber.cpp  -  description
			      -------------------
     begin                : Sept 1 2001
     copyright            : (C) 2001 by Gianluca Masone
     email                : lucas75it@yahoo.it
***************************************************************************/
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include "visitor/visit_exprNumber.h"

// ---------------------------------------------------------------------------
//  MEMBERS
// ---------------------------------------------------------------------------

// visit statements
void
visit_exprNumber::visit_break_stmt (break_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_continue_stmt (continue_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_scope_stmt (scope_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_decl_stmt (decl_stmt_n * np)
{
  nast_node *child;

  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_expr_stmt (expr_stmt_n * np)
{
  nast_node *child;

  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(EXPRESSION_EDGE)) {
    child = np->edgeName(EXPRESSION_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_goto_stmt (goto_stmt_n * np)
{
  nast_node *child;

  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(DESTINATION_EDGE)) {
    child = np->edgeName(DESTINATION_EDGE);
    child->accept(*this);
  }
  
}

void
visit_exprNumber::visit_label_stmt (label_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_return_stmt (return_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(EXPRESSION_EDGE)) {
    child = np->edgeName(EXPRESSION_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_if_stmt (if_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(THEN_EDGE)) {
    child = np->edgeName(THEN_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(ELSE_EDGE)) {
    child = np->edgeName(ELSE_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(CONDITION_EDGE)) {
    child = np->edgeName(CONDITION_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_switch_stmt (switch_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(BODY_EDGE)) {
    child = np->edgeName(BODY_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(CONDITION_EDGE)) {
    child = np->edgeName(CONDITION_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_for_stmt (for_stmt_n * np)
{
  nast_node *child;

  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(BODY_EDGE)) {
    child = np->edgeName(BODY_EDGE);
    child->accept(*this);
  }

  if (np->hasEdgeName(CONDITION_EDGE)) {
    child = np->edgeName(CONDITION_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(EXPRESSION_EDGE)) {
    child = np->edgeName(EXPRESSION_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(INITIALIZATION_EDGE)) {
    child = np->edgeName(INITIALIZATION_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_while_stmt (while_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(BODY_EDGE)) {
    child = np->edgeName(BODY_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(CONDITION_EDGE)) {
    child = np->edgeName(CONDITION_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_do_stmt (do_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(BODY_EDGE)) {
    child = np->edgeName(BODY_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(CONDITION_EDGE)) {
    child = np->edgeName(CONDITION_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_compound_stmt (compound_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(BODY_EDGE)) {
    child = np->edgeName(BODY_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_asm_stmt (asm_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_othr_stmt (othr_stmt_n * np)
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}



// visit expressions
void
visit_exprNumber::visit_unary_expr (unary_expr_n *np)
{
  nast_node *child;
  
  enData->addExpr(np->getCode());

  if (np->hasEdgeName(OPERAND_0_EDGE)) {
    child = np->edgeName(OPERAND_0_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_binary_expr (binary_expr_n *np)
{
  nast_node *child;

  enData->addExpr(np->getCode());

  if (np->hasEdgeName(OPERAND_0_EDGE)) {
    child = np->edgeName(OPERAND_0_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(OPERAND_1_EDGE)) {
    child = np->edgeName(OPERAND_1_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_ternary_expr (ternary_expr_n *np)
{
  nast_node *child;

  enData->addExpr(np->getCode());
    
  if (np->hasEdgeName(CONDITION_EDGE)) {
    child = np->edgeName(CONDITION_EDGE);
    child->accept(*this);
  }

  if (np->hasEdgeName(THEN_VALUE_EDGE)) {
    child = np->edgeName(THEN_VALUE_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(ELSE_VALUE_EDGE)) {
    child = np->edgeName(ELSE_VALUE_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_ref_expr (ref_expr_n *np)
{
  nast_node *child;

  enData->addExpr(np->getCode());

  if (np->hasEdgeName(OPERAND_0_EDGE)) {
    child = np->edgeName(OPERAND_0_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(OPERAND_1_EDGE)) {
    child = np->edgeName(OPERAND_1_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(OPERAND_2_EDGE)) {
    child = np->edgeName(OPERAND_2_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(AGGREGATE_EDGE)) {
    child = np->edgeName(AGGREGATE_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(FIELD_EDGE)) {
    child = np->edgeName(FIELD_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(ARRAY_EDGE)) {
    child = np->edgeName(ARRAY_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(INDEX_EDGE)) {
    child = np->edgeName(INDEX_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_exprNumber::visit_othr_expr (othr_expr_n *np)
{
  nast_node *child;

  enData->addExpr(np->getCode());
  
  if (np->getCode() == LOOP_EXPR) {
    if (np->hasEdgeName(BODY_EDGE)) {
      child = np->edgeName(BODY_EDGE);
      child->accept(*this);
    }
  }
  
  if (np->getCode() == CALL_EXPR) {
    
    // visit argument to build the expression
    if (np->hasEdgeName(ARGUMENTS_EDGE)) {
      child = np->edgeName(ARGUMENTS_EDGE);
      child->accept(*this);
    }

    // visit the function : We can have a variable with pointer to function
    if (np->hasEdgeName(FUNCTION_EDGE)) {
      child = np->edgeName(FUNCTION_EDGE);
      child->accept(*this);
    }

  }

  // used for the temporary object linke the var V in function call foo(V,10)
  if (np->getCode() == TARGET_EXPR) {
    
    if (np->hasEdgeName(INITIALIZER_EDGE)) {
      child = np->edgeName(INITIALIZER_EDGE);
      child->accept(*this);
    }

  }

  if (np->hasEdgeName(OPERAND_0_EDGE)) {
    child = np->edgeName(OPERAND_0_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(OPERAND_1_EDGE)) {
    child = np->edgeName(OPERAND_1_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(OPERAND_2_EDGE)) {
    child = np->edgeName(OPERAND_2_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_exprNumber::visit_tree_list (tree_list_n *np)
{
  nast_node *child;
  
  // get the type of the current type_n
  if (np->hasEdgeName(VALUE_EDGE)) {
    child = np->edgeName(VALUE_EDGE);
    child->accept(*this);
  }
  
  // visit next tree_list
  if (np->hasEdgeName(NEXT_EDGE)) {
    child = np->edgeName(NEXT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void 
visit_exprNumber::visit_case_label(case_label_n *np) 
{
  nast_node *child;
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }

  return;
}


