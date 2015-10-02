Exercise Description
====================

In this exercise we'll explore lambda functions.
We will use an example from earlier (the address book) and show how the solutio
could be extended with lambda functions.

We have refactored the previous exericse where we created an address book so that the implementation of the address is refactored into a separate class.
The address book class has method to add, remove and list the address entries.
We want to add a find method that searches through the entries and find matches.
Instead of the address book knowing what a match is, we'll let the clients specify the match using a lambda function.

In the exercise we're asking you to add a find function to the address book that takes a lambda function.
The lambda function will be used by the address book in the following way:

1. The address book's find function iterates through all its entries (of type pair<string,string>).
2. The find function then passes the entries to the lambda function provided by the client
3. If the lambda function returns true, the entry is added to a list used as a return value

The exercise requires that you compile the source witha C++ 11 compliant compiler.

If you use g++ you can do this by using the -std option. E.g.:

```
	$ g++ -std=c++11 *.cpp
```

The steps
---------

Here are some suggested steps for the exercise:

1. Take a look at the main.cpp and look for the TODO section.
2. Declare the interface to the find function on the address_book.h file
3. Implement the find function in the address_book.cpp file
4. Uncomment the TODO section in the main.cpp file and implement the pseudo code

Hints
-----

A lambda function is a standard function pointer and can be declared as:

```C++
	bool (*lambda)(const pair<string,string>&)
```

The standard library also has a convenient way to declare functions:

```C++
	#include <functional>
	...
	std::function<bool (const pair<string,string>&) lambda;
```

To invoke a lambda function:

```C++
	std::function<...> lambda = ...;
	lambda(...);
```

A simple way to search for a substring is:

```C++
	string aString = ...;
	string searchString = ...;
	if (aString.find(searchString) == string::npos)
	   // no match
```