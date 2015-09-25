#ifndef SHAPE_H
#define SHAPE_H

/**************************************************************
 *  
 * File: shape.h
 *
 * Description: Class Shape is defined in this class. shape.cpp
 *              has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
//class istream;
class Shape;

/* Pre-Declarations */
// This is the FACTORY Function which will create Shapes
extern Shape* readFromStream( std::istream& inputStream );

/* Constants and defines */

/****************************************************************
 *
 * Description: The Shape is the base class for set of geometric
 *              Shapes that can be drawn, moved, etc on any 
 *              drawing area.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Shape
{
public:
	Shape( const char* name, const int _x, const int _y );
	Shape( const char* name, std::istream& inputStream );
    virtual ~Shape();

    virtual void move( int x, int y );
	inline int  getX() const;
	inline int  getY() const;

	inline const char* getName() const;

	virtual void draw() const = 0;

protected:
	char* myName;
	int myX; // X Coordinate of the Shape
	int myY; // Y Coordinate of the Shape
};

/****************************************************************
 *
 * Description: Gets the present X coordinate.
 *
 * Returns: X Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Shape::getX() const
{
	return( myX );
}

/****************************************************************
 *
 * Description: Gets the present coordinate.
 *
 * Returns: Y Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Shape::getY() const
{
	return( myY );
}

/****************************************************************
 *
 * Description: Gets the name of this Shape
 *
 * Returns: Y Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char* Shape::getName() const
{
	return( myName );
}

#endif // SHAPE_H