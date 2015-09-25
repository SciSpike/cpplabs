#ifndef CARD_H
#define CARD_H

/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the card class.
 */

// Definition of the enum defining the card suits
enum Suit { 
   CLUBS=0, 
   DIAMONDS=1, 
   HEARTS=2, 
   SPADES=3 
};

/*
 * The declaration of the Card class
 */
class Card {
public:
      // Constructor
   Card( int _value, Suit _suit );
   
   int   getValue();
   Suit getSuit();

   const char* suitAsString( Suit _suit );
   void print();

private:
   int   myValue; // Valid values 1-13, 1=Ace, ... 13=King
   Suit mySuit;   // Suit of this card
};

#endif
