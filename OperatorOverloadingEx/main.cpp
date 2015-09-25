/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Operator Overloading Excercise.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

#include "rectangle.h"
#include <iostream>

using namespace std;

int main() {
  cout << "Operator Overloading Exercise Program" << endl;

  Rectangle* r1 = new Rectangle( 10, 20, 0, 0 );
  Rectangle r2(0,0,0,0);

  // TODO: uncomment the following line to use ostream operator<<
  //cout << "\nFirst rectangle:   " << *r1 << endl;

  // TODO: uncomment the following lines to use istream operator>>
  //cout << "Enter origin, height, and width (space-delimited): ";
  //cin >> r2;
  
  // TODO: uncomment the following line to use ostream operator<<
  //cout << "Second  rectangle: " << r2 << endl;

  // TODO: uncomment the following lines to use operator==
  //if (*r1 == r2)
  //   cout << "The two rectangles are the same!\n" << endl;
  //else
  //   cout << "The two rectangles are different!\n" << endl;

  delete r1;

  return 0;
}
