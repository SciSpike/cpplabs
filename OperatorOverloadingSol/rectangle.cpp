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
#include <iostream>

using namespace std;

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

ostream& operator<<(ostream& ostr, const Rectangle& rectangle) {
	ostr << ((const Shape&)(rectangle)) << " with Height=" <<
		rectangle.myHeight << " Width=" << rectangle.myWidth << endl;
	return( ostr );
}

istream& operator>>(istream& istr, Rectangle& rectangle) {
	istr >> ((Shape&)(rectangle));
	istr >> rectangle.myHeight >> rectangle.myWidth;
	return( istr );
}

bool Rectangle::operator==(const Rectangle & rhs) const {
	return (this->Shape::operator==(rhs) && myHeight==rhs.myHeight && myWidth==rhs.myWidth);
}