#ifndef JOB_H
#define JOB_H

/**************************************************************
 *  
 * File: job.h
 *
 * Description: Declares the Job class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <string>
#include "callback.h"
#include "refcount.h"

/* Constants and defines */

class Job : public Counted {
public:
  enum Status {
    SUCCESS,
    PENDING,
    FAILURE
  };
  Job( SPointer< Callback<Job*> > cb, const char* whatToPrint );
  const char* getContent() const;
  void complete( Status s );
  Status getStatus() const;
private:
  Status myStatus;
  SPointer< Callback<Job*> > myCB;
  std::string myContent;
};

#endif
