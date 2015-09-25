#ifndef DOCUMENT_H
#define DOCUMENT_H
/**************************************************************
 *  
 * File: document.h
 *
 * Description: Class Document is defined in this class. 
 *              document.cpp has the implementation.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>

/* Pre-Declarations */
//class ostream;

/* Constants and defines */

/****************************************************************
 *
 * Description: A Document contains, for simplicity, one word of
 *              characters and just one Rectangle.
 * Exceptions: None
 *
 ***************************************************************/

class Document
{
public:
	// Constructor
	Document( const char* word );
	// Copy Constructor
	Document( const Document& doc );
	// Destructor
    ~Document();

	// Assignment Operator
	Document& operator=( const Document& doc );

	// Access to the data of the Document
	inline const char* getWord() const;

	// Used for debugging to dump contents in a stream
	friend std::ostream& operator<<( std::ostream& ostr, 
	                            const Document& doc );

protected:
	char*  myWord;  // Content of the Document

	void initialize( const char* word );
};

/****************************************************************
 *
 * INLINE Functions Implementations
 *
 ***************************************************************/

/****************************************************************
 *
 * Description: Gets the word of the Document
 *
 * Returns: The word.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char* Document::getWord() const
{
   return( myWord );
}

#endif // DOCUMENT_H