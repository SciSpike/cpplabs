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

// TODO: The ObservableButton probably muse inherit of
// TODO: another class too...
class ObservableButton : public Button {
public:
  ObservableButton();
protected:
  void onClicked();
};

#endif
