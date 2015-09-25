/*
 * Copyright SciSpike
 *
 * Definition of the shape structure and declaration
 * of the shape implementation
 */
#ifndef SHAPE_H
#define SHAPE_H

struct Shape;

/* 
 * Definition of the table of functions 
 */
struct ShapeFunctionTable {
	void (*drawFunc) ( Shape*);
	void (*eraseFunc) ( Shape* );
};

/*
 * The shape structure
 * Notice how the shape is implemented as a union structure
 */
struct Shape {
	ShapeFunctionTable *fTable;
	float rotation;
	int x_pos;
	int y_pos;

	union {
/* Rectangle */
		struct Rect  {
			int width;
			int height;
		} rectData;

 /* Oval */
		struct Oval {
			int width;
			int height;
		} ovalData;
/* Line */
/* TODO: Add line data here */
	} specificData;
};



void drawShape(Shape*);
void eraseShape(Shape*);
void moveShape(Shape*, int x, int y);

#endif
