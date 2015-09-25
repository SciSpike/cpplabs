/**************************************************************
 *  
 * File: cview.cpp
 *
 * Description: Defines the implementation for CounterView
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "cview.h"
#include "counter.h"
#include <cstdlib>

char* itoa( int value, char* result, int base ) {
    // check that the base if valid
	if (base < 2 || base > 16) { *result = 0; return result; }
	
	char* out = result;
	int quotient = value;
	
	do {
	    *out = "0123456789abcdef"[ std::abs( quotient % base ) ];
	    ++out;
	    quotient /= base;
	} while ( quotient );
	
	// Only apply negative sign for base 10
	if ( value < 0 && base == 10) *out++ = '-';
	
	std::reverse( result, out );
	*out = 0;
	return result;
}

/****************************************************************
 *
 * Description: Constructor of CounterView
 *
 * Pre:  c points to an active counter
 *
 * Post: None
 *
 ***************************************************************/
CounterView::CounterView ( Counter* c ) {
  myCounter = c;
}

/****************************************************************
 *
 * Description: Increment button has been pressed
 *
 * Pre:  None
 *
 * Post: Increments the counter and sets the text field
 *
 ***************************************************************/
void CounterView::increment() {
  char buffer[10];
  myCounter->increment();
  itoa( myCounter->getCount(), buffer, 10 );
  myTextField.setValue( buffer );    
}

/****************************************************************
 *
 * Description: The decrement button has been pressed
 *
 * Pre:  None
 *
 * Post: Decrement the counter and sets the text field
 *
 ***************************************************************/
void CounterView::decrement() {
  char buffer[10];
  myCounter->decrement();
  itoa( myCounter->getCount(), buffer, 10 );
  myTextField.setValue( buffer );    
}



