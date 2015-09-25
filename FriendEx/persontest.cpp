/*
 * Copyright SciSpike
 *
 * Implementation file for PersonTest
 */

#include "persontest.h"
#include "person.h"
#include <string>
#include <iostream>

using namespace std;

/*
 * PersonTest constructor
 */
PersonTest::PersonTest() {
}

/*
 * Test function to test Person
 */
void PersonTest::test() {
   cout << "------ Start of test -------" << endl;
   cout << "Creating a person" << endl;
   Person p( "FirstName", "LastName", 60);

      // TODO: Verify that the person has been properly initialized
      //       and print out the result

   cout << "------ End of test --------" << endl;
}

   
