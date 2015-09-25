#ifndef RECTANGLE_H
#define RECTANGLE_H

/**************************************************************
 *  
 * File: rectangle.h
 *
 * Description: Class Rectangle is defined in this class. 
 *              rectangle.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shapeimplem.h"

/* Pre-Declarations */


/* Constants and defines */


/****************************************************************
 *
 * Description: The Rectangle class which represents a rectangle.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Rectangle : public ShapeImplementation
{
public:
	// Constructor
	Rectangle( int upperLeftX, int upperLeftY, int lowerRightX, 
		       int lowerRightY );

	virtual void paint();
    virtual void printSpecific();
private:
};

#endif   // RECTANGLE_H