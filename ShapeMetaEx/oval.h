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

/* Constants and defines */

class Oval : public Shape {
public:
  Oval( istream& is );
  Oval();
  virtual void store( ostream& os );
  virtual  Meta* getMeta();
  static Meta* getClass();
private:
  static MetaImplementation<Oval> CLASS;
};

#endif
