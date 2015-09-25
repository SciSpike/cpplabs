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
 

  // Using templates to create a Stack of int; Also uses templates
  // to initialize the array size.
  Stack<int,10> intStack;
  cout << "Testing IntStack...By pushing 1." << endl;
  intStack.push( 1 );
  cout << "Poping out:" << intStack.pop() << endl;

  // Using the same template code to create a Stack of Person 
  // objects. Also uses templates to initialize the array size.
  Stack<Person,5> personStack;
  Person doe("John Doe", 23 );
  cout << "Testing PersonStack...By pushing Person:" 
	    << doe << endl;
  personStack.push( doe );
  cout << "Poping out:" << personStack.pop() << endl;

  cout << "End of testing..." << endl;

  return 0;
}
