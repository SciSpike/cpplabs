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
std::string Person::getName() {
   return name;;
}

/*
 * Constructor
 */
Person::Person( std::string aName, int anAge) {
   name = aName;
   age = anAge;
   cout << "Person named " << name.data() << " has been created" << endl;
}

/*
 * Destructor
 */
Person::~Person() {
   cout << "Person named " << name.data() << " has been removed" << endl;
}

