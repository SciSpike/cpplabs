/*
 * Copyright SciSpike
 *
 * Implementation file for Person
 */

#include "person.h"
#include <string.h>
#include <iostream.h>

/*
 * Print a person
 */
void Person::print() {
   cout << "Name: " << name << endl;
   cout << "Age : " << age << endl;
}

/*
 * Increment the age
 */
void Person::incrementAge() {
   age++;
}

/*
 * Constructor
 */
Person::Person( char* aName, int anAge) {
	strcpy( name, aName );
	age = anAge;
}

