#ifndef RECTANGLE_H
#define RECTANGLE_H

/**************************************************************
 *  
 * File: rectangle.h
 *
 * Description: Class Rectangle is defined in this class. 
 *              rectangle.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

#include "shape.h"
#include <iostream>

class Rectangle : public Shape {
public:
	Rectangle( const int height, const int width,
		       const int x, const int y );
    virtual ~Rectangle();

	virtual void draw() const;

	inline int   getWidth() const;
	inline int   getHeight() const;

	bool operator==(const Rectangle & rhs) const;
	friend std::ostream& operator<<( std::ostream& ostr, 
	                            const Rectangle& rectangle );
	friend std::istream& operator>>( std::istream& istr, 
	                            Rectangle& rectangle );

private:
	int myHeight;
	int myWidth;
};

// inlined member functions

int Rectangle::getWidth() const {
   return( myWidth);
}

int Rectangle::getHeight() const {
   return( myHeight);
}


#endif // RECTANGLE_H