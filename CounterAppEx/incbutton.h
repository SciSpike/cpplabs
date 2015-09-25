#ifndef INCBUTTON_H
#define INCBUTTON_H

/**************************************************************
 *  
 * File: incbutton.h
 *
 * Description: Defines the IncButton class
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "button.h"

/* Constants and defines */
class CounterView;

class IncButton : public Button {
public:
  IncButton( CounterView *cv );
protected:
  void onClicked();
  CounterView *myCounterView;
};

#endif
