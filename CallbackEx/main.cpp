/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for the counter application
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "counter.h"
#include "cview.h"
#include "obsbutton.h"
#include "callback.h"

#ifdef  _MSC_VER
#pragma warning( disable : 4786 )
#endif

/* Constants and defines */
/****************************************************************
 *
 * Description: 
 *   Main for the counter application. The main function creates
 *   and sets up the various objects, then simulates some click
 *   of buttons
 *
 ***************************************************************/
int main() {
  Counter c;           // create the model object
  ObservableButton ib ;  // create the buttons and attatch them...
  ObservableButton db ;  // ...to the view
  CounterView cv( &c );  // create the view object

  // TODO: Connect the buttons and the view with callbacks here

  /*
   * Simulate that increment was pressed twice, then decrement
   */
  ib.clicked();
  ib.clicked();
  db.clicked();

  return 0;
}
