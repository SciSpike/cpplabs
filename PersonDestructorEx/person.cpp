/*
 * Copyright SciSpike
 *
 * Implementation file for Person
 */

#include "person.h"
#include <iostream>
#include <cstring>

using namespace std;

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
	name = new char[strlen(aName)+1];
	strcpy( name, aName );
	age = anAge;
}

/*
 * TODO: Add the destructor code here
 */

