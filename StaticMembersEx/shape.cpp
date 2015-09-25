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
#include <string.h>
#include <iostream.h>

/* Constants and defines */
// This is how static datamembers are initialized
// TODO initiliaze noOfShapeInstances as 0
// TODO initialize Shape::noOfDeletedShapeInstances as 0

/****************************************************************
 *
 * Description: Constructor of Shape
 *
 * Pre-Conditions: name be null terminated
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
	initialize( name, x, y );
	// Add one to created count (in every constructor)
	//TODO  Add 1 to noOfShapeInstances
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

	// Adding one for deleted count
	//TODO add 1 to noOfDeletedShapeInstances
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
