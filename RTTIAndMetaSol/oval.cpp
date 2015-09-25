/**************************************************************
 *  
 * File: oval.cpp
 *
 * Description: Defines the implementation for Oval
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "oval.h"

/* Const and defines */

// instansiation of meta object
Meta* Oval::CLASS = 0;
static MetaInitializer<Oval> i;

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta* Oval::getMeta() {
  return Oval::getClass();
}

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
Meta* Oval::getClass() {
  if ( !Oval::CLASS ) {
    Oval::CLASS = new Meta( typeid( Oval ) );
    Oval::CLASS->addSuper( Shape::getClass() );
  }
  return Oval::CLASS;
}

/****************************************************************
 *
 * Description: Default constructor (if this was a full 
 *              implementation, the costructor would have
 *              arguments that defined the object.
 *
 ***************************************************************/
Oval::Oval() {
}



