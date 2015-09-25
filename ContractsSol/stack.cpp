/*
 * Copyright SciSpike
 *
 * Implementation file for the Stack class
 */

#define CONTRACTS

#include "stack.h"
#include "contracts.h"
#include <iostream>
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

  REMEMBER( int, myTopIndex );
  PRE_CONDITIONS( getSize() < getMax() );
  
  myArray[++myTopIndex] = value;

  POST_CONDITIONS( (myTopIndex == OLD(myTopIndex) + 1) && 
	               (myArray[myTopIndex] == value) );
}

/*
 * The pop implementation
 */
int Stack::pop() {
   REMEMBER( int, myTopIndex );
   PRE_CONDITIONS( getSize() > 0 );
          
   int retValue = myArray[myTopIndex--];

   POST_CONDITIONS( retValue == myArray[ OLD(myTopIndex) ] );
   POST_CONDITIONS( myTopIndex == OLD(myTopIndex) - 1 );
   return( retValue );
}
