#ifndef STACK_H
#define STACK_H
#include <iostream>


template <typename Type, int ArraySize>
class Stack {
public:
   Stack();
   ~Stack();
   
   void push( const Type& value );
   Type  pop();

protected:
      // Present index 0-MAX_STACK_SIZE-1 or -1 if no element.
   int  myTopIndex; 
   Type myArray[ArraySize]; // Array to store the Stack
};

/*
 * Implementation of the constructor for stack
 */
template <typename Type, int ArraySize>
Stack<Type,ArraySize>::Stack()
: myTopIndex( -1 )
{
   std::cout << "In Template Stack Constructor." << std::endl;
}

/*
 * Implementation of the Stack destructor
 */
template <typename Type, int ArraySize>
Stack<Type,ArraySize>::~Stack() {

   std::cout << "In Template Stack Destructor." << std::endl;

}

/*
 * Implementation of the stacks push
 */
template <typename Type, int ArraySize>
void Stack<Type,ArraySize>::push( const Type& value ) {

   myArray[++myTopIndex] = value;

}

/*
 * Implementation of the stacks pop
 */
template <typename Type, int ArraySize>
Type Stack<Type,ArraySize>::pop() {

   return( myArray[myTopIndex--] );

}

#endif // STACK_H
