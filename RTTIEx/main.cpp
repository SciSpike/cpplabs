/*
 * Copyright SciSpike
 *
 * This file contains the test code
 */

#include <iostream.h>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "oval.h"

/*
 * Test function for RTTI
 */
void testOfRTTI( Shape* sp ) {

      // TODO: Query the shape to find out what kind of shape it is
      //       You can do this by obtaining the type_info using
      //       the function typeid( <pointer to the object> )
      //       Print out the result

      // TODO: Make a safe cast to Rectangle using dynamic_cast
      //       If the shape is a rectangle, invoke the 
      //       specialFunctionForRectangle() on the shape

      // TODO: Make a safe cast to Oval using dynamic_cast
      //       If the shape is an Oval, invoke the 
      //       specialFunctionForOval() on the shape
}

/*
 * The main
 */
int main() {

   Rectangle r(1,1,10,10);
   Oval o(2,2,20,20);
   
   testOfRTTI( &r );
   testOfRTTI( &o );
   return 0;
}
