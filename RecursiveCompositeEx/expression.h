#ifndef EXPRESSION_H
#define EXPRESSION_H

/**************************************************************
 *  
 * File: expression.h
 *
 * Description: This file contains a set a framework for 
 *  runtime composable binary expressions.
 *  The expressions are built by connectiong objects in a
 *  binary tree like structure. Each node in the tree may be
 *  a constant, a variable, a binary expression (+, -, /, * );
 *  The classes defined are:
 *  - Constant (leaf node)
 *  - Variable (leaf node)
 *  - Divider
 *  - Multiplier
 *  - Adder
 *  - Subtracter
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <string>
using namespace std;

/* Pre-Declarations */

/* Constants and defines */

/****************************************************************
 *
 * Description:  Expression defines the interface for all 
 *  expressions. 
 *  - getValue:    Returns the value of the expression
 *  - setVariable: Sets all variables decendent from the expression
 *                 with the corresponding name.
 * Exceptions: None
 *
 ***************************************************************/
template<class T>
class Expression { 
public:
  virtual T getValue() const = 0;
  virtual void setVariable( const char* name, T value ) {}
  virtual ~Expression() {}
};

/****************************************************************
 *
 * Description:  A Constant is a value that is set upon creation
 *               and never changed.

 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class Constant : public Expression<T> { 
public:
   Constant( T c ) {
	   this->value = c;
   }
  virtual T getValue() const {
	  return this->value;
  }
  virtual ~Constant(){}
private:
  T value;
};

/****************************************************************
 *
 * Description:  A Variable is a value that may be changed during
 *               runtime. Note that the value is initialized to 
 *               0.
 *
 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class Variable : public Expression<T> {
public:
  Variable (const char* s) {
	  this->name = s;
  }
  virtual T getValue() const {
	  return this->value;
  }
  virtual void setVariable( const char* vn, T v ) {
	  if (this->name == vn) {
		  this->value = v;
	  }
  }
  virtual ~Variable(){}
private:
  string name;
  T value;
};

/****************************************************************
 *
 * Description:  A BinaryExpression is an abstract base class for
 *               all binary expressions. Each binary expression
 *               has a left side and a right side. This class
 *               could handle the extraction of values from 
 *               the left and right expression, then delegate
 *               to the subclasses to calculate the value...
 *
 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class BinaryExpression : public Expression<T> {
  //TODO: It would probably be an advantage to have a superclass for the various binary expressions
  //TODO: What do Multiplier/Adders/Subtracters/... have in common?
};

/****************************************************************
 *
 * Description:  The multiplier performs multiplication.
 *
 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class Multiplier : public BinaryExpression<T> {
  // TODO: Implement the Multiplier
};

/****************************************************************
 *
 * Description:  The Adder performs addition.
 *
 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class Adder : public BinaryExpression<T> {
  // TODO: Implement the Adder
};

/****************************************************************
 *
 * Description:  The Subtracter performs subtraction.
 *
 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class Subtracter : public BinaryExpression<T> {
  // TODO: Implement the Subtracter
};

/****************************************************************
 *
 * Description:  The Divider performs division.
 *
 * Exceptions: None
 *
 ***************************************************************/
template <class T>
class Divider : public BinaryExpression<T> {
  // TODO: Implement the Divider
};

#endif

