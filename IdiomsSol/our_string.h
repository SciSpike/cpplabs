#ifndef OUR_STRING_H
#define OUR_STRING_H

/**************************************************************
 *  
 * File: our_string.h
 *
 * Description: Class StringReal is defined in this class.
 *              string.cpp has the implementation.
 *
 * Author: SciSpike.
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "handle.h"
#include <iostream>
 
/* Pre-Declarations */

/* Constants and defines */

/****************************************************************
 *
 * Description: The StringReal reprsent a char* string.
 *
 * Exceptions: None
 *
 ***************************************************************/

class StringReal
{
public:
	// List of errors it can raise.
	enum StringRealErrors { ACCESS_BEYOND_DATA, NULL_STRING };

	StringReal( const char* string );
	StringReal( const StringReal& string );

	virtual ~StringReal();

	inline const char* getData() const;
	int   length() const;

	// Can made many other functions here... or
	// use commerially available classes.

	// Operator overloading
	StringReal&         operator=( const StringReal& string );
	inline const char& operator[] ( const int index ) const;
	inline char& operator[] ( const int index );
	friend std::ostream& operator<<( std::ostream& ostr, const StringReal& str );

private:
	void  initialize( const char* string );

	char* myData;
};

typedef Handle<StringReal> String;


/****************************************************************
 *
 * Description: Get the raw data.
 *
 * Returns: myData
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char* StringReal::getData() const
{
	return( myData );
}

/****************************************************************
 *
 * Description: Get the raw data. Can assign values here.
 *
 * Returns: myData
 *
 * Pre-Conditions: index should be between 0 and length-1,
 *                 myData should not be null.
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

char& StringReal::operator[]
(
 const int index
 )
{
	if( !myData )
		throw NULL_STRING;
	if( index < 0  || index >= length() )
		throw ACCESS_BEYOND_DATA;

	return( myData[index] );
}

/****************************************************************
 *
 * Description: Get the raw data. Used to check the characted
 *
 * Returns: myData
 *
 * Pre-Conditions: index should be between 0 and length-1,
 *                 myData should not be null.
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char& StringReal::operator[]
(
 const int index
 ) const
{
	if( !myData )
		throw NULL_STRING;
	if( index < 0  || index >= length() )
		throw ACCESS_BEYOND_DATA;

	return( myData[index] );
}
#endif // OUR_STRING_H
