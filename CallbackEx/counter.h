#ifndef COUNTER_H
#define COUNTER_H

/**************************************************************
 *  
 * File: counter.h
 *
 * Description: Defines the Counter class
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */

class Counter {
public:
  Counter( int i = 0, int minValue = 0, int maxValue = 100 );
  void increment();
  void decrement();
  int getCount();
private:
  int myValue, min, max;
};

#endif
