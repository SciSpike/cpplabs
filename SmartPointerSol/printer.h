#ifndef PRINTER_H
#define PRINTER_H

/**************************************************************
 *  
 * File: printer.h
 *
 * Description: Declares the Printer class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "job.h"
#include <deque>

/* Constants and defines */

class Printer {
public:
  void failure();
  void done();
  void addJob( SPointer<Job> j );
private:
  std::deque< SPointer<Job> > jobs;
};

#endif
