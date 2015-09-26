/**************************************************************
 *  
 * File: our_string.cpp
 *
 * Description: Class StringReal is implemented in this file. 
 *              string.h has the definition of this class.
 *
 * Author: SciSpike.
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "our_string.h"
#include <iostream>
#include <cstring>

using namespace std;

/* Constants and defines */


/****************************************************************
 *
 * Description: Constructor of StringReal
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

StringReal::StringReal
(
  const char* string
 )
{
	cout << "In the Constructor of StringReal." << endl;
	initialize( string );
}

/****************************************************************
 *
 * Description: Copy Constructor of StringReal
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

StringReal::StringReal
(
  const StringReal& string
 )
{
	cout << "In the Copy Constructor of StringReal." << endl;

	initialize( string.myData );
}

/****************************************************************
 *
 * Description: Destructor of StringReal
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

StringReal::~StringReal()
{
	cout << "In Destructor of StringReal." << endl;
	delete( myData );
}

/****************************************************************
 *
 * Description: Initialize data members of this class.
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

void StringReal::initialize
(
 const char* string
 )
{
	if( string )
	{
		// Making a copy on Heap;; Delete later...
		myData = new char[strlen(string)+1];
		strcpy( myData, string );
	}
	else
		myData = NULL;
}

/****************************************************************
 *
 * Description: Assingment Operator for StringReal
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

StringReal& StringReal::operator=
(
  const StringReal& string
)
{
  if( this != &string )
	  initialize( string.myData );

  return( *this );
}

/****************************************************************
 *
 * Description: Get the length of this string
 *
 * Returns: int length
 *
 * Pre-Conditions: myData cannot be NULL.
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int StringReal::length() const
{
	if( !myData )
		throw NULL_STRING;

	return( strlen(myData) );
}

/****************************************************************
 *
 * Description: Outputs data of this class in ostream.
 *
 * Returns: ostr
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

ostream& operator<<
(
 ostream& ostr, 
 const StringReal& string
 )
{
  if( !string.myData )
	  throw StringReal::NULL_STRING;

  ostr << "Document:" << string.myData << endl;
  return( ostr );
}
