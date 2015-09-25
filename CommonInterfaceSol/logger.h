#ifndef LOGGER_H
#define LOGGER_H

/**************************************************************
 *  
 * File: logger.h
 *
 * Description: Class Logger is defined in this class. 
 *              logger.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

#include "loggable.h"

#define MAX_OBJECTS  20

/****************************************************************
 *
 * Description: The Logger keeps track of a set of objects. 
 *              This generic class logs objects which are dericed 
 *              from the class Loggable.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Logger
{
public:
	// Constructor
	Logger();
	// Destructor
    ~Logger();

    void dumpSnapShot();

	void add( Loggable * logObject );

protected:
	// Index where next Object can be added in ObjectList
	int         myIndex;     
	// List of Objects that can be debugged
	Loggable * myObjectList[MAX_OBJECTS];
};

#endif // LOGGER_H