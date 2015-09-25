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
   switch( s->type ) {
   case ST_OVAL:
      drawOval( s );
      break;
   case ST_RECTANGLE:
      drawRectangle( s );
      break;
   }

}

/*
 * Implementation of erase
 */
void eraseShape(Shape *s) {
   switch( s->type ) {
   case ST_OVAL:
      eraseOval( s );
      break;
   case ST_RECTANGLE:
      eraseRectangle( s );
      break;
   }

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
