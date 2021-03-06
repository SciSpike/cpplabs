/*
 * Copyright SciSpike
 *
 * This file contains a test loop and main for the 
 * from C to CPP program
 */
#include "person.h"
#include <cstring>

/*
 * Test code
 */
int main() {
	// TODO: The person should be created with name and age
	//       passed to a constructor
   Person stackPerson;
   stackPerson.setName("John Doe");
   stackPerson.setAge(40);
   stackPerson.print();
   stackPerson.incrementAge();

	// TODO: The person should be created with name and age
	//       passed to a constructor
   Person *heapPerson = new Person;
   heapPerson->setName("John Doe");
   heapPerson->setAge(40);
   heapPerson->print();
   delete heapPerson;
   return 0;
}

