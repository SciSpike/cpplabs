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
#include <queue>
#include "user.h"
#include "job.h"
#include "printer.h"
#include <iostream>

using namespace std;

/* Constants and defines */
      

void simulate( Printer& p, User& u ) {
  Job j1( new MFCallback<User,Job*>( &u, &User::jobDone), "Job 1" );
  Job j2( new MFCallback<User,Job*>( &u, &User::jobDone), "Job 2" );
  Job j3( new MFCallback<User,Job*>( &u, &User::jobDone), "Job 3" );
  p.addJob( &j1 );
  p.addJob( &j2 );
  p.addJob( &j3 );
  p.done();
  p.failure();
  p.done();
}

int main() {
  Printer p;
  User joe;
  simulate(p,joe);
  return 0;
}
