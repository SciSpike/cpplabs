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
#include "observer.h"
#include "obsbutton.h"

class CounterView : public Observer {
public:
  CounterView (Counter* c, ObservableButton *inc, ObservableButton *dec );
  void update( Subject *s );
private:
  void increment();
  void decrement();
  Counter *myCounter;
  TextField myTextField;
  ObservableButton *incButton, *decButton;
};

#endif
