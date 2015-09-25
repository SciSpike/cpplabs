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
#include <iostream.h>
#include <queue>
#include "user.h"
#include "job.h"
#include "printer.h"

/* Constants and defines */
      

void simulate( Printer& p, User& u ) {
  // TODO The member callback could be wrapped with a smart pointer
  // TODO We can also use a smart pointer for the jobs (see comment
  // TODO at the end of this function
  Job *j1 = new Job( new MFCallback<User,Job*>( &u, &User::jobDone), "Job 1" );
  Job *j2 = new Job( new MFCallback<User,Job*>( &u, &User::jobDone), "Job 2" );
  Job *j3 = new Job( new MFCallback<User,Job*>( &u, &User::jobDone), "Job 3" );
  p.addJob( j1 );
  p.addJob( j2 );
  p.addJob( j3 );
  p.done();
  p.failure();
  p.done();
  // TODO We have a memory leak here since we do not delete the jobs
  // TODO We might delete the jobs, but what if the user or printer
  // TODO want to store the a history of all complete jobs
  // TODO Maybe a better solution would be to use smart pointer!
}

int main() {
  Printer p;
  User joe;
  simulate(p,joe);
  return 0;
}
