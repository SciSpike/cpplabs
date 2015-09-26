/**************************************************************
 *  
 * File: document.cpp
 *
 * Description: Class Document is implemented in this file. 
 *              document.h has the definition of this class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "document.h"
#include <iostream>
#include <cstring>

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: Initializes the members of this class
 *
 * Pre-Conditions: Assuming that word is null terminated
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Document::Document
(
 const char* word  // Content of the document
 )
{
	 cout << "In the Constructor of Document." << endl;

     initialize( word );
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

Document::Document
(
 const Document& doc
 )
{
	 cout << "In the Copy Constructor of Document." << endl;

     initialize( doc.myWord );
}

/****************************************************************
 *
 * Description: Destructor of the class, clear up its resources
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

Document::~Document()
{
	cout << "In the Destructor of Document." << endl;

	// Clear up the new-s of this class
	delete myWord ;
}

/****************************************************************
 *
 * Description: Assignment Operator for this class.
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

Document& Document::operator=
(
 const Document& doc 
 )
{
	cout << "In the Assignment Operator =" << endl;

	// Make sure the assignment is not done to itself!
	if( this != &doc )
	{
		// Clear up the contents from this class
		delete( myWord );

		initialize( doc.myWord );
	}

	// Always return *this for assignment operator
	return( *this );
}

/****************************************************************
 *
 * Description: Initializes data members of this class
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

void Document::initialize
(
 const char* word   // Content of the Document
 )
{
	// This function will initalize all the data members of 
	// this class
	 if( word )
	 {
		 myWord = new char[strlen(word)+1];
		 strcpy( myWord, word );
	 }
	 else
		 myWord = NULL;
}

/****************************************************************
 *
 * Description: Outputs data of this class in ostream.
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

ostream& operator<<
(
 ostream& ostr, 
 const Document& doc
 )
{
  ostr << "Document:" << doc.myWord << endl;
  return( ostr );
}
