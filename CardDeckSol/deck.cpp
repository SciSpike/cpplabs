/*
 * Copyright SciSpike  
 */

#include "deck.h"
#include "card.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

// The deck will be suffled based on this constant
#define SHUFFLE_TIMES     100

using namespace std;

/*
 * Constructor for Deck.
 */
Deck::Deck() {
      // Creating the cards
   currentTop = 0;
   for( int j = 1; j<=13; j++ ) {
         // Adding Club Suit Cards
         cards.addAtEnd(new Card(j, CLUBS));
      
         // Adding Diamond Suit Cards
         cards.addAtEnd(new Card(j, DIAMONDS));
      
         // Adding Heart Suit Cards
         cards.addAtEnd(new Card( j, HEARTS));
      
         // Adding Spade Suit Cards
         cards.addAtEnd(new Card( j, SPADES));
   }
}

/*
 * Destructor for deck
 */
Deck::~Deck() {
	for (int i = 0; i < cards.getSize(); i++ ) {
		delete cards[i];
	}
}

/*
 * Shuffles the cards in the deck
 */
void Deck::shuffle()
{
      // Finding a Seed for Random Number
   srand( (unsigned)time( NULL ) );

    int theSize = cards.getSize() - currentTop;
         // Finding how many times to do the Shuffling
   int howManyTimes = SHUFFLE_TIMES * theSize;

      // Do the Shufflings by picking two random places and 
      // then swapping the cards between those places
   for (int i = 0; i<howManyTimes; i++ ) {
      int index1 = rand() % theSize;
      int index2 = rand() % theSize;
	  cards.swap( index1, index2 );
   }
   currentTop = 0;
}

/*
 * Get the top card from the deck
 */
Card* Deck::getTopCard() {
   Card * rc;

   rc = cards[currentTop];

   currentTop++; // increment the current top

   return( rc );
}

/*
 * Get the number of cards left in the deck
 */
int Deck::getNumberOfCardsLeft() {
	return cards.getSize();
}

/*
 * Print the deck
 */
void Deck::print() {
   int vectorSize = cards.getSize();

   cout << "The number of Cards in this deck is " << vectorSize 
        << "." << endl;
   for( int i=currentTop; i<vectorSize; i++ ) {
	   cards[i]->print();
   }
}
