/*
 * Copyright SciSpike
 *
 * Implementation file for Rectangle
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
 * Implementation of move rectangle
 */
void moveRectangle( Shape *s, int x, int y ) {
	/* Move the rectangle */
	printf("This function should have moved a rectangle\n");
	eraseRectangle( s );
	s->x_pos = x;
	s->y_pos = y;
	drawRectangle( s );
}
