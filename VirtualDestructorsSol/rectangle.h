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
#include "shape.h"

/* Pre-Declarations */

/* Constants and defines */

/****************************************************************
 *
 * Description: A Rectangle is four straight line with ends 
 *              joined together at right angles between adjacent
 *              lines. 
 *
 * Exceptions: None
 *
 ***************************************************************/

class Rectangle : public Shape
{
public:
	// Constructors
	Rectangle();
	Rectangle( int height, int width, int x, int y );
	// Destructor
    virtual ~Rectangle(); // Does virtual makes a difference?

	void draw();

	int          getWidth();
	int          getHeight();

private:
	int myHeight;  // Height of the Rectangle
	int myWidth;   // Width of the Rectangle
};

#endif // RECTANGLE_H