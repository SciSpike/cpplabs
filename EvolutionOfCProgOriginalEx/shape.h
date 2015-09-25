/*
 * Copyright SciSpike
 *
 * Defines the shape struture
 */
#ifndef SHAPE_H
#define SHAPE_H

#include "shapetypes.h"

/*
 * The shape structure
 * Notice how the shape is implemented as a union structure
 */
struct Shape {
	ShapeType type;
	float rotation;
	int x_pos;
	int y_pos;

/* Rectangle */
	union {
		struct Rect  {
			int width;
			int height;
		} rectData;

 /* Oval */
		struct Oval {
			int width;
			int height;
		} ovalData;
	} specificData;
};

#endif
