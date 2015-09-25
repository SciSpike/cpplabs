#ifndef DECK_H
#define DECK_H

/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Deck class
 */


#include "id_vector.h"
#include "card.h"

class Deck {
public:
   Deck();
   ~Deck();

   void  shuffle();
   Card* getTopCard();

   int getNumberOfCardsLeft();

   void print();

private:
   int currentTop;
   IDVector<Card*> cards;
};

#endif
