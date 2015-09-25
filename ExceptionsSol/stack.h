#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "id_exception.h"
/*
 * Copyright SciSpike
 *
 * Decaration and implentation of the stack class
 */
template <class Type, int ArraySize>
class Stack {
public:
   inline Stack();
   inline ~Stack();

   inline void push( const Type& value );
   inline Type  pop();

protected:
      // Present index 0-MAX_STACK_SIZE-1 or -1 if no element.
   int  myTopIndex; 
   Type myArray[ArraySize]; // Array to store the Stack
};


/*
 * Stack constructor
 */
template <class Type, int ArraySize>
Stack<Type,ArraySize>::Stack()
   : myTopIndex( -1 ) {

   std::cout << "In Template Stack Constructor." << std::endl;

}

/*
 * Stack destructor
 */
template <class Type, int ArraySize>
Stack<Type,ArraySize>::~Stack() {

   std::cout << "In Template Stack Destructor." << std::endl;

}

/*
 * Implementation of push
 */
template<class Type, int ArraySize>
void Stack<Type,ArraySize>::push( const Type& value ) {
      // To test generic exception handling.
   if( (myTopIndex+1) >= ArraySize )
      throw IDException( "STACK OVERFLOW" );
      //throw 100;
   myArray[++myTopIndex] = value;
}

/*
 * Implementation of pop
 */
template<class Type, int ArraySize>
Type Stack<Type,ArraySize>::pop() {

   if( myTopIndex < 0 )
      throw IDException( "STACK UNDERFLOW" );

   return( myArray[myTopIndex--] );
}

#endif // STACK_H
