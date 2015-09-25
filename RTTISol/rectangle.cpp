/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Rectangle class
 */

#include "rectangle.h"
#include <iostream.h>

/*
 * Constructor for rectangle
 */
Rectangle::Rectangle(int X, int Y, int W, int H ) 
   : ShapeImplementation( X, Y ) {
   width = W;
   height = H;
}

/*
 * Draw function for rectangle
 */
void Rectangle::draw() {
   cout << "This would have drawn a rectangle" << endl;
}

/*
 * Erase function for rectangle
 */
void Rectangle::erase() {
   cout << "This would have erased a rectangle" << endl;
}


/*
 * Special function for rectangle
 */
void Rectangle::specialFunctionForRectangle() {
   cout << "This function is only implemented on Rectangle" << endl;
}
