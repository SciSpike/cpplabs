/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Safe Casting Excercise.
 *
 * Author: SciSpike,
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream.h>
#include "rectangle.h"

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
  cout << "Safe Casting Exercise Program" << endl;
  
  Shape* anyShape = new Rectangle();
  Shape* badShape = new Shape( "BadShape", 10, 20 );

  // Now to draw it has to be Rectangle, so ..
  // TODO Declare this Rectangle* mayBeRectangle and using
  // safe casting assign anyShape to mayBeRectangle

  // Problem Code...
  // TODO Try safe casting to assigning badShape to mayBeRectangle

  cout << "\n\nDone Testing" << endl;
  delete anyShape;
  delete badShape;

  return 0;
}
