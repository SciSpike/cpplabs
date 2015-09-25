/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Generic Callback project
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include <queue>
#include "user.h"
#include "job.h"
#include "printer.h"

using namespace std;

/* Constants and defines */


/**************************************************************
 *  
 * Description: This function simulate the use of the printer
 *
 * Script:
 *   Create 3 jobs then simulate the completion of them
 *   The first and the third job succeeds, the second jon
 *   fails.
 *
 ***************************************************************/
void simulate( Printer& p, User& u ) {
  
  // TODO: After you have decoupled the Job from the user
  // TODO: (and maybe even the Printer from the job), the
  // TODO: Jobs probably are constructed differently
  // TODO: Maybe even the add job on printer is different?
  Job j1( &u, "Job 1" );
  Job j2( &u, "Job 2" );
  Job j3( &u, "Job 3" );
  p.addJob( &j1 );
  p.addJob( &j2 );
  p.addJob( &j3 );
  p.done();
  p.failure();
  p.done();
}

/**************************************************************
 *  
 * Description: The main function creates a Printer and a User
 *   then calls the simulate function.
 *
 ***************************************************************/
int main() {
  Printer p;
  User joe;
  simulate(p,joe);
  return 0;
}
