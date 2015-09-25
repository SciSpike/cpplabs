/**************************************************************
 *  
 * File: shape.cpp
 *
 * Description: Defines the implementation for Shape
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shape.h"

/* Const and defines */

// instansiation of meta object
Meta* Shape::CLASS = 0;
static MetaInitializer<Shape> i;

// this is ugly but sometimes necessary. A dummy class is created to 
// initialize the dictionary

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
Meta* Shape::getClass() {
  if ( !Shape::CLASS ) {
    Shape::CLASS = new Meta( typeid(Shape) );
  }
  return Shape::CLASS;
}

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta* Shape::getMeta() {
  return Shape::CLASS;
}

