/*
 * Copyright SciSpike
 *
 * Implementation file for Oval
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
 * Implementation of move oval
 */
void moveOval( Shape *s, int x, int y ) {
	/* Move the oval */
	printf("This function should have moved a oval\n");
	eraseOval( s );
	s->x_pos = x;
	s->y_pos = y;
	drawOval( s );
}
