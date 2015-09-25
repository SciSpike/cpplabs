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
#include <iostream>

using namespace std;

/* Const and defines */

// instansiation of meta object
MetaImplementation<Oval> Oval::CLASS("Oval", Shape::getClass(), "#OVAL" );

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta* Oval::getMeta() {
  return &Oval::CLASS;
}

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
Meta* Oval::getClass() {
  return &Oval::CLASS;
}

/****************************************************************
 *
 * Description: Constructor that reads in from an input stream
 *
 ***************************************************************/
Oval::Oval( istream& is ) : Shape( is ) {
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

/****************************************************************
 *
 * Description: Store the object to an output stream.
 *              In a full implementation, we would have to store
 *              the member data in addition to the tag.
 *
 ***************************************************************/
void Oval::store( ostream& os ) {
  os << Oval::getClass()->getTag() << endl;
}
