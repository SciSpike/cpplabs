Overview
========

In this lab we'll illustrate the importance of defining a virtual destructor when expecting clients to delete objects through a base-class pointer.

Taks:
-----
* Create an array of Shapes on the heap
* Add instances of rectangles to the array
* Delete the array
* Experiment with two versions of the program:
* Using non-virtual destructors for Shapes and Rectangles
* Using virtual destructors
