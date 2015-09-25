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
#include "meta.h"

/* Constants and defines */

class Shape {
public:
  // this class is made non abstract because of the
  // instanciation algorithm in MetaImplementation
  Shape() {}
  virtual Meta* getMeta();
  static Meta* getClass();
private:
  static Meta *CLASS;
};

#endif
