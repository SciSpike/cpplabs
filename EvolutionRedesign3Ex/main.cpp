/*
 * Copyright SciSpike
 *
 * This file contains test code for the graphical
 * editor. Notice how the drawAllShapes must be updated
 * if we create a new shape.
 */
#include <stdlib.h>
#include "shape.h"
/*
 * Notice. We'll have to include rectangle.h
 * and the oval.h again !
 */
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
		 * Notice, there is no switch here !
		 */
		drawShape( myShapes[i] );
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
		/*
		 * Notice. We no longer have to know about function pointers
		 */
		myShapes[i] = createRectangle();
		myShapes[i]->x_pos = rand();
		myShapes[i]->y_pos = rand();
		myShapes[i]->specificData.rectData.height = rand();
		myShapes[i]->specificData.rectData.width = rand();
	}
	for ( i = 5; i < 10; i++ ) {
		/*
		 * Notice. We no longer have to know about function pointers
		 */
		myShapes[i] = createOval();
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

