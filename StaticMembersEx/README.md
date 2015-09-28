Exercise Description
====================

For the class Shape, define a static member which keeps track of how many instances were created.

Do the same for the subclasses.

After creating a couple of instances, call static member functions to report the number of created instances

How could we get the report on created instances without ‘hardcoding’ the calls of the static member?

Tasks:

1. Take a look at the main.cpp class. We want the code that have been commented out to compile.
2. Implement getNoOfShapeInstances() and getNoOfDeletedShapeInstances() on the Shape class (see the TODO's)
3. Implement getNoOfRectangleInstances() and getNoOfDeletedRectangleInstances() on the Rectangle class (see the TODO's)
4. Uncomment the code in the main class and ensure that it compiles

The end result should print out something similar to this:
<pre>
Static Members Exercise Program
BEFORE: Number of Shape Instances Created:0 and Deleted:0
BEFORE: Number of Rectangle Instances Created:0 and Deleted:0
Rectangle 1 gets created...
In the Initialize of Shape.
In the Constructor of Rectangle.
Draw the Rectangle of Height=10 Width=20 at (0,0)
In the Destructor of Rectangle.
In Destructor of Shape.
Rectangle 2 gets created...
In the Initialize of Shape.
In the Constructor of Rectangle.
Draw the Rectangle of Height=10 Width=20 at (0,0)
In the Destructor of Rectangle.
In Destructor of Shape.
AFTER: Number of Shape Instances Created:2 and Deleted:2
AFTER: Number of Rectangle Instances Created:2 and Deleted:2
</pre>

