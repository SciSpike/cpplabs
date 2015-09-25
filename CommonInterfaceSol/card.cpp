/**************************************************************
 *  
 * File: card.cpp
 *
 * Description: Class Card is implemented in this file. 
 *              card.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "card.h"
#include <iostream>

using namespace std;

/* Constants and defines */


/****************************************************************
 *
 * Description: Constructor of Card
 *
 * Pre-Conditions: _value should be between 1-13
 * 
 * Post Conditions: Value of this card will be set.
 *
 * Exceptions: None
 *
 ***************************************************************/

Card::Card
(
 int _value,        // The value for this card should be 1-13
 Suit _suit         // Suit for this card 
)
: myValue( _value ),
  mySuit( _suit )
{
}

/****************************************************************
 *
 * Description: Gets the value of this card
 *
 * Returns: Value of this card which can be 1-13
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Card::getValue()
{
	return( myValue );
}

/****************************************************************
 *
 * Description: Gets the suit of this Card
 *
 * Returns: Suit enum of this card
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Suit Card::getSuit()
{
	return( mySuit );
}

/****************************************************************
 *
 * Description: Gets Suit value as string
 *
 * Returns: String name of this suit
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/
const char* Card::suitAsString(Suit _suit ) {
  switch( _suit ) {
   case CLUBS:
      return "CLUBS";
   case DIAMONDS:
      return "DIAMONDS";
   case HEARTS:
      return "HEARTS";
   case SPADES:
      return "SPADES";
   default:
      return "UNKNOWN";
   }
}

/****************************************************************
 *
 * Description: Debugging method, prints present information on
 *              this class on screen.
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

void Card::dumpEntry()
{
	cout << "Card " << myValue << " of " <<
		suitAsString( mySuit ) << endl;
}
