/**************************************************************
*  
* File: rectangle.cpp
*
* Description: Class Rectangle is implemented in this file. 
*              rectangle.h has the definition of this class.
*
* Author: SciSpike
*
* Modification History:
*
***************************************************************/

#include "rectangle.h"
#include <iostream.h>

Rectangle::Rectangle(const int height, const int width, const int x, const int y )
: Shape( x, y ), myHeight( height ), myWidth( width )  {
	cout << "In the Constructor of Rectangle." << endl;
}

Rectangle::~Rectangle() {
	cout << "In the Destructor of Rectangle." << endl;
}

void Rectangle::draw() const {
	cout << " Draw the Rectangle here." << endl;
}

// TODO: add operator<<, operator>>, and operator==

