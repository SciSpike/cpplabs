#ifndef SHAPE_H
#define SHAPE_H

/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Shape class
 */

class Shape {
public:
   virtual void draw() = 0;
   virtual void erase() = 0;
   virtual void move(int newX, int newY) = 0;
   virtual int getXPos() = 0;
   virtual int getYPos() = 0;
};

#endif
