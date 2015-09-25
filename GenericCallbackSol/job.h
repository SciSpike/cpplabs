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

/* Constants and defines */

class Job {
public:
  enum Status {
    SUCCESS,
    PENDING,
    FAILURE
  };
  Job( Callback<Job*> *cb, const char* whatToPrint );
  const char* getContent() const;
  void complete( Status s );
  Status getStatus() const;
private:
  Status myStatus;
  Callback<Job*>* myCB;
  std::string myContent;
};

#endif
