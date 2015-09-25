/**************************************************************
 *  
 * File: point.cpp
 *
 * Description: Class Point is implemented in this file. 
 *              point.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "point.h"
#include <iostream>

using namespace std;

/* Constants and defines */


/****************************************************************
 *
 * Description: Constructor of Point
 *
 * Pre-Conditions: None
 * 
 * Post Conditions:None
 *
 * Exceptions: None
 *
 ***************************************************************/

Point::Point
(
 int x,   // x coordinate of the point(x,y)
 int y    // y coordinate of the point(x,y)
 )
 : myX( x ),
   myY( y )
{
}

/****************************************************************
 *
 * Description: Gets the X coordinate value of this point
 *
 * Returns: x of this point(x,y)
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Point::getX()
{
	return( myX );
}

/****************************************************************
 *
 * Description: Gets the Y coordinate value of this point
 *
 * Returns: Y of this point(x,y)
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Point::getY()
{
	return( myY );
}

/****************************************************************
 *
 * Description: Sets the X coordinate value of this point
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

void Point::setX( int x )
{
	myX = x;
}

/****************************************************************
 *
 * Description: Sets the Y coordinate value of this point
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

void Point::setY( int y )
{
	myY = y;
}

/****************************************************************
 *
 * Description: Prints the point (x,y)
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

void Point::print()
{
	cout << "(" << myX << "," << myY << ")";
}