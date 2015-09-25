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
#include "subject.h"

/* Constants and defines */

class ObservableButton : public Button, public Subject {
public:
  ObservableButton();
protected:
  void onClicked();
};

#endif
