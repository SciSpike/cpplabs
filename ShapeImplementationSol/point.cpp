#include "point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) : myX( x ),  myY( y )
{
}

int Point::getX() {
	return( myX );
}

int Point::getY() {
	return( myY );
}

void Point::setX( int x ) {
	myX = x;
}

void Point::setY( int y ) {
	myY = y;
}

void Point::print() {
	cout << "(" << myX << "," << myY << ")";
}
