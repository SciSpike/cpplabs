/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for the shape meta exercise
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shape.h"
#include "rect.h"
#include "oval.h"
#include "meta.h"

/* Constants and defines */

#ifdef  _MSC_VER
#pragma warning( disable : 4786 )
#endif

/****************************************************************
 *
 * Description: Test of accessing meta through Meta
 *
 ***************************************************************/
void accessTheMetaThroughMeta() {
  const Meta* m = Meta::find( typeid(Shape) );
  if ( m ) {
    cout << "Shape class found and its name is : " << m->name() << endl;
  } else {
    cout << "Shape class not found" << endl;
  }
}

/****************************************************************
 *
 * Description: Test of accessing meta through instances
 *
 ***************************************************************/
void readMetaThroughObjects() {
  Shape* s = new Oval;
  Meta *m = s->getMeta();
  cout << "Meta object is: " << m->name() << endl;
  cout << "Result of m->isSuper( Shape::getClass() ): " 
       << m->isSuper( Shape::getClass() ) << endl;
}

/****************************************************************
 *
 * Description: Test loop
 *
 ***************************************************************/
int main() {
  accessTheMetaThroughMeta();
  readMetaThroughObjects();
  return 0;
}
