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
#include "incbutton.h"
#include "decbutton.h"

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
  CounterView cv(&c);  // create the view object
  IncButton ib (&cv);  // create the buttons and attatch them...
  DecButton db (&cv);  // ...to the view

  /*
   * Simulate that increment was pressed twice, then decrement
   */
  ib.clicked();
  ib.clicked();
  db.clicked();

  return 0;
}
