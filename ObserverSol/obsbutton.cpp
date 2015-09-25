/**************************************************************
 *  
 * File: obsbutton.cpp
 *
 * Description: Defines the implementation for IncButton
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "obsbutton.h"

/****************************************************************
 *
 * Description: Constructor for the ObsButton
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
ObservableButton::ObservableButton() {
}

/****************************************************************
 *
 * Description: Template method defined by button. Called when
 *              the button is pressed
 *
 * Pre:  None
 *
 * Post: Notify dependent objects
 *
 ***************************************************************/
void ObservableButton::onClicked() {
  notify();
}
