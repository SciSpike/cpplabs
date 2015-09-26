/**************************************************************
 *  
 * File: employee.cpp
 *
 * Description: Class Employee is implemented in this file. 
 *              employee.h has the definition of this class.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "employee.h"
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

/* Constants and defines */


/****************************************************************
 *
 * Description: Constructor of Employee
 *
 * Pre-Conditions: name be null terminated
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Employee::Employee
(
 const char*  name,  // Name of the Employee
 int    salary       // Salary of the employee per month
)
: mySalary( salary )
{
	if( name )
	{
		// Making a copy on the heap; remember to delete later
		myName = new char[strlen(name)+1];
		strcpy( myName, name );
	}
	else
		myName = NULL;
}

/****************************************************************
 *
 * Description: Destructor of Employee
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Employee::~Employee()
{
	delete myName;
}

/****************************************************************
 *
 * Description: Gets the Salary of this employee
 *
 * Returns: Salary per month
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Employee::getSalary()
{
	return( mySalary );
}

/****************************************************************
 *
 * Description: Gets the name of this employee
 *
 * Returns: Name
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

const char* Employee::getName()
{
	return( myName );
}

/****************************************************************
 *
 * Description: Dumps the state of this object on screen
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

void Employee::dumpEntry()
{
	cout << "Employee:" << (myName?myName:"") << " Salary:$"
		 << mySalary << " per month." << endl;
}
