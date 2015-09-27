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
#include <fstream>
#include <iostream>
#include "shape.h"
#include "rect.h"
#include "oval.h"

using namespace std;

void storeSomeShapes() {
  ofstream of( "shapes.txt" );
  Rect r;
  Oval o;
  r.store( of );
  o.store( of );
}

void restoreSomeShapes() {
  ifstream in( "shapes.txt" );
  while ( !in.eof() ) {
     Shape * s = Shape::getClass()->create( in );
     if ( s != 0 )
        cout << "created a shape " << s->getMeta()->getName() << endl;
     delete s;
  }
}

/* Constants and defines */
/****************************************************************
 *
 * Description: 
 *
 ***************************************************************/
int main() {
  storeSomeShapes();
  restoreSomeShapes();
  return 0;
}
