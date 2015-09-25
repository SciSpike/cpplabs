// timer.h: interface for the timer class.
//
//////////////////////////////////////////////////////////////////////

#ifndef TIMER_H
#define TIMER_H


#include <boost/chrono.hpp>
#include <string>

class Timer {
public:
    Timer(std::string name);
    ~Timer();

private:
    std::string name;
	boost::chrono::high_resolution_clock::time_point start;
};

#endif // TIMER_H
