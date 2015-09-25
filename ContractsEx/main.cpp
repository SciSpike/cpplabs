/*
 * Copyright SciSpike
 */

#include <iostream>
#include "stack.h"

 using namespace std;
 

// TODO: Define CONTRACTS in the compilation environment
// Use the following path through the main menu:
//    Project | Settings | C++ (tab) | General (Category)
// Add CONTRACTS to the comma delimited list of
// "PreProcessor definitions"


int main() {
   cout << "Contracts Exercise Program" << endl;

   Stack stack;

   cout << "Testing PRE_CONDITION failure by popping empty stack..."
        << endl;
   stack.pop(); // TODO (after first test) Comment this test push


   for( int i=0; i<MAX_STACK_SIZE; i++ )
      stack.push( i + MAX_STACK_SIZE );

   cout << "Test post conditions by pushing one time to many..." << endl;
   stack.push( 100 );

   cout << "End of testing..." << endl;

   return 0;
}
