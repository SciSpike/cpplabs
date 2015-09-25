/**************************************************************
 *  
 * File: circle.cpp
 *
 * Description: Class Circle is implemented in this file. 
 *              circle.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "circle.h"
#include <iostream>

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: Initializes the members of this class
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Circle::Circle
(
 istream& inputStream
)
 : Shape( "Circle", inputStream )
{
	 cout << "In the istream Constructor of Circle." << endl;
	 inputStream >> myRadius;

	 if( !inputStream.good() )
		 throw "Circle Input Problem";
}

/****************************************************************
 *
 * Description: Initializes the members of this class
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Circle::Circle
(
 const int radius,   // Radius of Circle
 const int x,        // X coordinate of the circle
 const int y         // Y coordinate if the circle
)
 : Shape( "Circle", x, y ),
 myRadius( radius )
{
	 cout << "In the Constructor of Circle." << endl;
}

/****************************************************************
 *
 * Description: Destructor for Circle
 *
 * Returns: none
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Circle::~Circle()
{
	cout << "In the Destructor of Circle." << endl;
}

/****************************************************************
 *
 * Description: Draw this Circle
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

void Circle::draw() const
{
   cout << "Draw the " << myName << " of Radius=" << myRadius <<
		" at (" << myX << "," << myY << ")" << endl;
}
