#ifndef BUTTON_H
#define BUTTON_H
/**************************************************************
 *  
 * File: button.h
 *
 * Description: Defines the abstract button class
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */

class Button {
public:
  // notice the use of template method (onClicked)
  void clicked() {
    onClicked();
  }
protected:
  // guarantied to be called from clicked
  // the subclasses must redefine this operation
  // to implement application specific behavior
  virtual void onClicked() = 0;
};

#endif
