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
  observer = 0;
}

/****************************************************************
 *
 * Description: Destructor for the ObsButton
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
ObservableButton::~ObservableButton() {
  delete observer;
}

/****************************************************************
 *
 * Description: Template method defined by button. Called when
 *              the button is pressed
 *
 * Pre:  None
 *
 * Post: Notify observer
 *
 ***************************************************************/
void ObservableButton::onClicked() {
  if ( observer ) {
    observer->execute();
  }
}

/****************************************************************
 *
 * Description: Set the observer
 *
 * Pre:  The observer must be on the heap
 *
 * Post: Set the observer
 *       Delete the old one (if one is already set)
 *
 ***************************************************************/
void ObservableButton::setObserver( Callback* cb ) {
  if ( observer )
     delete observer;
  observer = cb;
}

/****************************************************************
 *
 * Description: Remove the observer
 *
 * Pre:  None
 *
 * Post: Delete the observer (if one is already set)
 *
 ***************************************************************/
void ObservableButton::removeObserver() {
  delete observer;
  observer = 0;
}
