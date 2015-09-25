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
#include "user.h"
#include <string>

/* Constants and defines */

class Job {
public:
  enum Status {
    SUCCESS,
    PENDING,
    FAILURE
  };
  Job( User* u, const char* whatToPrint );
  const char* getContent() const;
  void complete( Status s );
  Status getStatus() const;
private:
  Status myStatus;
  User* myUser;
  std::string myContent;
};

#endif
