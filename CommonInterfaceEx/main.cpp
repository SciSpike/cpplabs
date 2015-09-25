/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Detecting Common Interface Excercise.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "logger.h"
#include "card.h"
#include "employee.h"

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: main to where Detecting Common Interface is
 *              tested.
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int main()
{
   // TODO See the functions that Debugger needs. Move those
   // functions into a class called Debuggable with abstract
   // method. Use only that in Debugger class.

  cout << "Common Interface Detection Exercise Program" << endl;

  Logger l;

  Card* ace = new Card( 1, SPADES );
  l.addCard( ace );

  // TODO: try adding a stack allocated Card (no pointer)
  //Card king;
  //l.addCard( king );

  Employee* joe = new Employee( "Joe Montana", 100000 );
  l.addEmployee( joe );

  // TODO: try adding a stack-allocated Employee (no pointer)
  //Employee jack;
  //l.addEmployee( jack );

  l.dumpSnapshot();

  // TODO: any cleanup left?

  return 0;
}
