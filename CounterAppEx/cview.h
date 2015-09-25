#ifndef CVIEW_H
#define CVIEW_H

/**************************************************************
 *  
 * File: cview.h
 *
 * Description: Defines the CounterView class
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "counter.h"
#include "tfield.h"

class CounterView {
public:
  CounterView (Counter* c );
  void increment();
  void decrement();
private:
  Counter *myCounter;
  TextField myTextField;
};

#endif
