/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Company class
 */

#include <iostream>
#include <iostream.h>
#include "company.h"

/*
 * Constructor for Company
 */
Company::Company(const std::string& name ) {
   companyName = name;
}

/*
 * Destructor for Company
 */
Company::~Company() {
   employees.clearAll();
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

