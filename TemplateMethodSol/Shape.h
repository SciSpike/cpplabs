#ifndef SHAPE_H
#define SHAPE_H

/**************************************************************
 *  
 * File: shape.h
 *
 * Description: Class Shape is defined in this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */


/* Pre-Declarations */


/* Constants and defines */


/****************************************************************
 *
 * Description: The Shape class which represents drawable objects
 *              in a graphical editor like Rectangle, Circle, etc.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Shape
{
public:
   virtual void paint() = 0;
   virtual void printLocation() = 0;
   virtual void print() = 0;
};

#endif   // SHAPE_H