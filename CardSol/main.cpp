/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Card Test Program
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "card.h"

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: main to where Card program is tested.
 *
 * Returns: none
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int main()
{
  cout << "Test Card Program\n" << endl;

  cout << "Making an ACE of Hearts card..." << endl;
  Card* ace = new Card;
  ace->setValue( 1 );
  ace->setSuit( HEARTS );
  ace->print();

  return 0;
}
