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
   Address joeAddress( "1234", "Park Ave.", 78725 );
   joeAddress.print();
   
   cout << endl << "Printing Jamie's Address" << endl;
   Address jamieAddress ( "5678", "Meadow Lane", 90210, 
                          "Beverly Hills" );
   jamieAddress.print( Address::DEBUG );
   
   return 0;
}
