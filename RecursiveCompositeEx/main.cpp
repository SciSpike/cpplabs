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
#include <iostream>
#include "expression.h"

using namespace std;

int main () {
   // (8/X-9)*98*(Y/6+7)
  Expression<int> *e =
    new Multiplier<int>
    (
      new Multiplier<int> 
      (
         new Constant<int> (98),
         new Adder<int> 
         (
            new Divider<int> 
            (
               new Variable<int>( "Y" ),
               new Constant<int>( 6 )
            ),
            new Constant<int>( 7 )
         )
      ),
      new Subtracter<int>
      (
         new Divider<int>
         (
            new Constant<int>( 8 ),
            new Variable<int>( "X" )
         ),
         new Constant<int>( 9 )
      )
   );

  e->setVariable("X", 2);			// set X = 2
  e->setVariable("Y",12);			// set Y = 12
  int i = e->getValue();			// evaluate the expression

  // Should print "Result = -4410"
  cout << "Result = " << i << "\n";

  delete e;

  return 0;
}
