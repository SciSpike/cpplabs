#include "shapeimplem.h"
#include <iostream>
#include "point.h"

using namespace std;

ShapeImplementation::ShapeImplementation(Point ul, Point lr)
								 : myUpperLeft( ul ),
								 myLowerRight( lr ) {
}

Point ShapeImplementation::getUpperLeft() {
   return( myUpperLeft );
}

Point ShapeImplementation::getLowerRight() {
   return( myLowerRight );
}

void ShapeImplementation::moveTo(Point newUpperLeft) {
   myUpperLeft = newUpperLeft;
}

void ShapeImplementation::resize(int newWidth, int newHeight) {
	Point newLowerRight(myUpperLeft.getX() + newWidth, 
							 myUpperLeft.getY() - newHeight );
	myLowerRight = newLowerRight;
}

void ShapeImplementation::printLocation() {
	cout << "The Shape's Upper Left Cooridnates are ";
	myUpperLeft.print();
	cout << endl;

	cout << "The Shape's Lower Right Cooridnates are ";
	myLowerRight.print();
	cout << endl;
}
