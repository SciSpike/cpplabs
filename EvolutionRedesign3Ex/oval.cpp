/*
 * Copyright SciSpike
 *
 * Implementation file for oval
 */

#include "shape.h"
#include <stdio.h>

/*
 * Implementation of draw oval
 */
void drawOval( Shape* s ) {
	/* Draw the oval */
	printf("This function should have drawn a oval\n");
}

/*
 * Implementation of erase oval
 */
void eraseOval( Shape *s ) {
	/* Erase the oval */
	printf("This function should have ereased a oval\n");
}

/*
 * Create an oval
 */
Shape* createOval() {
	Shape* retVal;
	retVal = new Shape;
	/*
	 * Notice. We have to initialize the manipulation fuctions
	 */
	retVal->drawFunc = drawOval;
	retVal->eraseFunc = eraseOval;
	return retVal;
}
