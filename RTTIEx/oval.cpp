/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Oval class
 */

#include "oval.h"
#include <iostream>

using namespace std;

/*
 * Constructor for oval
 */
Oval::Oval(int X, int Y, int W, int H ) 
   : ShapeImplementation( X, Y ) {
   width = W;
   height = H;
}

/*
 * Draw function for oval
 */
void Oval::draw() {
   cout << "This would have drawn a oval" << endl;
}

/*
 * Erase function for oval
 */
void Oval::erase() {
   cout << "This would have erased a oval" << endl;
}

/*
 * Special function for oval
 */
void Oval::specialFunctionForOval() {
   cout << "This function is only implemented on Oval" << endl;
}
