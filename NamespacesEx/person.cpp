/*
 * Copyright SciSpike
 *
 * Implementation file for Person
 */

#include "person.h"
#include <cstring>
#include <iostream>

using namespace std;

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
std::string Person::getName() const {
   return name;;
}

/*
 * Constructor
 */
Person::Person( const std::string& aName, int anAge) {
   name = aName;
   age = anAge;
}

/*
 * Destructor
 */
Person::~Person() {
}

