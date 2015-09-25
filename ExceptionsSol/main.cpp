/*
 * Copyright SciSpike
 *
 * Implementation file for main
 */

#include <iostream>
#include "stack.h"
#include "id_exception.h"

#define MAX_STACK_SIZE 5

using namespace std;

int main() {

   cout << "Exceptions Exercise Program" << endl;

   cout << "Testing Stack..." << endl;
   try {
      Stack<int,MAX_STACK_SIZE> stack;

      cout << "Testing Stack underflow." << endl;
      stack.pop();  // Comment this to test overflow

      cout << "Inserting " << MAX_STACK_SIZE << " value..." 
           << endl;
      for( int i=0; i<MAX_STACK_SIZE; i++ )
         stack.push( i+1 );

      cout << "Testing Stack overflow." << endl;
      stack.push( 100 );
   }
   catch ( IDException exception ) {
      cout << "Handling Exception:" << exception.getMessage() 
           << endl;
   }
   catch (...) {
      cout << "Handling Exception: UNKNOWN EXCEPTION" << endl;
   }


   cout << "End of testing..." << endl;
   return 0;
}
