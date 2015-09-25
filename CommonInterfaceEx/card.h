#ifndef CARD_H
#define CARD_H

/**************************************************************
 *  
 * File: card.h
 *
 * Description: Class Card is defined in this class. card.cpp
 *              has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */


/* Pre-Declarations */


/* Constants and defines */
enum Suit { CLUBS=0, DIAMONDS=1, HEARTS=3, SPADES=4 };

/****************************************************************
 *
 * Description: The Card class which represents a card in playing
 *              deck. A card has a value and suit.
 *
 * Exceptions: None
 *
 ***************************************************************/

// TODO Inhereit from Loggable class
class Card
{
public:
	Card( int _value, Suit _suit );

	int   getValue();
    Suit getSuit();

	const char* suitAsString( Suit _suit );
	void print();

private:
	int   myValue;        // Valid values 1-13, 1=Ace, ... 13=King
	Suit  mySuit;         // Suit of this card
};

#endif   // CARD_H
