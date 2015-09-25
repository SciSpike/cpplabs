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
  Shape( istream&) {}
  Shape() {}
  virtual void store( ostream& os ) {}
  virtual Meta<istream>* getMeta();
  static MetaImplementation<Shape,istream>* getClass();
  static bool checkMatch( istream& );
protected:
  static bool compareTags( istream&, std::string s );
private:
  static MetaImplementation<Shape,istream> *CLASS;
};

#endif
