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
#include <iostream.h>

/* Constants and defines */

/****************************************************************
 *
 * Description: Default Constructor to initializes the members 
 *              of this class
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle::Rectangle()
 : Shape( "Rectangle", 0, 0 ),
 myHeight( 10 ),
 myWidth( 20 )
{
	 cout << "In the Default Constructor of Rectangle." << endl;
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
 int height,   // Height of Rectangle
 int width,    // Width of Rectangle
 int x,        // X coordinate of the rectangle
 int y         // Y coordinate if the rectangle
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
 * Description: Get the Width of the Rectangle
 *
 * Returns: Width
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getWidth()
{
   return( myWidth);
}

/****************************************************************
 *
 * Description: Get the Height of the Rectangle
 *
 * Returns: Height
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getHeight()
{
   return( myHeight);
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

void Rectangle::draw()
{
   cout << "Draw the " << myName << " of Height=" << myHeight
	   << " Width=" << myWidth << " at (" << myX << "," << myY 
	   << ")" << endl;
}
