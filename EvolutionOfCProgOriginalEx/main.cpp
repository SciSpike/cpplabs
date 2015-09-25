/*
 * Copyright SciSpike
 *
 * This file contains test code for the graphical
 * editor. Notice how the drawAllShapes must be updated
 * if we create a new shape.
 */
#include <stdlib.h>
#include "shape.h"
#include "shapetypes.h"
#include "rectangle.h"
#include "oval.h"
static Shape *myShapes[50];

/*
 * draw all shapes defined in myShapes
 */
void drawAllShapes() {
	int i;
	i = 0;
	while ( (i < 50) && myShapes[i] ) {
		/*
		 * Switch on shape type
		 */
		switch( myShapes[i]->type ) {
			case 	ST_OVAL:
				drawOval( myShapes[i] );
				break;
			case ST_RECTANGLE:
				drawRectangle( myShapes[i] );
				break;
		}
		i++;
	}
}

/*
 * Test code. Creates some shapes. Calls draw all shapes
 * and finally frees the memory.
 */
int main() {
	int i;
	for ( i = 0; i < 50; i++ ) {
		myShapes[0] = 0;
	}
	for ( i = 0; i < 5; i++ ) {
		myShapes[i] = new Shape;
		myShapes[i]->type = ST_RECTANGLE;
		myShapes[i]->x_pos = rand();
		myShapes[i]->y_pos = rand();
		myShapes[i]->specificData.rectData.height = rand();
		myShapes[i]->specificData.rectData.width = rand();
	}
	for ( i = 5; i < 10; i++ ) {
		myShapes[i] = new Shape;
		myShapes[i]->type = ST_OVAL;
		myShapes[i]->x_pos = rand();
		myShapes[i]->y_pos = rand();
		myShapes[i]->specificData.ovalData.height = rand();
		myShapes[i]->specificData.ovalData.width = rand();
	}
	drawAllShapes();
	i = 0;
	while (myShapes[i]) {
		delete myShapes[i];
		i++;
	}
	return 0;
}

