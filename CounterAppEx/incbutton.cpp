/**************************************************************
 *  
 * File: incbutton.cpp
 *
 * Description: Defines the implementation for IncButton
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "incbutton.h"
#include "cview.h"

/* Constants and defines */

/****************************************************************
 *
 * Description: Constructor for the IncButton
 *
 * Pre:  cv points to a valid CounterView (not null)
 *
 * Post: None
 *
 ***************************************************************/
IncButton::IncButton( CounterView *cv ) {
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
void IncButton::onClicked() {
  myCounterView->increment();
}
  
