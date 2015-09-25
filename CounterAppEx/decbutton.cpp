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
#include "decbutton.h"
#include "cview.h"

/* Constants and defines */

/****************************************************************
 *
 * Description: Constructor for the DecButton
 *
 * Pre:  cv points to a valid CounterView (not null)
 *
 * Post: None
 *
 ***************************************************************/
DecButton::DecButton( CounterView *cv ) {
  myCounterView = cv;
}

/****************************************************************
 *
 * Description: Template method defined by button. Called when
 *              the button is pressed
 *
 * Pre:  None
 *
 * Post: Decrement myCounterView
 *
 ***************************************************************/
void DecButton::onClicked() {
  myCounterView->decrement();
}
  

