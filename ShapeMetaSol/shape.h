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
#include <iostream>
#include "meta.h"

/* Constants and defines */

class Shape {
public:
  // this class is made non abstract because of the
  // instantiation algorithm in MetaImplementation
  Shape( std::istream&) {}
  Shape() {}
  virtual void store( std::ostream& os ) {}
  virtual Meta<std::istream>* getMeta();
  static MetaImplementation<Shape,std::istream>* getClass();
  static bool checkMatch( std::istream& );
protected:
  static bool compareTags( std::istream&, std::string s );
private:
  static MetaImplementation<Shape,std::istream> *CLASS;
};

#endif
