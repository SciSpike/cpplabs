#ifndef SQUARE_H
#define SQUARE_H

/**************************************************************
 *  
 * File: square.h
 *
 * Description: Class Square is defined in this class. 
 *              square.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "rectangle.h"

/* Pre-Declarations */

/* Constants and defines */

/****************************************************************
 *
 * Description: A Square is four straight line with ends 
 *              joined together at right angles between adjacent
 *              lines. 
 *
 * Exceptions: None
 *
 ***************************************************************/

class Square : public Rectangle
{
public:
	// Constructor
	Square( const int side=20, const int x=0, const int y=0 );
	// Copy Constructor
	Square( const Square& square );
	// Destructor
    virtual ~Square();

	// Assignment Operator
	Square& operator=( const Square& square );

	int          getSide() const;

private:
};

#endif // SQUARE_H