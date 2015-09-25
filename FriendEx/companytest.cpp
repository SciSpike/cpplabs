/*
 * Copyright SciSpike
 *
 * Implementation file for CompanyTest
 */

#include "companytest.h"
#include "company.h"
#include <string>
#include <iostream>

using namespace std;

/*
 * CompanyTest constructor
 */
CompanyTest::CompanyTest() {
}

/*
 * CompanyTest test function
 */
void CompanyTest::test() {
   cout << "------ Start of test -------" << endl;
   cout << "Creating a company" << endl;
   Company c( "CompanyName");

      // TODO: Verify that the company has been properly initialized
      //       and print out the result

   cout << "------ End of test --------" << endl;
}

   
