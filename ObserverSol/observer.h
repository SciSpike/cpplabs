#ifndef OBSERVER_H
#define OBSERVER_H

/**************************************************************
 *  
 * File: observer.h
 *
 * Description: Defines the observer interface of the observer
 *              pattern.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */

/* Constants and defines */
class Subject;

class Observer {
public:
  virtual void update( Subject* s ) = 0;
  virtual ~Observer() {}
};

#endif
