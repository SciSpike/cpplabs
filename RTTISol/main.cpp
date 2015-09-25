/*
 * Copyright SciSpike
 *
 * This file contains the test code
 */

#include <iostream>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "oval.h"

use namespace std;

/*
 * Test function for RTTI
 */
void testOfRTTI( Shape* sp ) {
   cout << "The shape passed is :" << typeid( *sp ).name() << endl;
   if ( Rectangle* rp = dynamic_cast<Rectangle*>(sp) ) {
      rp->specialFunctionForRectangle();
   }
   if (Oval* op = dynamic_cast<Oval*>(sp) ) {
      op->specialFunctionForOval();
   }
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
