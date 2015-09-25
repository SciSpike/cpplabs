/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Eliminating Casting Excercise.
 *
 * Author: SciSpike,
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
 * Description: main to where Safe Casting is tested.
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

  cout << "\n\nTrying to draw anyShape..." << endl;
  //TODO Should be able to call this anyShape->draw();
 
  cout << "\n\nTrying to draw badShape..." << endl;
  //TODO Should be able to call this anyShape->draw();

  cout << "\n\nDone Testing" << endl;
  delete anyShape;
  delete badShape;

  return 0;
}
