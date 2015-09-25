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

  newCompany.hire( &p1 );
  newCompany.hire( &p2 );
  newCompany.hire( &p3 );
  newCompany.hire( &p4 );

  newCompany.print();

  return 0;
}
