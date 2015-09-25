/*
 * Copyright SciSpike
 *
 * Implementation file for rectangle
 */
#include "shape.h"
#include <stdio.h>

/*
 * Implementation of draw rectangle
 */
void drawRectangle( Shape* s ) {
	/* Draw the rectangle */
	printf("This function should have drawn a rectangle\n");
}

/*
 * Implementation of erase rectangle
 */
void eraseRectangle( Shape *s ) {
	/* Erase the rectangle */
	printf("This function should have ereased a rectangle\n");
}


/*
 * Create a rectangle
 */
Shape* createRectangle() {
	Shape* retVal;
	retVal = new Shape;
	/*
	 * Notice. We have to initialize the manipulation fuctions
	 */
	retVal->drawFunc = drawRectangle;
	retVal->eraseFunc = eraseRectangle;
	return retVal;
}
