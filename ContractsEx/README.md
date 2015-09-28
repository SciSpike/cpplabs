Exercise Description
====================

Define contracts for a Stack, including

* Preconditions
* Postconditions

Make it a simple integer stack

<pre>
 class Stack {
 public:
     Stack( int maxSize = 100 );
     void push( int value );
     void pop( int value );
     int getMax() const;
     int getCount() const;
     //...
 };
</pre>

Implement the stack using the preconditions macros defined in contacts.h.

Try your solution with and without CONTRACTS as a preprocessor definition. See main() for instructions adding definitions to the preprocessor environment.
