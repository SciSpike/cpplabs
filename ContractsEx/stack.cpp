/*
 * Copyright SciSpike
 *
 * Implementation file for the Stack class
 */

#include "stack.h"
#include "contracts.h"
#include <iostream>

using namespace std;
/*
 * The stack constructor
 */
Stack::Stack()
   : myTopIndex( -1 ) {

   cout << "In the Constructor of Stack." << endl;

   for( int i=0; i<MAX_STACK_SIZE; i++ ) {
      myArray[i] = 0;
   }
}

/*
 * The stack destructor
 */
Stack::~Stack() {
   cout << "In Destructor of Stack." << endl;
}

/*
 * The push implementation
 */
void Stack::push( int value ) {
	PRE_CONDITIONS(getSize() < getMax());
	REMEMBER(int, myTopIndex);
      //TODO Add Remember myTopIndex by contracts
   
      //TODO Add precondition that (myTopIndex+1) < MAX_STACK_SIZE );
   
   myArray[++myTopIndex] = value;

   POST_CONDITIONS(OLD(myTopIndex) == myTopIndex - 1);
   POST_CONDITIONS(myArray[myTopIndex] == value);
      //TODO Add Post Condition (myTopIndex == OLD(myTopIndex) + 1) && 
      //     (myArray[myTopIndex] == value) );
}

/*
 * The pop implementation
 */
int Stack::pop() {
      //TODO Add Precondition that myTopIndex is in between 0 
      //     MAX_STACK_SIZE-1
   return( myArray[myTopIndex--] );
}
