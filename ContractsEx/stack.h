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

   void push( int value );
   int  pop();
   int  getSize() const { return myTopIndex; }
   int  getMax() const { return MAX_STACK_SIZE; }

protected:
      // Present index 0-MAX_STACK_SIZE-1 or -1 if no element.
   int myTopIndex; 
   int myArray[MAX_STACK_SIZE]; // Array to hold data
};

#endif // STACK_H
