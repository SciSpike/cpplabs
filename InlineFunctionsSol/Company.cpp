/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Company class
 */

#include "company.h"
#include <iostream.h>

/*
 * Constructor for person
 */
Company::Company(const std::string& name ) {
   companyName = name;
   cout << "Company named " << companyName.data() << " has been created" << endl;
}

/*
 * Destructor for person
 */
Company::~Company() {
   employees.clearAll();
   cout << "Company named " << companyName.data() << " has been removed" << endl;
}

/*
 * Print the name of the company and all the employees
 */
void Company::print() const {
   cout << endl << "Company name: " << companyName.data() << endl;
   cout << "Employees:" << endl;
   for (int i = 0; i < employees.getSize(); i++ ) {
      cout << ".... " << employees[i]->getName().data() << endl;
   }
	cout << endl;
}

/*
 * Hire a person
 */
void Company::hire(Person* newHire) {
   employees.addAtEnd( newHire );
}

