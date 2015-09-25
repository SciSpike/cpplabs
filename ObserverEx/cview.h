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

// TODO: CounterView should observe the buttons
// TODO: To achieve this you will probably have to inherit of 
// TODO: some class...
class CounterView {
public:
  CounterView (/* TODO: Decide what to pass to the constructor */ );
  // TODO: Declare the update function from the observer
private:
  void increment(); // note no longer accessible from the outside
  void decrement(); // note no longer accessible from the outside
  Counter *myCounter;
  TextField myTextField;
  // TODO: We probably need to have to have some pointers to the
  // TODO: increment and decrement buttons
};

#endif
