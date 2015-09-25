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

/* Include Files */
#include "shape.h"
#include <string>
#include <iostream>

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: Constructor of Shape
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Shape::Shape
( 
 const char* name, // Name of this Shape
 const int x,      // X coordinate of the rectangle
 const int y       // Y coordinate if the rectangle
 )
 : myName( NULL )
{
	cout << "In the Constructor of Shape." << endl;
    initialize( name, x, y );
}

/****************************************************************
 *
 * Description: Copy Constructor of Shape
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Shape::Shape
( 
  const Shape& shape 
 )
 : myName( NULL )
{
	cout << "In the Copy Constructor of Shape." << endl;
    initialize( shape.myName, shape.myX, shape.myY );
}

/****************************************************************
 *
 * Description: Destructor of Shape
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Shape::~Shape()
{
	cout << "In Destructor of Shape." << endl;
	delete myName;
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

Shape& Shape::operator= 
(
  const Shape& shape
 )
{
	cout << "In Assignment Operator of Shape." << endl;
	
    if( this != &shape )
	{
        initialize( shape.myName, shape.myX, shape.myY );
	}

	return( *this );
}

/****************************************************************
 *
 * Description: initalize all the datamember of this class
 *
 * Returns: void
 *
 * Pre-Conditions: name be null terminated
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

void Shape::initialize
(
 const char* name, // Name of this Shape
 const int x,      // X coordinate of the rectangle
 const int y       // Y coordinate if the rectangle
 )
{
	cout << "In the Initialize of Shape." << endl;
	if( name )
	{
		delete( myName );
		// Keeping name on heap; delete later
		myName = new char[strlen(name) + 1];
		strcpy( myName, name );
	}
	else
		myName = NULL;

	myX = x;
	myY = y;
}

/****************************************************************
 *
 * Description: Gets the present X coordinate.
 *
 * Returns: X Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Shape::getX() const
{
	return( myX );
}

/****************************************************************
 *
 * Description: Sets the X coordinate.
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

void Shape::setX
(
 const int x  // X coordinate
 )
{
	myX = x;
}

/****************************************************************
 *
 * Description: Gets the present coordinate.
 *
 * Returns: Y Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Shape::getY() const
{
	return( myY );
}

/****************************************************************
 *
 * Description: Sets the Y coordinate.
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

void Shape::setY
(
 const int y  // Y coordinate
 )
{
	myY = y;
}
/****************************************************************
 *
 * Description: Gets the name of this Shape
 *
 * Returns: Y Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char* Shape::getName() const
{
	return( myName );
}
