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
 * Person constructor
 */
Person::Person(const char* first, const char* last, int anAge) {
   firstName = first;
   lastName = last;
   age = anAge;
}
/*
 * Set the last name
 */
void Person::setLastName( const char* aName ) {
   lastName = aName;
}

/*
 * Get the last name
 */
const char* Person::getLastName() const {
   return lastName.data();
}

/*
 * Set the first name
 */
void Person::setFirstName( const char* aName ) {
   firstName = aName;
}

/*
 * Get the first name
 */
const char* Person::getFirstName() const {
   return firstName.data();
}

/*
 * Set the age
 */
void Person::setAge(int anAge) {
   age = anAge;
}

/*
 * Get the age
 */
int Person::getAge() const{
   return age;
}

/*
 * Print a person
 */
void Person::print() const {
   cout << lastName.data() << ", " << firstName.data() << " (" << age << ")";
}
