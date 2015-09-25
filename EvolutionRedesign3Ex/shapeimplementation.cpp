/*
 * Copyright SciSpike
 *
 * Impementation file for shapes
 */

#include "shape.h"
#include "rectangle.h"
#include "oval.h"


/*
 * Implementation of draw
 */
void drawShape(Shape *s) {
	(s->drawFunc) ( s );
}

/*
 * Implementation of erase
 */
void eraseShape(Shape *s) {
	(s->eraseFunc) ( s );

}

/*
 * Implementation of move
 */
void moveShape(Shape *s, int x, int y) {
   eraseShape( s );
   s->x_pos = x;
   s->y_pos = y;
   drawShape( s );
}
