/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Dangerous Casting Excercise.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "rectangle.h"
#include "square.h"
#include "document.h"

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: main to where Dangerous Casting is tested.
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
  cout << "Dangerous Casting Exercise Program" << endl;

  Shape* anyShape = new Rectangle();

  // Now to draw it has to be Rectangle, so ..
  // Dangerous but Good Casting...
  // TODO: try priniting anyShape as Rectangle by casting it into
  //       Rectangle

  // Dangerous and Bad Casting, a Square into a Document
  // TODO: Cast the anyShape into Docuemnt varaible and try
  //       printing the document and watch it thrash.

  cout << "\n\nDone Testing" << endl;
  delete anyShape;

  return 0;
}
