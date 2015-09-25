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

/* Include Files */

/* Pre-Declarations */

// TODO Logger should not know about Card or Employee
class Card;
class Employee;

/* Constants and defines */
#define MAX_OBJECTS  5

/****************************************************************
 *
 * Description: The Debugger can debug Objects.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Logger
{
public:
	// Constructor
	Logger();

    void dumpSnapshot();

	void addCard( Card* card );
	void addEmployee( Employee* cardShoe );

protected:
    // TODO: Remove ALL usage of Card and Employee and replace
	// it with Loggable...

	// Index where Card can be added in CardList
	int        myCardIndex;    
	 // Index where Employee can be added in EmployeeList
	int        myEmployeeIndex;
	// List of Card that can be debugged
    Card*      myCardList[MAX_OBJECTS]; 
	// List of Employees that can be debugged
	Employee*  myEmployeeList[MAX_OBJECTS];
};

#endif // LOGGER_H