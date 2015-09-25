#ifndef STACK_H
#define STACK_H

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
   cout << "In Template Stack Constructor." << endl;
}

/*
 * Implementation of the Stack destructor
 */
template <typename Type, int ArraySize>
Stack<Type,ArraySize>::~Stack() {

   cout << "In Template Stack Destructor." << endl;

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
