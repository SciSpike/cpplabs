/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Eliminating Casting Excercise.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "rectangle.h"

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: main to where Eliminating Casting is tested.
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
  cout << "Eliminating Casting Exercise Program" << endl;

  
  Shape* anyShape = new Rectangle();
  Shape* badShape = new Shape( "BadShape", 10, 20 );

  // Now to draw it has to be Rectangle, so ..

  cout << "\n\nTrying to draw..." << endl;
  anyShape->draw();


  // Problem Code... Cannot create abstract class
  cout << "Trying to draw badShape..." << endl;
  badShape->draw();


  cout << "\n\nDone Testing" << endl;
  delete anyShape;
  delete badShape;

  return 0;
}
