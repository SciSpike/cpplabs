/*
 * Copyright SciSpike
 *
 * Implementation file for CompanyTest
 */

#include "companytest.h"
#include "company.h"
#include <iostream>

using namespace std;

/*
 * Company constructor
 */
CompanyTest::CompanyTest() {
}

void CompanyTest::test() {
   cout << "------ Start of test -------" << endl;
   cout << "Creating a company" << endl;
   Company c( "CompanyName");

      // Testing initialization of name
   cout << "Testing initialization of name...";
   if ( c.name == "CompanyName" ) {
      cout << "Passsed" << endl;
   } else {
      cout << "Failed" << endl;
   }

      // Testing initialization of list
   cout << "Testing initialization of list...";
   if ( c.numberOfEmployees == 0  ) {
      cout << "Passsed" << endl;
   } else {
      cout << "Failed" << endl;
   }

   cout << "------ End of test --------" << endl;
}

   
