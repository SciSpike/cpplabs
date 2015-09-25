/**************************************************************
 *  
 * File: square.cpp
 *
 * Description: Class Square is implemented in this file. 
 *              square.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "square.h"
#include <iostream>

using namespace std;

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

Square::Square
(
 const int side,     // Side of Square
 const int x,        // X coordinate of the square
 const int y         // Y coordinate if the square
 )
 : Rectangle( side, side, x, y, "Square" )
{
	 cout << "In the Constructor of Square." << endl;
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

Square::Square
(
 const Square& square
 )
 : Rectangle( square )
{
	 cout << "In the Copy Constructor of Square." << endl;
}

/****************************************************************
 *
 * Description: Initializes the members of this class
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

Square::~Square()
{
	cout << "In the Destructor of Square." << endl;
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

Square& Square::operator=
(
 const Square& square
 )
{
  cout << "In the Assignment Operator of Square." << endl; 

  if( this != &square )
  {
	  Rectangle::operator=( square );
  }

  return( *this );
}

/****************************************************************
 *
 * Description: Get the Side of the Square
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

int Square::getSide() const
{
   return( myHeight);
}
