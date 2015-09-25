/*
 * Copyright SciSpike
 *
 * Implementation file for oval
 */

#include "shape.h"
#include "oval.h"
#include <stdio.h>

/*
 * Declaration of the function table for Oval
 */
static ShapeFunctionTable OvalFunctionTable;

/*
 * Initialze the function table for Oval
 */
void initializeOval() {
	OvalFunctionTable.drawFunc = drawOval;
	OvalFunctionTable.eraseFunc = eraseOval;
}

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
 * Create an Oval
 */
Shape* createOval() {
	Shape* retVal;
	retVal = new Shape;
	/*
	 * Notice. We have to initialize the manipulation fuctions
	 */
	retVal->fTable = &OvalFunctionTable;
	return retVal;
}
