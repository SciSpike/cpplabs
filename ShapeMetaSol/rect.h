#ifndef RECT_H
#define RECT_H

/**************************************************************
 *  
 * File: rect.h
 *
 * Description: Declares the Rect class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "meta.h"
#include "shape.h"

/* Constants and defines */

class Rect : public Shape {
public:
  Rect( std::istream& is );
  Rect();
  virtual void store( std::ostream& os );
  virtual  Meta<std::istream>* getMeta();
  static MetaImplementation<Rect,std::istream>* getClass();
  static bool checkMatch( std::istream& );

private:
  static MetaImplementation<Rect,std::istream>* CLASS;
};

#endif
