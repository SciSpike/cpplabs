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
#include <iostream>

using namespace std;

/* Const and defines */


// instansiation of meta object
MetaImplementation<Rect> Rect::CLASS("Rect", Shape::getClass(), "#RECT" );

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
Meta* Rect::getClass() {
  return &Rect::CLASS;
}

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta* Rect::getMeta() {
  return &Rect::CLASS;
}

/****************************************************************
 *
 * Description: Constructor that reads in from an input stream
 *
 ***************************************************************/
Rect::Rect( istream& is ) : Shape( is ) {
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

/****************************************************************
 *
 * Description: Store the object to an output stream.
 *              In a full implementation, we would have to store
 *              the member data in addition to the tag.
 *
 ***************************************************************/
void Rect::store( ostream& os ) {
  os << Rect::getClass()->getTag() << endl;
}
