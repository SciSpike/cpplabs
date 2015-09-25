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
#include <stdlib.h>

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
CounterView::CounterView ( /* TODO: Decide what to pass to the constructor */) {
   // TODO: Start observing the buttons
   // TODO: Do you need to store some reference to the buttons?
   // TODO: You need some reference to the counter...
}

/****************************************************************
 *
 * Description: The observed buttons have changed
 *
 * Pre:  ???
 *
 * Post: None
 *
 ***************************************************************/
// TODO: Implement the function to be called back when the 
// TODO: buttons change. The end result of this function should
// TODO: be that we either call increment or decrement based
// TODO: on what button changed...

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



