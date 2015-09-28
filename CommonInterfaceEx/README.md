Overview
=======

This exercise shows the power of separation of interfaces from implementation.

In the exercise we have two independent classes (Card and Employee).
They would normally not have anything in common, but...
We want to introduce the concept of loggable, which is some abstraction used by a logger to dump the state of an object to some log.


In the exercise, we want you to apply the Loggable interface to each of the abstraction and implement two classes:

* Loggable. This is simply an interface that the the other classes must implement.
* Logger. An object that keeps track of loggables and can be asked to print the state of them all to the outputstream.

In this exercise you're asked to:

* 
