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
void Person::print() const {
   cout << "Name: " << name.data() << endl;
   cout << "Age : " << age << endl;
}


/*
 * Constructor
 */
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

