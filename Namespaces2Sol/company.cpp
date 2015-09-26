/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Company class
 */

#include "company.h"
#include <iostream>

/*
 * Constructor for Company
 */
Company::Company(const string& name ) {
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
  std::cout << std::endl << "Company name: " << companyName.data() << std::endl;
  std::cout << "Employees:" << std::endl;
   for (int i = 0; i < employees.getSize(); i++ ) {
     std::cout << ".... " << employees[i]->getName().data() << std::endl;
   }
   std::cout << std::endl;
}

/*
 * Hire a person
 */
void Company::hire(Person* newHire) {
   employees.addAtEnd( newHire );
}

