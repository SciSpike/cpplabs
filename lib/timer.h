#ifndef TIMER_H
#define TIMER_H

#include <ctime>
#include <string>
#include <iostream>

class Timer {

public:
  
 Timer(std::string name) : startedAt(clock()), timerName(name) {}
  ~Timer() {
    clock_t endedAt = clock();
    std::cout << "Timer (" << timerName << ") --> " << (endedAt - startedAt) << std::endl;
  }
  clock_t getTicks() {
    return clock() - startedAt;
  }
 private:
  clock_t startedAt;
  std::string timerName;
};

#endif
