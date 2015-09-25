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
	Shape( char* name, int _x, int _y );
    virtual ~Shape();

	virtual void draw() = 0;
	virtual void move( int x, int y );
	int          getX();
	int          getY();

	char*        getName();

protected:
	char* myName; // Name of the Shape
	int   myX; // X Coordinate of the Shape
	int   myY; // Y Coordinate of the Shape

	void initialize( const char* name, 
		             const int x, const int y );
};

#endif // SHAPE_H