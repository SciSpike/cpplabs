/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Rectangle class
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shapeimplementation.h"

class Rectangle : public ShapeImplementation {
public:
   Rectangle(int X, int Y, int width, int height );
   virtual void draw();
   virtual void erase();
   void specialFunctionForRectangle();
private:
   int width;
   int height;   
};

#endif
