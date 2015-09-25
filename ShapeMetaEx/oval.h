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
#include "shapemeta.h"
#include "shape.h"
#include <iostream>

/* Constants and defines */

class Oval : public Shape {
public:
  Oval( std::istream& is );
  Oval();
  virtual void store( std::ostream& os );
  virtual  Meta* getMeta();
  static Meta* getClass();
private:
  static MetaImplementation<Oval> CLASS;
};

#endif
