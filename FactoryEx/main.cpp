/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Factory Excercise.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <fstream>
#include "shape.h"
#include <iostream>

using namespace std;

/* Constants and defines */

/****************************************************************
 *
 * Description: main to where Factory Functions is tested.
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
  cout << "Factory Functions Exercise Program" << endl;

  char yesNo = 'y';
  do {
	  Shape* shapes;  // To be created

	  cout << "\n\nType the name of shape(Circle or Rectangle) "
			"followed by paramters\nFor example: \"Circle 10 20 100\" "
			" or \"Rectangle 10 15 100 50\"" << endl;

	  try {
		  // If able to create a valid shape
		  if( (shapes=readFromStream(cin)) ) { 
			  cout << "Shape made from factory." << endl; 
			  shapes->draw();
		  }
		  else
		  {
			  // Unable to read into a valid class
			  char buffer[100];
			  cin.get( buffer, 100, '\n' );
		  	  cerr << "Invalid input, cannot make shape." << endl;
		  }
	  } // try failed so CATCH the problems and handle them
	  catch (char* message ) {
		  cerr << "Exeption Thrown" << message << endl;
	  }
	  catch(...) {
		  cerr << "Unknown Exception thrown." << endl;
	  }

	  yesNo = 'N';
	  cout << "\n\nDo want make more make more Shapes?[y/n]";
      cin >> yesNo;
  }   while( yesNo != 'n' && yesNo != 'N' );

  cout << "\n\nEnd of testing." << endl;
  return 0;
}
