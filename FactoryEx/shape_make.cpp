/**************************************************************
 *  
 * File: shape_make.cpp
 *
 * Description: Implements making of shapes.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <cstring>
#include "rectangle.h"
#include "circle.h"
#include <iostream>

using namespace std;

/* Constants and defines */
#define MAX_SHAPE_NAME 15

/****************************************************************
 *
 * Description: readFromStream makes Shape from istream
 *
 * Returns: Shape*
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

Shape* readFromStream
(
  istream& inputStream
)
{
   Shape* shape = NULL;
   char className[MAX_SHAPE_NAME];
   char* classNamePtr;
 
   // Read the name of the CLASS first.
   inputStream.getline(className, MAX_SHAPE_NAME-1, ' ' );

   classNamePtr = className;

   // Trim the leading spaces

   while (isspace(*classNamePtr))
   {
	  classNamePtr ++;
   }

   // Then DO a new on the actual Class with Classname
   if( !strcmp( "Circle", classNamePtr ) )	
	   shape = new Circle( inputStream );	   
   else if( !strcmp( "Rectangle", classNamePtr ) )
	   shape = new Rectangle( inputStream );
   else
	   cerr << "Invalid Shape Name:" << classNamePtr << ":" << endl;
 
  return( shape );
}
