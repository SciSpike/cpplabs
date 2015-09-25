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
#include <iostream>

using namespace std;

/* Const and defines */

// instansiation of meta object
MetaImplementation<Shape> Shape::CLASS("Shape", 0, "#SHAPE" );

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
Meta* Shape::getClass() {
  return &Shape::CLASS;
}

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta* Shape::getMeta() {
  return &Shape::CLASS;
}

