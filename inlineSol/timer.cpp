// timer.cpp: implementation of the timer class.
//
//////////////////////////////////////////////////////////////////////

#include "timer.h"
#include <iostream>
#include <string>

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Timer::Timer(std::string n) : name(n), start(boost::chrono::high_resolution_clock::now()) {
}

Timer::~Timer() {
   boost::chrono::high_resolution_clock::time_point end = boost::chrono::high_resolution_clock::now();
   cout << name.data() << (end - start) << endl;
}
