/*
 * Copyright SciSpike
 *
 * Implementation file for Person
 */

#include "person.h"
#include <string.h>
#include <iostream>

/*
 * Print a person
 */
void Person::print() const {
   cout << "Name: " << name.data() << endl;
   cout << "Age : " << age << endl;
}

/*
 * Increment the age
 */
void Person::incrementAge() {
   age++;
}

/*
 * Get the name of a person
 */
string Person::getName() const {
   return name;;
}

/*
 * Constructor
 */
Person::Person( const string& aName, int anAge) {
   name = aName;
   age = anAge;
}

/*
 * Destructor
 */
Person::~Person() {
}

