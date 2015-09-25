/*
 * Copyright SciSpike
 *
 * Implementation file for PersonTest
 */

#include "persontest.h"
#include "person.h"
#include <iostream>

using namespace std;

/*
 * Person constructor
 */
PersonTest::PersonTest() {
}

void PersonTest::test() {
   cout << "------ Start of test -------" << endl;
   cout << "Creating a person" << endl;
   Person p( "FirstName", "LastName", 60);

      // Testing initialization of first name
   cout << "Testing initialization of first name...";
   if ( p.firstName == "FirstName" ) {
      cout << "Passsed" << endl;
   } else {
      cout << "Failed" << endl;
   }

      // Testing initialization of last name
   cout << "Testing initialization of last name...";
   if ( p.lastName == "LastName" ) {
      cout << "Passsed" << endl;
   } else {
      cout << "Failed" << endl;
   }

      // Testing initialization of age
   cout << "Testing initialization of age...";
   if ( p.age == 60 ) {
      cout << "Passsed" << endl;
   } else {
      cout << "Failed" << endl;
   }

   cout << "------ End of test --------" << endl;
}

   
