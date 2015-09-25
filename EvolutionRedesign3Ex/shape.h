/*
 * Copyright SciSpike
 *
 * Definition of the shape structure and declaration
 * of the shape implementation
 */
#ifndef SHAPE_H
#define SHAPE_H

/*
 * The shape structure
 * Notice how the shape is implemented as a union structure
 */
struct Shape {
	void (*drawFunc) (Shape *);
	void (*eraseFunc) (Shape *);
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

void drawShape(Shape*);
void eraseShape(Shape*);
void moveShape(Shape*, int x, int y);

#endif
