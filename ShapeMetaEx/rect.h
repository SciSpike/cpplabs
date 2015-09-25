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
#include "shapemeta.h"
#include "shape.h"

/* Constants and defines */

class Rect : public Shape {
public:
  Rect( istream& is );
  Rect();
  virtual void store( ostream& os );
  virtual  Meta* getMeta();
  static Meta* getClass();
private:
  static MetaImplementation<Rect> CLASS;
};

#endif
