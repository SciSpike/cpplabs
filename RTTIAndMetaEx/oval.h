#ifndef OVAL_H
#define OVAL_H

/**************************************************************
 *  
 * File: oval.h
 *
 * Description: Declares the Oval class.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "meta.h"
#include "shape.h"

/* Constants and defines */

class Oval : public Shape {
public:
  Oval();
  virtual Meta* getMeta();
  static Meta* getClass();
private:
  static Meta* CLASS;
};

#endif
