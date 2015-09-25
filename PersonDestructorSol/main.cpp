/*
 * Copyright SciSpike
 *
 */
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "person.h"

using namespace std;

/* TODO: Create PassByPointer() to accept a Person
         argument by pointer */

void PassByPointer(Person * byPtr) {
	cout << "Entered ByPointer with: ";
	byPtr->print();
	cout << "Now leaving..." << endl;
}
/* TODO: Create ReturnByPointer() to accept a name
         and an age, and return a pointer to a Person */

Person * ReturnByPointer(char * name, int age) {
	Person * p = new Person("Harry Heap", 28);
	cout << "ReturnByPointer() is returning: " << endl;
	p->print();
	cout << " (I hope somebody deletes this thing!!)" << endl;
	return p;
}

/* TODO: Create a Person on the stack, and one on the
         heap.  Pass both of them to PassByPointer().  
		 Use ReturnByPointer() to create another Person.
		 Cleanup!  */

int main() {
   Person stackPerson("John Doe", 40);
   stackPerson.print();
   stackPerson.incrementAge();

   Person *heapPerson = new Person("Jack LaLane", 40);
   heapPerson->print();

   PassByPointer(&stackPerson);
   PassByPointer(heapPerson);

   Person * ptr = ReturnByPointer("Harry Heap", 28);
   ptr->print();
   delete ptr;

   delete heapPerson;
}

