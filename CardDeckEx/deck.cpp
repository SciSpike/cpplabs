/*
 * Copyright SciSpike  
 */

#include "deck.h"
#include "card.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

// Namespaces used
 using namespace std;

// The deck will be suffled based on this constant
#define SHUFFLE_TIMES     100

/*
 * Constructor for Deck.
 */
Deck::Deck() {
      // Creating the cards
   currentTop = 0;
   for( int j = 1; j<=13; j++ ) {
         // Adding Club Suit Cards
         // TODO Add CLUBS card of value j
         // new Card(j, CLUBS);
      
         // Adding Diamond Suit Cards
         // TODO Add DIAMONDS card of value j
         // new Card(j, DIAMONDS);
      
         // Adding Heart Suit Cards
         // TODO Add HEARTS card of value j
         // new Card( j, HEARTS)
      
         // Adding Spade Suit Cards
         // TODO Add SPADES card of value j
         // new Card( j, SPADES)
   }
}

/*
 * Destructor for deck
 */
Deck::~Deck() {
      // TODO: You'll have to delete the cards you 
      // created in the constructor...
}

/*
 * Shuffles the cards in the deck
 */
void Deck::shuffle()
{
      // Finding a Seed for Random Number
   srand( (unsigned)time( NULL ) );

      //int theSize = // TODO: Access the IDVector to get the size
         // Finding how many times to do the Shuffling
   int howManyTimes = SHUFFLE_TIMES * theSize;

      // Do the Shufflings by picking two random places and 
      // then swapping the cards between those places
   for (int i = 0; i<howManyTimes; i++ ) {
      int index1 = rand() % theSize;
      int index2 = rand() % theSize;
         // TODO : Add code swap Card from two random places 
   }
}

/*
 * Get the top card from the deck
 */
Card* Deck::getTopCard() {
      // TODO: return the address of the top card
}

/*
 * Get the number of cards left in the deck
 */
int Deck::getNumberOfCardsLeft() {
      // TODO return the size of the IDVector
}

/*
 * Print the deck
 */
void Deck::print() {
   // int vectorSize = // TODO: initialize the vectorsize

   cout << "The number of Cards in this deck is " << vectorSize 
        << "." << endl;
   for( int i=currentTop; i<vectorSize; i++ ) {
         // TODO Use Delegation to print each card.
   }
}
