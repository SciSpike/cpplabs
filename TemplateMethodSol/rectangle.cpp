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
#include "point.h"
#include <iostream>

using namespace std;

/* Constants and defines */


/****************************************************************
 *
 * Description: Constructor of Rectangle
 *
 * Pre-Conditions: None
 * 
 * Post Conditions:None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle::Rectangle
(
 int upperLeftX,   // x coordinate of the Upper Left corner
 int upperLeftY,   // y coordinate of the Upper Left corner
 int loweRightX,   // x coordinate of the Lower Right corner
 int lowerRightY   // y coordinate of the Lower Right corner
 )
 : ShapeImplementation( new Point(upperLeftX,upperLeftY), 
                        new Point(loweRightX,lowerRightY) )
{
}


/****************************************************************
 *
 * Description: Prints the rectangle (x,y)
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

void Rectangle::paint()
{
	// For now lets paint by providing information to paint.

   cout << "Rectangle Paint Information..." << endl;
   printLocation();
}

/****************************************************************
 *
 * Description: Prints information about 
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

void Rectangle::printSpecific()
{
	// Just for test purposes of Template Framework print this..

   cout << "Rectangle Information..." << endl;
}