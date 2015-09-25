/*
 * Copyright SciSpike
 *
 * Implementation file for main
 */

#include <iostream>
#include "stack.h"

 using namespace std;
 

int main() {
  cout << "Contracts Exercise Program" << endl;

  // Creating Stack on the stack!
  Stack stack;

  cout << "Testing PRE_CONDITION failure by popping empty stack..."
	  << endl;
  stack.pop(); // Comment this test other condition


  for( int i=0; i<MAX_STACK_SIZE; i++ )
	  stack.push( i + MAX_STACK_SIZE );

  cout << "Test PRE_CONDITIONS, REMEMBER and POST_CONDITIONS" << endl;
//  stack.push( 100 );

  cout << "End of testing..." << endl;

  return 0;
}
