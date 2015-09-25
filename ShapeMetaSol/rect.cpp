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
MetaImplementation<Rect,istream>* Rect::CLASS = 0;

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
MetaImplementation<Rect,istream>* Rect::getClass() {
  if ( !Rect::CLASS ) {
    Rect::CLASS = new MetaImplementation<Rect,istream>("Rect", Shape::getClass() );
  }
  return Rect::CLASS;
}

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta<istream>* Rect::getMeta() {
  return Rect::getClass();
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
   os << "#" << getMeta()->getName() << endl;
}

/****************************************************************
 *
 * Description: Check if the elements in the stream match the 
 *              Class tag
 *
 ***************************************************************/
bool Rect::checkMatch( istream& is ) {
   std::string mtag = std::string("#") + std::string(getClass()->getName());
   return Shape::compareTags( is, mtag );
}
