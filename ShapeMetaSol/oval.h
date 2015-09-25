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
  Oval( istream& is );
  Oval();
  virtual void store( ostream& os );
  virtual  Meta<istream>* getMeta();
  static MetaImplementation<Oval,istream>* getClass();
  static bool checkMatch( istream& );

private:
  static MetaImplementation<Oval,istream>* CLASS;
};

#endif
