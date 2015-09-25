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
  // TODO: You will have to declare member functions that
  // TODO: allows the observers to register and deregister
  // TODO: for the click event
protected:
  void onClicked();
private:
  // TODO: You will have to remember the callback here
  // TODO: You don't have to implement a collection
  // TODO: A simple callback pointer will do :-)
};

#endif
