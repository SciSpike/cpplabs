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
  // TODO Add code to change size here (ie, move lowerRight!)
}

void ShapeImplementation::printLocation() {
   // TODO Add code to print myUpperLeft and myLowerRight 
   // coordinates using print from points. Format the output
   // to look like this: 
   // The Shape's Upper Left Cooridnates are (10,100)
   // The Shape's Lower Right Cooridnates are (200,10)

}
