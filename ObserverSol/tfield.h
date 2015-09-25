#ifndef TFIELD_H
#define TFIELD_H

/**************************************************************
 *  
 * File: tfield.h
 *
 * Description: Defines a dummy implementation of text field
 *              The TextField class simulates a real text field
 *              in a GUI
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <string>
#include <iostream.h>

class TextField {
public:
  TextField();
  const char*  getValue() const;
  void setValue( const char* newValue );
private:
  std::string myValue;
};

#endif
