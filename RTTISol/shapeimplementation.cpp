/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the ShapeImplementation class
 */

#include "shapeimplementation.h"

/*
 * Constructor for ShapeImplementation
 */
ShapeImplementation::ShapeImplementation(int X, int Y) {
   xPos = X;
   yPos = Y;
}

/*
 * Move implementation for ShapeImplementation
 */
void ShapeImplementation::move(int newX, int newY) {
   erase();
   xPos = newX;
   yPos = newY;
   draw();
}

/*
 * Implementation of getXPos
 */
int ShapeImplementation::getXPos() {
   return xPos;
}

/*
 * Implementation of getYPos
 */
int ShapeImplementation::getYPos() {
   return yPos;
}
