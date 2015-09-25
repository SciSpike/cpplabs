/**************************************************************
 *  
 * File: main.cpp
 *
 * Description: Main for Detecting Common Interface Excercise.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

#include <iostream>
#include "logger.h"
#include "card.h"
#include "employee.h"

using namespace std;

int main() {
  cout << "Common Interface Detection Exercise Program" << endl;

  Logger l;

  Card* ace = new Card( 1, SPADES );
  l.add( ace );

  Card king( 13, HEARTS );
  l.add( &king );

  Employee* joe = new Employee( "Joe Montana", 100000 );
  l.add( joe );

  Employee jack( "Jack LaLane", 100 );
  l.add( &jack );

  l.dumpSnapShot();

  delete ace;
  delete joe;

  return 0;
}
