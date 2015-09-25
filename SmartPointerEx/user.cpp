/**************************************************************
 *  
 * File: user.cpp
 *
 * Description: Defines the implementation for xx
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "user.h"
#include "job.h"

using namespace std;

/* Const and defines */


/****************************************************************
 *
 * Description: Translates the job status to a human readable
 *              string.
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
static const char* translateStatus( Job::Status s ) {
  switch ( s ) {
  case Job::SUCCESS:
    return "Success";
  case Job::FAILURE:
    return "Failure";
  case Job::PENDING:
    return "Pending";
  default:
    return "Unknown";
  }
}

/****************************************************************
 *
 * Description: jobDone is called from the job when a print job
 *              is done.
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
void User::jobDone( Job* j ) {
  cout << "Job done..." << endl
       << "Status: " << translateStatus( j->getStatus() ) << endl
       << "Content:" << endl
       << j->getContent() << endl;
}
