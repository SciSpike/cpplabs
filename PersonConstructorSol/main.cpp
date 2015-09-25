/*
 * Copyright SciSpike
 *
 * This file contains a test loop and main for the 
 * from C to CPP program
 */
#include <stdlib.h>
#include <string.h>
#include "person.h"


/*
 * Test code
 */
int main() {
   Person stackPerson("John Doe", 40);
   stackPerson.print();
   stackPerson.incrementAge();

	// TODO: The person should be created with name and age
	//       passed to a constructor
   Person *heapPerson = new Person("John Doe", 40);
   heapPerson->print();
   delete heapPerson;
   return 0;
}

