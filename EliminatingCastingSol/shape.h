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

/* Pre-Declarations */

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
	Shape( const Shape& shape );
    virtual ~Shape();

	Shape& operator=( const Shape& shape );

	int          getX() const;
	int          getY() const;
	void         setX( const int x );
	void         setY( const int y );

	const char*  getName() const;

	virtual void draw() const;

protected:
	char* myName;
	int   myX; // X Coordinate of the Shape
	int   myY; // Y Coordinate of the Shape

	void  initialize( const char* name, const int x, const int y );
};

#endif // SHAPE_H