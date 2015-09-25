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

// This is how STATIC datamebers are initialized
int Rectangle::noOfRectangleInstances = 0;
int Rectangle::noOfDeletedRectangleInstances = 0;

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
	 noOfRectangleInstances++;
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
	noOfDeletedRectangleInstances++;
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


/****************************************************************
 *
 * Description: Gets number of instances Rectangle class was
 *              created.
 *
 * Returns: noOfRectangleInstances
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getNoOfRectangleInstances()
{
	return( noOfRectangleInstances );
}

/****************************************************************
 *
 * Description: Gets number of instances Rectangle class was 
 *              created.
 *
 * Returns: noOfRectangleInstances
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getNoOfDeletedRectangleInstances()
{
	return( noOfDeletedRectangleInstances );
}
