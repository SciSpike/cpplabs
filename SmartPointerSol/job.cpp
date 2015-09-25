/**************************************************************
 *  
 * File: job.cpp
 *
 * Description: Defines the implementation for Job
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "job.h"
#include <iostream.h>

/* Const and defines */

/****************************************************************
 *
 * Description: Constructor of Job. Passes in the User to inform
 *              and the content of the print job.
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
Job::Job( SPointer< Callback<Job*> > cb, const char* whatToPrint ) {
  myCB = cb;
  myContent = whatToPrint;
  myStatus = PENDING;
}


/****************************************************************
 *
 * Description: Returns the content to the requester
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
const char* Job::getContent() const {
  return myContent.data();
}

/****************************************************************
 *
 * Description: The printer has completed the job. Inform the user.
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
void Job::complete( Status s ) {
  myStatus = s;
  myCB->execute( this );
  myCB = 0;
}

/****************************************************************
 *
 * Description: Returns the status to the requester
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
Job::Status Job::getStatus() const {
  return myStatus;
}
