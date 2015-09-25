/**************************************************************
 *  
 * File: rectangle.cpp
 *
 * Description: Class Rectangle is implemented in this file. 
 *              rectangle.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "rectangle.h"
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

Rectangle::Rectangle
(
 const int height,   // Height of Rectangle
 const int width,    // Width of Rectangle
 const int x,        // X coordinate of the rectangle
 const int y         // Y coordinate if the rectangle
)
 : Shape( "Rectangle", x, y ),
 myHeight( height ),
 myWidth( width )
{
	 cout << "In the Constructor of Rectangle." << endl;
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

Rectangle::Rectangle
(
 istream& inputStream
)
 : Shape( "Rectangle", inputStream )
{
	 cout << "In the istream Constructor of Rectangle." << endl;

	 inputStream >> myHeight >> myWidth;

	 if( !inputStream.good() )
		 throw "Rectangle Input Problem";
}

/****************************************************************
 *
 * Description: Destructor for Rectangle
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

Rectangle::~Rectangle()
{
	cout << "In the Destructor of Rectangle." << endl;
}

/****************************************************************
 *
 * Description: Draw this Rectangle
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

void Rectangle::draw() const
{
   cout << "Draw the " << myName << " of Height=" << myHeight
	   << " Width=" << myWidth << " at (" << myX << "," << myY 
	   << ")" << endl;
}
