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

class Rectangle : public Shape {
public:
	Rectangle( const int height, const int width,
		       const int x, const int y );
    virtual ~Rectangle();

	virtual void draw() const;

	inline int   getWidth() const;
	inline int   getHeight() const;

	// TODO: add operator<<, operator>> (must be friends)
	// TODO: add operator== (can be a friend or a member)

	bool operator==(const Rectangle & rhs) const;
	friend ostream& operator<<( ostream& ostr, 
	                            const Rectangle& rectangle );
	friend istream& operator>>( istream& istr, 
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