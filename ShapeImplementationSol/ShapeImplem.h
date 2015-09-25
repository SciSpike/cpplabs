#ifndef SHAPE_IMPLEM_H
#define SHAPE_IMPLEM_H


#include "shape.h"
#include "point.h"

class ShapeImplementation : public Shape
{
public:
   ShapeImplementation( Point ul, Point lr);

   virtual void printLocation();

protected:
	Point getUpperLeft();
	Point getLowerRight();

	void   moveTo( Point newUpperLeft );
	void   resize( int newWidth, int newHeight );

private:
	Point myUpperLeft;
	Point myLowerRight;
};

#endif