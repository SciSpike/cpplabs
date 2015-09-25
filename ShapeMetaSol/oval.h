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
#include <iostream>

/* Constants and defines */

class Oval : public Shape {
public:
  Oval( std::istream& is );
  Oval();
  virtual void store( std::ostream& os );
  virtual  Meta<std::istream>* getMeta();
  static MetaImplementation<Oval,std::istream>* getClass();
  static bool checkMatch( std::istream& );

private:
  static MetaImplementation<Oval,std::istream>* CLASS;
};

#endif
