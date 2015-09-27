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
#include <cstring>

using namespace std;

/* Const and defines */

// instansiation of meta object
MetaImplementation<Shape,istream> *Shape::CLASS = 0;

/****************************************************************
 *
 * Description: Static method to access meta object
 *
 ***************************************************************/
MetaImplementation<Shape,istream>* Shape::getClass() {
  if ( !Shape::CLASS ) {
    Shape::CLASS = new MetaImplementation<Shape,istream>("Shape", 0 );
  }
  return Shape::CLASS;
}

/****************************************************************
 *
 * Description: Member function to access meta object
 *
 ***************************************************************/
Meta<istream>* Shape::getMeta() {
  return Shape::CLASS;
}

/****************************************************************
 *
 * Description: Check if the elements in the stream match the 
 *              Class tag
 *
 ***************************************************************/
bool Shape::checkMatch( istream& is ) {
   return false;
}

/****************************************************************
 *
 * Description: Check if the elements in the stream match the string
 *
 ***************************************************************/
bool Shape::compareTags( istream& is, std::string s ) {
   char buffer[100];
   is >> buffer;
   std::string ftag = buffer;
   if ( ftag == s) {
      return true;
   } else {
      for ( int i = strlen(buffer) - 1; i >=0; i-- ) {
         is.putback( buffer[i] );
      }
      return false;
   }

}
