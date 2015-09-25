#ifndef CIRCLE_H
#define CIRCLE_H

/**************************************************************
 *  
 * File: circle.h
 *
 * Description: Class Circle is defined in this class. 
 *              circle.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shape.h"
#include <iostream>

/* Pre-Declarations */
//class istream;

/* Constants and defines */

/****************************************************************
 *
 * Description: A Circle is four straight line with ends 
 *              joined together at right angles between adjacent
 *              lines. 
 *
 * Exceptions: None
 *
 ***************************************************************/

class Circle : public Shape
{
public:
	// Construtors
	Circle( const int radius, const int x, const int y );
	Circle( std::istream& inputStream );
	// Destructor
    virtual ~Circle();

	virtual void draw() const;

	inline int   getRadius() const;

private:
	int myRadius;
};

/****************************************************************
 *
 * Description: Get the Width of the Circle
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

int Circle::getRadius() const
{
   return( myRadius);
}

#endif // CIRCLE_H