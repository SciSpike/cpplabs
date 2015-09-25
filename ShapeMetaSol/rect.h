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
#include <iostream.h>
#include "meta.h"
#include "shape.h"

/* Constants and defines */

class Rect : public Shape {
public:
  Rect( istream& is );
  Rect();
  virtual void store( ostream& os );
  virtual  Meta<istream>* getMeta();
  static MetaImplementation<Rect,istream>* getClass();
  static bool checkMatch( istream& );

private:
  static MetaImplementation<Rect,istream>* CLASS;
};

#endif
