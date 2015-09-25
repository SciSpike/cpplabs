/**************************************************************
 *  
 * File: tfield.cpp
 *
 * Description: Defines the dummy implementation of a text field.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "tfield.h"
#include <iostream>


/* Constants and defines */

/****************************************************************
 *
 * Description: Constructor for the TextField class
 *
 * Pre:  None
 *
 * Post: None (the string default constructor is fine)
 *
 ***************************************************************/
TextField::TextField() {
}


/****************************************************************
 *
 * Description: Returns the current value
 *
 * Pre:  None
 *
 * Post: Returns the value last value passed to setValue
 *
 ***************************************************************/
const char* TextField::getValue() const {
  return myValue.data();
}

/****************************************************************
 *
 * Description: Sets the value of the text field
 *
 * Pre:  newValue is a valid pointer to a c-string
 *
 * Post: Stores the new value.
 *       prints the new value on cout
 *
 ***************************************************************/
void TextField::setValue( const char* newValue ) {
  myValue = newValue;
  std::cout << myValue.data() << std::endl;
}

