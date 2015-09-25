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
#include <deque>
#include "observer.h"

class Subject {
public:
  Subject();
  void attach( Observer* obs );
  void detach( Observer* obs );
  virtual ~Subject();
protected:
  void notify();
private:
  std::deque<Observer*> observers;
};

#endif
