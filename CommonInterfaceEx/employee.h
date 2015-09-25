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

/* Pre-Declarations */


/* Constants and defines */

/****************************************************************
 *
 * Description: Employee is a person who works for a salary.
 *
 * Exceptions: None
 *
 ***************************************************************/

// TODO Inhereit from Loggable class

class Employee
{
public:
	// Constructor
	Employee( const char* name, int salary );

	int    getSalary();
    const char*  getName();

	void dumpState();

private:
	int    mySalary;      // Salary of the Employee per month
	char*  myName;        // Name of the employee
};

#endif   // EMPLOYEE_H
