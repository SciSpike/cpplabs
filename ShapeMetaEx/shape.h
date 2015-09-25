#ifndef SHAPE_H
#define SHAPE_H

/**************************************************************
 *  
 * File: shape.h
 *
 * Description: Declares the Shape class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shapemeta.h"
#include <iostream>
/* Constants and defines */

class Shape {
public:
  // this class is made non abstract because of the
  // instanciation algorithm in MetaImplementation
  Shape( std::istream&) {}
  Shape() {}
  virtual void store( std::ostream& os ) {}
  virtual Meta* getMeta();
  static Meta* getClass();
private:
  static MetaImplementation<Shape> CLASS;
};

#endif
