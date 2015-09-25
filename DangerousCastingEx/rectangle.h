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
	// Default Constructor
	Rectangle();
	// Constructor
	Rectangle( const int height, const int width, const int x, 
		       const int y, const char* name );
	// Copy Constructor
	Rectangle( const Rectangle& rect );
	// Desctructor
    virtual ~Rectangle();

	// Assignment operator
	Rectangle& operator=( const Rectangle& rect );

	virtual void draw() const;

	void setWidth( const int width );
	int  getWidth() const;
	void setHeight( const int height );
	int  getHeight() const;

protected:
	int myHeight;
	int myWidth;
};

#endif // RECTANGLE_H