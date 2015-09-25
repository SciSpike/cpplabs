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

/* Include Files */
#include "rectangle.h"
#include <iostream.h>

/* Constants and defines */

/****************************************************************
 *
 * Description: Initializes the members of this class
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle::Rectangle()
 : Shape( "Rectangle", 0, 0 ),
 myHeight( 10 ),
 myWidth( 20 )
{
	 cout << "In the Default Constructor of Rectangle." << endl;
}


/****************************************************************
 *
 * Description: Initializes the members of this class
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle::Rectangle
(
 const int height,   // Height of Rectangle
 const int width,    // Width of Rectangle
 const int x,        // X coordinate of the rectangle
 const int y,        // Y coordinate if the rectangle
 const char* name
 )
 : Shape( name, x, y ),
 myHeight( height ),
 myWidth( width )
{
	 cout << "In the Constructor of Rectangle." << endl;
}

/****************************************************************
 *
 * Description: Copy Constructor
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle::Rectangle
(
 const Rectangle& rect
 )
 : Shape( rect ),
   myHeight( rect.myHeight ),
   myWidth( rect.myWidth )
{
	 cout << "In the Copy Constructor of Rectangle." << endl;
}

/****************************************************************
 *
 * Description: Destructor for Rectangle
 *
 * Returns: none
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle::~Rectangle()
{
	cout << "In the Destructor of Rectangle." << endl;
}

/****************************************************************
 *
 * Description: Assignment Operator
 *
 * Returns: *this
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Rectangle& Rectangle::operator=
(
 const Rectangle& rect
 )
{
  cout << "In the Assignment Operator of Rectangle." << endl; 

  if( this != &rect )
  {
	  Shape::operator=( rect );
	  myX = rect.myX;
	  myY = rect.myY;
  }

  return( *this );
}

/****************************************************************
 *
 * Description: Set the Width of the Rectangle
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

void Rectangle::setWidth
(
 const int width
 )
{
   myWidth = width;
}

/****************************************************************
 *
 * Description: Set the Height of the Rectangle
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

void Rectangle::setHeight
(
 const int height
 )
{
   myHeight = height;
}

/****************************************************************
 *
 * Description: Get the Width of the Rectangle
 *
 * Returns: Width
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getWidth() const
{
   return( myWidth);
}

/****************************************************************
 *
 * Description: Get the Height of the Rectangle
 *
 * Returns: Height
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getHeight() const
{
   return( myHeight);
}

/****************************************************************
 *
 * Description: Draw this Rectangle
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/


void Rectangle::draw() const
{
   cout << "Draw the " << myName << " of Height=" << myHeight
	   << " Width=" << myWidth << " at (" << myX << "," << myY 
	   << ")" << endl;
}
