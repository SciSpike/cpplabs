/*
 * Copyrights SciSpike
 *
 * This file contains the implementation of the Card class
 */

#include "card.h"
#include <iostream>

using namespace std;

/*
 * The Card constructor
 */
Card::Card(int _value, Suit _suit) {
   myValue = _value;
   mySuit =  _suit;
}

/*
 * Gets the value of the card
 */
int Card::getValue() {
   return myValue;
}

/*
 * Gets the suit of the card
 */
Suit Card::getSuit() {
   return mySuit;
}

/*
 * Returns the suit as a string
 */
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

/*
 * Prints the card
 */
void Card::print() {
   cout << "Card " << myValue << " of " <<
      suitAsString( mySuit ) << endl;
}
