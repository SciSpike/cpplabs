/**************************************************************
 *  
 * File: shapeimplem.cpp
 *
 * Description: Class ShapeImplementation is implemented in this file. 
 *              shapeimplem.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shapeimplem.h"
#include <iostream.h>
#include "point.h"

/* Constants and defines */


/****************************************************************
 *
 * Description: Constructor of ShapeImplementation
 *
 * Pre-Conditions: None
 * 
 * Post Conditions:None
 *
 * Exceptions: None
 *
 ***************************************************************/

ShapeImplementation::ShapeImplementation
(
 Point* upperLeft,   // Upper Left Coordinate of the Shape
 Point* lowerRight    // Lower Right Coordinate of the Shape
 )
 : myUpperLeft( upperLeft ), 
   myLowerRight( lowerRight )
{
}

/****************************************************************
 *
 * Description: Get the Upper Left Coodrdinate points
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

Point* ShapeImplementation::getUpperLeft()
{
   return( myUpperLeft );
}

/****************************************************************
 *
 * Description: Get the Lower Right Coodrdinate points
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

Point* ShapeImplementation::getLowerRight()
{
   return( myLowerRight );
}

/****************************************************************
 *
 * Description: Move the Upper Left coordinate to new coordinates
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

void ShapeImplementation::moveTo
(
 Point* newUpperLeft 
 )
{
   myUpperLeft = newUpperLeft;
}

/****************************************************************
 *
 * Description: Resize where the shape is in with new heigth and
 *              width
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

void ShapeImplementation::resize
(
 int newWidth,
 int newHeight 
)
{
   myLowerRight = new Point( myUpperLeft->getX() + newWidth, 
							 myUpperLeft->getY() - newHeight );
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

void ShapeImplementation::printLocation()
{
	cout << "The Shape's Upper Left Cooridnates are ";
	myUpperLeft->print();
	cout << endl;

	cout << "The Shape's Lower Right Cooridnates are ";
	myLowerRight->print();
	cout << endl;
}

/****************************************************************
 *
 * Description: Prints information about the shape
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

void ShapeImplementation::print()
{
   // TODO Print ShapeImplementation data here and to print 
   //      derived information use method printSpecific()
}