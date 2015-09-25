#ifndef SHAPE_H
#define SHAPE_H

/**************************************************************
 *  
 * File: shape.h
 *
 * Description: Class Shape is defined in this class. shape.cpp
 *              has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */

/* Pre-Declarations */

/* Constants and defines */

/****************************************************************
 *
 * Description: The Shape is the base class for set of geometric
 *              Shapes that can be drawn, moved, etc on any 
 *              drawing area.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Shape
{
public:
	// Constructor
	Shape( const char* name, const int _x, const int _y );
	// Destructor
    virtual ~Shape();

    virtual void move( int x, int y );
	inline int  getX() const;
	inline int  getY() const;

	inline const char* getName() const;

	//TODO add method inline static int getNoOfShapeInstances()
	//TODO add method inline static int getNoOfDeletedShapeInstances()

protected:
	char* myName; // Name of the Shape
	int myX; // X Coordinate of the Shape
	int myY; // Y Coordinate of the Shape

	// How many Shape objects were created
	// TODO add int as static for noOfShapeInstances
	// How many Shape objects were deleted
	//TODO add int as static for noOfDeletedShapeInstances

	void initialize( const char* name, const int _x, 
		             const int _y );
};

/****************************************************************
 *
 * Description: Gets the present X coordinate.
 *
 * Returns: X Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Shape::getX() const
{
	return( myX );
}

/****************************************************************
 *
 * Description: Gets the present coordinate.
 *
 * Returns: Y Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Shape::getY() const
{
	return( myY );
}

/****************************************************************
 *
 * Description: Gets the name of this Shape
 *
 * Returns: Y Coordinate.
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char* Shape::getName() const
{
	return( myName );
}

/****************************************************************
 *
 * Description: Gets number of instances Shape class was created.
 *
 * Returns: noOfShapeInstances
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

// TODO add method to get int for Shape::getNoOfShapeInstances()


/****************************************************************
 *
 * Description: Gets number of instances Shape class was created.
 *
 * Returns: noOfShapeInstances
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

//TODO add method to get Shape::getNoOfDeletedShapeInstances()

#endif // SHAPE_H