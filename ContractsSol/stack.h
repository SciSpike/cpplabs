#ifndef STACK_H
#define STACK_H

/*
 * Copyright SciSpike
 *
 * Declaration of the Stack class
 */

#define MAX_STACK_SIZE 5

class Stack {
public:
   Stack();  // Will use Compiler's copy as assignement operator
   ~Stack();

      /*
       * Operations
       */
   void push( int value ); // pre: getSize() < getMax()
   int  pop(); // pre: getSize() > 0

      /*
       * Queries
       */
   int getSize() const { return myTopIndex+1; }
   int getMax() const { return MAX_STACK_SIZE; }

protected:
      // Present index 0-MAX_STACK_SIZE-1 or -1 if no element.
   int myTopIndex; 
   int myArray[MAX_STACK_SIZE]; // Array to hold data
};

#endif // STACK_H
