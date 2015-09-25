/*
 * Copyright SciSpike
 *
 * Implementation file for Person
 */

#include "person.h"
#include <string>
#include <iostream>

using namespace std;

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
// TODO: Should this member function be const?
void Person::incrementAge() {
   age++;
}

/*
 * Get the name of a person
 */
// TODO: Would you change the return? Would you make the function const?
std::string Person::getName() {
   return name;;
}

/*
 * Constructor
 */
// TODO: Would you change the aName or the anAge parameters?
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

