/**************************************************************
 *  
 * File: shapemeta.cpp
 *
 * Description: Defines the implementation for xx
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shapemeta.h"

/* Const and defines */

/****************************************************************
 *
 * Description: Constructor of Meta
 *
 ***************************************************************/

Meta::Meta( const char* name, Meta* super, const char* tag ) : myTag(tag), myName( name ) {
  if (super) 
    super->addSubclass( this );
}

/****************************************************************
 *
 * Description: The create function for instances
 *
 ***************************************************************/
Shape* Meta::create( istream& is ) {
  char buffer[100];
  is >> buffer;
  return privateCreate( buffer, is );
}

/****************************************************************
 *
 * Description: The create algorithm used after the tag has been
 *              read.
 *
 ***************************************************************/
Shape* Meta::privateCreate( std::string tag, istream& is ) {
  if ( myTag == tag ) {
    return instansiate( is );
  }
  else {
    std::vector<Meta*>::iterator i;
    for( i = subclasses.begin(); i != subclasses.end(); i++ ) {
      Shape * retVal = (*i)->privateCreate( tag, is );
      if ( retVal != 0 )
         return retVal;
    }
  }
  return 0;
}

/****************************************************************
 *
 * Description: Called from meta objects that need represent
 *              subclasses.
 *
 ***************************************************************/
void Meta::addSubclass(Meta* sub) {
  subclasses.push_back( sub );
}

/****************************************************************
 *
 * Description: Dummy function. If no instaniation is defined,
 *              return 0;
 *
 ***************************************************************/
Shape* Meta::instansiate(istream&) { 
  return 0;
}

/****************************************************************
 *
 * Description: Return the tag used for match in the input stream
 *
 ***************************************************************/
const char* Meta::getTag() {
  return myTag.data();
}

/****************************************************************
 *
 * Description: Return the name of the class
 *
 ***************************************************************/
const char* Meta::getName() {
   return myName.data();
}
