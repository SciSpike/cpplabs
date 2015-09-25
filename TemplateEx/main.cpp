/*
 * Copyright SciSpike
 *
 * Implementation file for main
 */

#include <iostream.h>
#include "stack.h"
#include "person.h"

int main() {
   cout << "Templates Exercise Program" << endl;

   cout << "Testing Stack..." << endl;
 
      // use a templated statc of int's
      // TODO This should work: Stack<int,10> intStack;
   cout << "Testing IntStack...By pushing 1." << endl;
      // TODO This should work: intStack.push( 1 );
      // TODO This should work: cout << "Poping out:" << intStack.pop() << endl;

      // Use the same source code as for the stack of int now for
      // persons
      // TODO This should work: Stack<Person,5> personStack;
   Person doe("John Doe", 23 );
   cout << "Testing PersonStack...By pushing Person:" 
        << doe << endl;
      // TODO This should work: personStack.push( doe );
      // TODO This should work: cout << "Poping out:" << personStack.pop() << endl;

   cout << "End of testing..." << endl;

   return 0;
}
