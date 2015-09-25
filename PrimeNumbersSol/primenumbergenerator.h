#ifndef primenumbergenerator_h
#define primenumbergenerator_h

#include <vector>

using namespace std;

typedef vector<long> ListType;

/* 
 * This function object generates prime numbers
 */
class PrimeNumberGenerator {
public:
   PrimeNumberGenerator();
   int operator()();
private:
   int iteration;
   bool outsideList;
   static ListType vectorOfPrimes;
   static bool initialized;
   static void initialize();
};

#endif
