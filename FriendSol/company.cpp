/*
 * Copyright SciSpike
 *
 * Implementation file for Company
 */

#include "company.h"
#include <iostream>

using namespace std;

/*
 * Constructor
 */
Company::Company( const char* aName ) : name( aName) {
   numberOfEmployees = 0;
   for (int i = 0; i < MAX_EMPLOYEES; i++ ) {
      employees[i] = 0;
   }
}

/*
 * Destructor
 */
Company::~Company() {
      // nothing to do since we don't allocate resources
}

/*
 * Get name
 */
std::string Company::getName() const {
   return name;
}

/*
 * Set name
 */
void Company::setName( const char* aName ) {
   name = aName;

}

/*
 * Hire a new employee
 */
void Company::hire(Person *p) {
   employees[numberOfEmployees++] = p;
}

/*
 * Fire the last employee
 */
void Company::fire() {
   employees[--numberOfEmployees] = 0;
}

/*
 * Print the employee list
 */
void Company::printEmployeeList() const {
   for (int i = 0; i < numberOfEmployees; i++ ) {
      cout << "Employee " << i << ": ";
      employees[i]->print();
      cout << endl;
   }
}

