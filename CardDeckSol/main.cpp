/*
 * Copyright SciSpike
 *
 * This file contains the test code for the deck
 */

#include <iostream>
#include "card.h"
#include "deck.h"

using namespace std;

/*
 * The test function
 */
int main() {
   cout << "Test Deck Program\n" << endl;
	
  Deck theDeck;
  theDeck.print();

  cout << "Shuffling the deck..." << endl;
  theDeck.shuffle();
  theDeck.print();

  cout << "Number of Card in Deck: " << 
           theDeck.getNumberOfCardsLeft() << endl;

  Card* topCard = theDeck.getTopCard();
  cout << "The Top Card of deck is ";
  topCard->print();

  cout << "Number of Card in deck : " << 
	  theDeck.getNumberOfCardsLeft() << endl;

  cout << "Shuffling deck..." << endl;
  theDeck.shuffle();
  theDeck.print();

  return 0;
}
