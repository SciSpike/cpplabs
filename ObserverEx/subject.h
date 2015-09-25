#ifndef SUBJECT_H
#define SUBJECT_H

/**************************************************************
 *  
 * File: subject.h
 *
 * Description: Defines the Subject class of the observer pattern
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
// TODO: Include the proper list implementation
#include "observer.h"

class Subject {
public:
  Subject();
  void attach( Observer* obs );
  void detach( Observer* obs );
  virtual ~Subject();
protected:
  // TODO: You need a notification function for the subclasses
private:
  // TODO: You need an way of storing the observers
};

#endif
