/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Assignment Operator Excercise.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream.h>
#include "expression.h"

int main () {
   // (X+(Y/2))*(Y-7)
  Expression<int>* e =
    new Multiplier<int> ( 
      (new Adder<int> ( 
         new Variable<int>("X"),
	      new Divider<int> ( 
            new Variable<int> ("Y"), 
            new Constant<int> (2))
	    )
      ),
      (new Subtracter<int> (
         new Variable<int>("Y"), 
         new Constant<int>(7)))
      );

  e->setVariable("X",10);			// set X = 20
  e->setVariable("Y",20);			// set Y = 15
  int i = e->getValue();			// evaluate the expression
  cout << "Result = " << i << "\n";
  return 0;
}
