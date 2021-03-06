/***************************************************************************
			   visit_stmtNumber.cpp  -  description
			      -------------------
     begin                : Aug 31 2001
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
#include "visitor/visit_stmtNumber.h"

// ---------------------------------------------------------------------------
//  MEMBERS
// ---------------------------------------------------------------------------


// visit statements
void
visit_stmtNumber::visit_break_stmt (break_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(BREAK_STMT);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
	
  return;
}

void
visit_stmtNumber::visit_continue_stmt (continue_stmt_n * np)
{
  nast_node *child;

  snData->addStmt(CONTINUE_STMT);

  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_stmtNumber::visit_scope_stmt (scope_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(SCOPE_STMT);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_stmtNumber::visit_decl_stmt (decl_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(DECL_STMT);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_stmtNumber::visit_expr_stmt (expr_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(EXPR_STMT);
  
  // Loop expr ?
  if (np->hasEdgeName(EXPRESSION_EDGE)) {
    child = np->edgeName(EXPRESSION_EDGE);
    if (child->getCode() == LOOP_EXPR) 
      child->accept(*this);
  }
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_stmtNumber::visit_goto_stmt (goto_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(GOTO_STMT);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  if (np->hasEdgeName(DESTINATION_EDGE)) {
    child = np->edgeName(DESTINATION_EDGE);
    child->accept(*this);
  }

  return;
}

void
visit_stmtNumber::visit_label_stmt (label_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(LABEL_STMT);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_stmtNumber::visit_return_stmt (return_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(RETURN_STMT);

  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_stmtNumber::visit_if_stmt (if_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(IF_STMT);
  
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
  
  return;
}

void
visit_stmtNumber::visit_switch_stmt (switch_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(SWITCH_STMT);
  
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
visit_stmtNumber::visit_for_stmt (for_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(FOR_STMT);
  
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
visit_stmtNumber::visit_while_stmt (while_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(WHILE_STMT);
  
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
visit_stmtNumber::visit_do_stmt (do_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(DO_STMT);
  
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
visit_stmtNumber::visit_compound_stmt (compound_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(COMPOUND_STMT);

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
visit_stmtNumber::visit_asm_stmt (asm_stmt_n * np)
{
  nast_node *child;
  
  snData->addStmt(ASM_STMT);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}

void
visit_stmtNumber::visit_othr_stmt (othr_stmt_n * np)
{
  nast_node *child;

  snData->addStmt(np->getCode());
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}


void
visit_stmtNumber::visit_othr_expr (othr_expr_n *np)
{
  nast_node *child;
  
  if (np->getCode() == LOOP_EXPR) {
    if (np->hasEdgeName(BODY_EDGE)) {
      child = np->edgeName(BODY_EDGE);
      child->accept(*this);
    }
  }
  
  return;
}


void 
visit_stmtNumber::visit_case_label(case_label_n *np) 
{
  nast_node *child;
  
  snData->addStmt(CASE_LABEL);
  
  if (np->hasEdgeName(NEXT_STMT_EDGE)) {
    child = np->edgeName(NEXT_STMT_EDGE);
    child->accept(*this);
  }
  
  return;
}
