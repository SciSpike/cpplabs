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
  std::cout << "Name: " << name.data() << std::endl;
  std::cout << "Age : " << age << std::endl;
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

