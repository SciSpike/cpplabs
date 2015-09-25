// timer.cpp: implementation of the timer class.
//
//////////////////////////////////////////////////////////////////////

#include "timer.h"
#include <iostream.h>
#include <string>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Timer::Timer(std::string n) : name(n) {
   start = clock();
}

Timer::~Timer() {
   //DWORD time2 = GetTickCount();
	clock_t stop = clock();
   cout << name.c_str() << stop - start << endl;
}
