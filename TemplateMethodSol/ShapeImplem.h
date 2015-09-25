#ifndef SHAPE_IMPLEM_H
#define SHAPE_IMPLEM_H

/**************************************************************
 *  
 * File: shape.h
 *
 * Description: Class ShapeImplementation is defined in this class.
 *              shapeimplem.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shape.h"

/* Pre-Declarations */
class Point;

/* Constants and defines */


/****************************************************************
 *
 * Description: The ShapeImplementation Implements the functions
 *              in Shape class that can be implemented for all
 *              Shapes
 *
 * Exceptions: None
 *
 ***************************************************************/

class ShapeImplementation : public Shape
{
public:
   ShapeImplementation( Point* upperLeft, Point* lowerRight );

   virtual void printLocation();
   // This funtion shows how Template Framework is done.
   virtual void print();

protected:
	// This is how Template Framework is implemented
	virtual void printSpecific() = 0;

	Point* getUpperLeft();
	Point* getLowerRight();

	void   moveTo( Point* newUpperLeft );
	void   resize( int newWidth, int newHeight );

private:
	Point* myUpperLeft;
	Point* myLowerRight;
};

#endif   // SHAPE_IMPLEM_H