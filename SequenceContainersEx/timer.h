// timer.h: interface for the timer class.
//
//////////////////////////////////////////////////////////////////////

#ifndef TIMER_H
#define TIMER_H


#include <string>
#include <time.h>

class Timer {
public:
	Timer(std::string n);
	~Timer();
private:
   std::string name;
   clock_t start;
};

#endif // TIMER_H
