/*
 * Copyright SciSpike
 *
 * This file contains the test code for the deck
 */

#include <iostream.h>
#include "person.h"
#include "company.h"


/*
 * The test function
 */
int main() {

  Company newCompany("SciSpike");

  Person p1("John", 30);
  Person p2("Sue", 20);
  Person p3("Jill", 39);
  Person p4("Bill", 32);

// TODO: Hire all employees by using the new
//       memberfuction hire
//       - newCompany.hire

  newCompany.print();

  return 0;
}
