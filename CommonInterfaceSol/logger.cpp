/**************************************************************
 *  
 * File: logger.cpp
 *
 * Description: Class Logger is implemented in this file. 
 *              logger.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream>
#include "logger.h"
#include "loggable.h"

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: Default constructor for Debugger
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Logger::Logger()
{
   myIndex = 0;

   for( int i=0; i<MAX_OBJECTS; i++ )
		myObjectList[i] = NULL;
}

/****************************************************************
 *
 * Description: Destructor for debugger
 *
 * Returns: none
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Logger::~Logger()
{
}

/****************************************************************
 *
 * Description: Adds the Object that can be debugged.
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

void Logger::add(Loggable * obj) {
	// Better coding practice would be raise error if cannot be
	// added
	if( myIndex < MAX_OBJECTS )
		myObjectList[myIndex++] = obj;
}

/****************************************************************
 *
 * Description: Debug all the objects. For simiplicity lets
 *              just print or dumpstate of the objects.
 *
 * Returns: void
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

void Logger::dumpSnapShot()
{
	// Debugging All Objects; For now just call debug functions
	for( int i=0; i<MAX_OBJECTS; i++ )
		if( myObjectList[i] )
  		   myObjectList[i]->dumpEntry();
}
