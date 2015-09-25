#ifndef POINT_H
#define POINT_H

/**************************************************************
 *  
 * File: point.h
 *
 * Description: Class Point is defined in this class. point.cpp
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
 * Description: The Point class which represents a point on the
 *              graph for an graphical editor
 *
 * Exceptions: None
 *
 ***************************************************************/

class Point
{
public:
	// Constructor
	Point( int x, int y );

	int getX();
	int getY();

	void setX( int x );
	void setY( int y );

	void print();

private:
     int myX;  // X Coordinate of this point
	 int myY;  // Y Coordinate of this point
};

#endif   // POINT_H