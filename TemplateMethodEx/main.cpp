/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Template Framekwork Excercise
 *
 * Author: SciSpike
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
 * Description: main to where Template Framekwork is tested.
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
  cout << "Template Framekwork Exercise Program" << endl;

  Shape * s = new Rectangle(  10, 100,200, 10 );

  s->print();

  return 0;
}
