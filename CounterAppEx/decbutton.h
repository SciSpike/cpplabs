#ifndef DECBUTTON_H
#define DECBUTTON_H

/**************************************************************
 *  
 * File: decbutton.h
 *
 * Description: Defines the DecButton class
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "button.h"
#include "cview.h"

class DecButton : public Button {
public:
  DecButton( CounterView *cv );
protected:
  void onClicked();
  CounterView *myCounterView;
};

#endif
