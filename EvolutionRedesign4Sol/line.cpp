/*
 * Copyright SciSpike
 *
 * Implementation file for line
 */
#include "shape.h"
#include "line.h"
#include <stdio.h>

/*
 * Declaration of the function table for line
 */
static ShapeFunctionTable LineFunctionTable;

/*
 * Initialze the function table for line
 */
void initializeLine() {
	LineFunctionTable.drawFunc = drawLine;
	LineFunctionTable.eraseFunc = eraseLine;
}

/*
 * Implementation of draw line
 */
void drawLine( Shape* s ) {
	/* Draw the line */
	printf("This function should have drawn a line\n");
}

/*
 * Implementation of erase line
 */
void eraseLine( Shape *s ) {
	/* Erase the line */
	printf("This function should have ereased a line\n");
}


/*
 * Create a line
 */
Shape* createLine() {
	Shape* retVal;
	retVal = new Shape;
	/*
	 * Notice. We have to initialize the manipulation fuctions
	 */
	retVal->fTable = &LineFunctionTable;
	return retVal;
}

