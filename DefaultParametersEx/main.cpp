/*
 * Copyright SciSpike
 *
 * This file contains the test code
 */

#include <iostream>
#include "address.h"

using namespace std;

/*
 * The test function
 */
int main()
{
   cout << "Default Parameter Exercise Program" << endl << endl;;

   cout << "Joe's Address" << endl;

   // TODO: remove the passing of Austin to verify that the default parameter works
   Address joeAddress( "1234", "Park Ave.", 78725, "Austin" );

   // TODO: remove the use of Address::POSTAL to verify that the default parameter works
   joeAddress.print(Address::POSTAL);
   
   cout << endl << "Printing Jamie's Address" << endl;
   Address jamieAddress ( "5678", "Meadow Lane", 90210, 
                          "Beverly Hills" );
   jamieAddress.print( Address::DEBUG );
   
   return 0;
}
