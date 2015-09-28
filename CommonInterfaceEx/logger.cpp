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
#include "logger.h"
#include <iostream>
#include "employee.h"
#include "card.h"

// TODO: Remove the usage of Card and Employee from this file
//       to them only as Loggable

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
  myCardIndex = 0;
  myEmployeeIndex = 0;
  
  for( int i=0; i<MAX_OBJECTS; i++ ) {
    myCardList[i] = 0;
    myEmployeeList[i] = 0;
  }
}

/****************************************************************
 *
 * Description: Adds the Card to the list that can be debugged.
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

void Logger::addCard
(
 Card* card  // Card that needs to be debugged
)
{
  // Code here should give some status back that add worked or
  // not
  if( myCardIndex < MAX_OBJECTS )
    myCardList[myCardIndex++] = card;
}

/****************************************************************
 *
 * Description: Adds the Employee to the list that can be debugged.
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

void Logger::addEmployee
(
 Employee* employee  // Employee that needs to be debugged
)
{
  // Code here should give some status back that add worked or
  // not
  if( myEmployeeIndex < MAX_OBJECTS )
    myEmployeeList[myEmployeeIndex++] = employee;
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

void Logger::dumpSnapshot()
{
  // Logging Cards; Just print the guts
  for( int i=0; i<MAX_OBJECTS; i++ )
    if( myCardList[i] )
      myCardList[i]->print();
  
  // Logging Employees; Just print the guts
  for(int i=0; i<MAX_OBJECTS; i++ )
    if( myEmployeeList[i] )
      myEmployeeList[i]->dumpState();
}
