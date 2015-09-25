/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Oval class
 */

#ifndef OVAL_H
#define OVAL_H

#include "shapeimplementation.h"

class Oval : public ShapeImplementation {
public:
   Oval(int X, int Y, int width, int height );
   virtual void draw();
   virtual void erase();
   void specialFunctionForOval();
private:
   int width;
   int height;   
};

#endif
