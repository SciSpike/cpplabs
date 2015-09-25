/*
 * Copyright SciSpike
 *
 * Implementation file for main
 */

#include <iostream>
#include "stack.h"

using namespace std;

#define MAX_STACK_SIZE 5


int main() {

   cout << "Exceptions Exercise Program" << endl;

   cout << "Testing Stack..." << endl;
      //TODO Add the try block
   {
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
      // TODO See this catch ( IDException exception )
   {
         //TODO Uncomment this
         //cout << "Handling Exception:" << exception.getMessage() << endl;
   }
      // TODO Add generic catch (...)
   {
      cout << "Handling Exception: UNKNOWN EXCEPTION" << endl;
   }


   cout << "\n\nEnd of testing..." << endl;
   return 0;
}
