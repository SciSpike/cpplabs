// timer.h: interface for the timer class.
//
//////////////////////////////////////////////////////////////////////

#ifndef TIMER_H
#define TIMER_H


#include <windows.h>
#include <string>

class Timer {
public:
	Timer(std::string name);
	~Timer();

private:
	std::string name;
   DWORD time;
};

#endif // TIMER_H
