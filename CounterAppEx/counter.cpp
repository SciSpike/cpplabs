/**************************************************************
 *  
 * File: decbutton.cpp
 *
 * Description: Defines the implementation for DecButton
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "counter.h"

/* Constants and defines */

/****************************************************************
 *
 * Description: Constructor for the Counter
 *
 * Pre:  minValue <= i <= maxValue (note thate all these values
 *       are defaulted in the constructor declaration)
 *
 * Post: None
 *
 ***************************************************************/
Counter::Counter( int i, int minValue, int maxValue ) {
  myValue = i;
  min = minValue;
  max = maxValue;
}

/****************************************************************
 *
 * Description: Increment the counter
 *
 * Pre:  None
 *
 * Post: if myValue < max then increment myValue;
 *
 ***************************************************************/
void Counter::increment() {
  if ( myValue < max ) {
    myValue++;
  }
}

/****************************************************************
 *
 * Description: Decrement the counter
 *
 * Pre:  None
 *
 * Post: if myValue > min then increment myValue;
 *
 ***************************************************************/
void Counter::decrement() {
  if ( myValue > min ) {
    myValue--;
  }
}

/****************************************************************
 *
 * Description: Returns the current count
 *
 * Pre:  None
 *
 * Post: return == myValue
 *
 ***************************************************************/
int Counter::getCount() {
  return myValue;
}
