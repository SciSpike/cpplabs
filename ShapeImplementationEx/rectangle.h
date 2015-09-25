#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shapeimplem.h"

class Rectangle : public ShapeImplementation {
public:
	Rectangle( int upperLeftX, int upperLeftY, int lowerRightX, int lowerRightY );

	void paint();
private:
};

#endif