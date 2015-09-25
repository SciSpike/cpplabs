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
  Rectangle* mayBeRectangle = dynamic_cast<Rectangle*>(anyShape);

  cout << "\n\nTrying to draw..." << endl;
  if( mayBeRectangle )
	mayBeRectangle->draw();
  else
	cout << "Cannot draw this shape" << endl;

  // Problem Code...
  mayBeRectangle = dynamic_cast<Rectangle*>(badShape);
  if( mayBeRectangle )
	mayBeRectangle->draw();
  else
	cout << "Cannot draw this shape" << endl;

  cout << "\n\nDone Testing" << endl;
  delete anyShape;
  delete badShape;

  return 0;
}
