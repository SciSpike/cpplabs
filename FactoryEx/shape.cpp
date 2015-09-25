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
 * Pre-Conditions: Null terminated name
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
 : myX( x ),
   myY( y )
{
	cout << "In the Constructor of Shape." << endl;
	if( name )
	{
		// Making a copy on heap; So remeber to delete
		myName = new char[strlen(name) + 1];
		strcpy( myName, name );
	}
	else
		myName = NULL;
}

/****************************************************************
 *
 * Description: Constructor of Shape
 *
 * Pre-Conditions: Null Terminated name
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Shape::Shape
( 
 const char* name, // Name of this Shape
 istream& inputStream
)
{
	cout << "In the Constructor of Shape." << endl;
	if( name )
	{
		myName = new char[strlen(name) + 1];
		strcpy( myName, name );
	}
	else
		myName = NULL;

	inputStream >> myX;
	inputStream >> myY;

	if( !inputStream.good() )
		throw "Shape Input Problem";
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

