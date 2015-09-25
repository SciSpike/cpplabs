#ifndef OBSBUTTON_H
#define OBSBUTTON_H

/**************************************************************
 *  
 * File: obsbutton.h
 *
 * Description: Defines the ObservableButton class
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "button.h"
#include "callback.h"

/* Constants and defines */

class ObservableButton : public Button {
public:
  ObservableButton();
  ~ObservableButton();
  void setObserver( Callback * cb );
  void removeObserver();
protected:
  void onClicked();
private:
  Callback *observer;
};

#endif
