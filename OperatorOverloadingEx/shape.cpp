/**************************************************************
*  
* File: shape.cpp
*
* Description: Class Shape is implemented in this file. 
*              shape.h has the definition of this class.
*
* Author: SciSpike
*
* Modification History:
*
***************************************************************/

#include "shape.h"
#include <string.h>
#include <iostream.h>

Shape::Shape(const int x, const int y) : myX( x ),   myY( y ) {
	cout << "In the Constructor of Shape." << endl;
}

Shape::~Shape() {
	cout << "In Destructor of Shape." << endl;
}

void Shape::move(int x, int y) {
	myX = x;
	myY = y;
}

// TODO: add operator<<, operator>>, and operator==
