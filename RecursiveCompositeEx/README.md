Exercise Description
====================

You task this time is to build a run-time composable expression.

An example of an expression might be: (8/X-9)*98*(Y/6+7)

What are the objects in this expression? Create an instance diagram showing the objects and how they relate.

How would the expression be calculated?

How would you set the variables during run-time?

Create a class diagram showing your solution

Implement the expression framework.

Make the value type templated:
<pre>
 template < class T >
 class Expression {
 public:
     virtual T getValue() const = 0;
     virtual void setVariable( const char* name, T value );
 };
</pre>