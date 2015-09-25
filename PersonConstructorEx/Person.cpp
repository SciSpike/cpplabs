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
 * Set the age
 */
void Person::setAge(int anAge) {
	age = anAge;
}

/*
 * Set the name
 */
void Person::setName(char *aName) {
	strcpy( name, aName);
}