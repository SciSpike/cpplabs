/**************************************************************
 *  
 * File: printer.cpp
 *
 * Description: Defines the implementation for Printer
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "printer.h"
#include <deque>

/* Const and defines */

/****************************************************************
 *
 * Description: The current print job failed
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
void Printer::failure() {
  Job *firstJob = jobs.front();
  firstJob->complete( Job::FAILURE );
  jobs.pop_front();
}

/****************************************************************
 *
 * Description: The current print job completed successfully
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
void Printer::done() {
  Job *firstJob = jobs.front();
  firstJob->complete( Job::SUCCESS );
  jobs.pop_front();
}

/****************************************************************
 *
 * Description: A new job has been added to the printer
 *
 * Pre:  None
 *
 * Post: None
 *
 ***************************************************************/
void Printer::addJob( Job* j ) {
  jobs.push_back( j );
}

