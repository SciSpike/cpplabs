/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Company class
 */

#include "company.h"
#include <iostream>

using namespace std;

/*
 * Constructor for person
 */
// TODO: Would you change the name parameter?
Company::Company(std::string name ) {
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
// TODO: Should the member function be const?
void Company::print() {
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
// TODO: Would you change the newHire parameter?
// TODO: Should the member functions be const?
void Company::hire(Person* newHire) {
   employees.addAtEnd( newHire );
}
