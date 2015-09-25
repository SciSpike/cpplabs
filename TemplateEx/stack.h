#ifndef STACK_H
#define STACK_H

/*
 * Copyright SciSpike
 *
 * Declaration of the IntStack
 */

// TODO convert this IntStack implementation into a generic
//      stack implementation for any type T and with any MAX_SIZE.
//      default the MAX_SIZE to be 10.  Outline-define some
//      of the member functions.

const int MAX_SIZE = 10;
class IntStack {
public:
   IntStack() {
      count = 0;
   }
   void push( int element ) {
      listOfElements[count] = element;
      count++;
   }
   int pop() {
      count--;
      return listOfElements[count];
   }
   int getSize() const {
      return count;
   }
   int getMax() const {
      return MAX_SIZE;
   }
private:
   int listOfElements[MAX_SIZE];
   int count;
};

#endif // STACK_H
