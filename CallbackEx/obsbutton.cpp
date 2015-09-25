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
   // TODO: Initialize member data here
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
   // TODO: You may want to delete the callback to the observer
   // TODO: here. That is if you elected to use a scheme of placing
   // TODO: callbacks on the heap.
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
   // TODO: Inform the observer here
}

/****************************************************************
 *
 * Description: Set the observer
 *
 * Pre:  
 *
 * Post: 
 *
 ***************************************************************/
// TODO: Implement a member function to attach the observer

/****************************************************************
 *
 * Description: Remove the observer
 *
 * Pre:  None
 *
 * Post: 
 *
 ***************************************************************/
// TODO: Implement a member function to detach the observer