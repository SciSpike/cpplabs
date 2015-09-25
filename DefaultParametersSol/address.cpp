/*
 * Copyright SciSpike
 *
 * Implementation file for Addres
 */

#include "address.h"
#include <string>
#include <iostream>

using namespace std;
/*
 * Constructor for Address
 */
Address::Address
(
 const char* streetNo,   // Block number of the street for this address
 const char* streetName, // Name of the street of this address
 int zip,                // ZIP Code for this address
 const char* city        // City of this address
)
   : myStreetNo( streetNo ),
     myStreetName( streetName ),
     myZIP( zip ),
     myCity( city )
{
}

/*
 * Destructor for Address
 */
Address::~Address() {
}

/*
 * Print member function for Address
 */
void Address::print( PrintFormat format ) {

   switch( format ) {
      case POSTAL:
         cout << "   " << myStreetNo.data() << " " << myStreetName.data() << endl
              << "   " << myCity.data() << ", " << myZIP << endl;
         break;
      case DEBUG:
      default:
         cout << "Street No   : " << myStreetNo.data() << endl
              << "Street Name : " << myStreetName.data() << endl
              << "City        : " << myCity.data() << endl
              << "ZIP         : " << myZIP << endl;
   }

}


