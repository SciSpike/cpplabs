/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Virtual Destructors Excercise.
 *
 * Author: SciSpike
 *
 ***************************************************************/

#include <iostream.h>
#include "rectangle.h"

/* Create destructors for the class Shape and the
   class Rectangle.  Perform cleanup required
   by the class (if any), and print a message that
   reports when the function is called. */

int main() {

  cout << "Virtual Destructors Exercise\n" << endl;

  Rectangle * r = new Rectangle;
  // TODO: Make sure both destructors are called
  delete r;
  
  const int NumShapes = 3;

  Shape * shapeList[NumShapes];

  for(int i=0; i<NumShapes; i++)
	  shapeList[i] = new Rectangle;

  for(int i=0; i<NumShapes; i++)
	  shapeList[i]->draw();

  /* TODO: Make sure both the Shape and Rectangle
           destructors get called */
  for(int i=0; i<NumShapes; i++)
	  delete shapeList[i];

  return 0;
}
