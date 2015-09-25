/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Static Members Excercise.
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
 * Description: main to where Static Members is tested.
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
  cout << "Static Members Exercise Program" << endl;

  // Here calling methods though there is no instance of
  // Rectangle Object are there
  // TODO Undo the following code
 /* cout << "\n\nBEFORE: Number of Shape Instances Created:" <<
	  Shape::getNoOfShapeInstances() << " and Deleted:"
	  << Shape::getNoOfDeletedShapeInstances() << endl;

  cout << "BEFORE: Number of Rectangle Instances Created:" <<
	  Rectangle::getNoOfRectangleInstances() << " and Deleted:"
	  << Rectangle::getNoOfDeletedRectangleInstances() << endl;
*/
  cout << "\n\nRectangle 1 gets created..." << endl;
  Rectangle* rectangle = new Rectangle( 10, 20, 0, 0 );
  rectangle->draw();
  delete rectangle;

  cout << "\n\nRectangle 2 gets created..." << endl;
  Rectangle* rectangle2 = new Rectangle( 10, 20, 0, 0 );
  rectangle2->draw();
  delete rectangle2;

  // Here calling methods though there is no instance of
  // Rectangle Object are there
  //TODO undo the following code
 /* cout << "\n\nAFTER: Number of Shape Instances Created:" <<
	  Shape::getNoOfShapeInstances() << " and Deleted:"
	  << Shape::getNoOfDeletedShapeInstances() << endl;

  cout << "AFTER: Number of Rectangle Instances Created:" <<
	  Rectangle::getNoOfRectangleInstances() << " and Deleted:"
	  << Rectangle::getNoOfDeletedRectangleInstances() << endl;
	  */

  return 0;
}
