/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the ShapeImplementation class
 */

#ifndef SHAPEIMPLEMENTATION_H
#define SHAPEIMPLEMENTATION_H

#include "shape.h"

class ShapeImplementation : public Shape {
public:
   ShapeImplementation(int X, int Y );
   virtual void move(int newX, int newY);
   virtual int getXPos();
   virtual int getYPos();
private:
   int xPos;
   int yPos;   
};

#endif
