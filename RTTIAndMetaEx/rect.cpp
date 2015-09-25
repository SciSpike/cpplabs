/**************************************************************
 *  
 * File: rect.cpp
 *
 * Description: Defines the implementation for Rect
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "rect.h"

/* Const and defines */


// instansiation of meta object
Meta* Rect::CLASS = 0;
static MetaInitializer<Rect> i;

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
Meta* Rect::getClass() {
  if ( !Rect::CLASS ) {
    Rect::CLASS = new Meta( typeid(Rect) );
    Rect::CLASS->addSuper( Shape::getClass() );
  }
  return Rect::CLASS;
}

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta* Rect::getMeta() {
  return Rect::getClass();
}

/****************************************************************
 *
 * Description: Default constructor (if this was a full 
 *              implementation, the costructor would have
 *              arguments that defined the object.
 *
 ***************************************************************/
Rect::Rect( ) {
}

