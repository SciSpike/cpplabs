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
#include <iostream>
#include <cstring>

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
 int x,      // X coordinate of the rectangle
 int y       // Y coordinate if the rectangle
 )
 : myName( 0 )
{
	cout << "In Constructor of Shape." << endl;
	initialize( name, x, y );
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
 * Description: Move the shape to new coordinates ( x, y ).
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

void Shape::move
(
 int x,       // X coordinate of the rectangle
 int y        // Y coordinate if the rectangle
 )
{
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

int Shape::getX()
{
	return( myX );
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

int Shape::getY()
{
	return( myY );
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

char* Shape::getName()
{
	return( myName );
}
