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
  Rect();
  virtual Meta* getMeta();
  static Meta* getClass();

private:
  static Meta* CLASS;
};

#endif
