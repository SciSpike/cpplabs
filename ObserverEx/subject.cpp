/**************************************************************
 *  
 * File: subject.cpp
 *
 * Description: Defines the implementation for Subject of the
 *              observer pattern
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "subject.h"

/* Constants and defines */

/****************************************************************
 *
 * Description: Constructor for Subject
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
Subject::Subject() {
}

/****************************************************************
 *
 * Description: Destructor for Subject
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
Subject::~Subject() {
}

/****************************************************************
 *
 * Description: Attach an observer
 *
 * Pre:  obs must be pointing to a valid observer
 *
 * Post: If the subject change, the observer is notified
 *       When to notify is decided by the subclass
 *
 ***************************************************************/
void Subject::attach( Observer* obs ) {
   //TODO: Store the observer
}

/****************************************************************
 *
 * Description: Detatch an observer
 *
 * Pre:  None
 *
 * Post: If the observer is one of the observers remembered, it is
 *       now forgotten.
 *
 ***************************************************************/
void Subject::detach( Observer* obs ) {
   // TODO: detatch the observer
}

/****************************************************************
 *
 * Description: Notify all attached observers
 *
 * Pre:  None
 *
 * Post: Update has been called on all attatched observers
 *
 ***************************************************************/
// TODO: you need to implement a function that the subclasses
// TODO: can call to notify the observers


