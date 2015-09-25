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
// Would you make this function const? YES
void Person::print() const {
   cout << "Name: " << name.data() << endl;
   cout << "Age : " << age << endl;
}

/*
 * Increment the age
 */
// Would you make this function const? NO
void Person::incrementAge() {
   age++;
}

/*
 * Get the name of a person
 */
// Would you change the return? Optionally, we could return a const&
// Would you make the function const? YES
std::string Person::getName() const {
   return name;;
}

/*
 * Constructor
 */
// Would you change the aName or the anAge parameters? Yes, you
// could change aName to use const &
Person::Person( const std::string& aName, int anAge) {
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

