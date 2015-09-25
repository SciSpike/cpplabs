/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Idioms Excercise.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "handle.h"
#include "our_string.h"
#include <iostream>

using namespace std;

/* Constants and defines */


/****************************************************************
 *
 * Description: Testing passing String by Value
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

void takeByValue
(
 String str  // String by value
 )
{
	cout << "String in takeByValue:" << *str << endl;
}

/****************************************************************
 *
 * Description: Testing passing String by Reference
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

void takeByReference
(
 String& str  // String by value
 )
{
	cout << "String in takeByReference:" << *str << endl;
}
/****************************************************************
 *
 * Description: main to where Idioms is tested.
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

int main()
{
  cout << "Idioms Exercise Program" << endl;

  cout << "\nCreating String..." << endl;
  String commonString( new StringReal("Hello World!") );

  cout << "The String created is:" << *commonString << endl;

  // Call a method that takes the object by value
  takeByValue( commonString );

  // Call a method that takes the object by reference
  takeByReference( commonString );

  cout << "\n\nCreating Another String..." << endl;
  String anotherString( commonString );
  cout << "The Another Copy of String created is:" <<
	      *anotherString << endl;

  cout << "\n\nEnd of testing..." << endl;

  return 0;
}
