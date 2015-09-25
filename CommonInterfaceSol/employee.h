#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**************************************************************
 *  
 * File: employee.h
 *
 * Description: Class Employee is defined in this class. employee.cpp
 *              has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "loggable.h"

/* Pre-Declarations */


/* Constants and defines */

/****************************************************************
 *
 * Description: Employee is a person who works for a salary.
 *
 * Exceptions: None
 *
 ***************************************************************/

class Employee : public Loggable
{
public:
	// Constructor
	Employee( const char* name, int salary );
	// Destructor
	virtual ~Employee();

	int    getSalary();
    const char*  getName();

	virtual void dumpEntry();

private:
	int    mySalary;      // Salary of the Employee per month
	char*  myName;        // Name of the employee
};

#endif   // EMPLOYEE_H