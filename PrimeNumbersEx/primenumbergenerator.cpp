#include "primenumbergenerator.h"
#include <functional>
#include <iterator>
#include <algorithm>

/*
 * Defines the initial size of the vector 
 */
const int initialSizeOfVector = 8;

/*
 * The static variable containing the cached primes
 */
ListType PrimeNumberGenerator::vectorOfPrimes(initialSizeOfVector);

/*
 * Initialize the flag that is used to check if
 * the prime number vector has been initialized
 */
bool PrimeNumberGenerator::initialized = false;

/*
 * This function object compares performs a modulus operation
 * using the initial value passed to the constructor
 * This class is only used by this implementation...
 */
class CompareModulus {
public: 
   CompareModulus( int theValueToCompareTo ) {
      compareValue = theValueToCompareTo;
   }
   bool operator() ( int value ) {
      return (compareValue % value) == 0;
   }
private:
   int compareValue;
};


/*
 * Constructor for the prime number generator
 */
PrimeNumberGenerator::PrimeNumberGenerator() {
   iteration = 0;
   outsideList = false;
}

/*
 * The operator() used by the STL generate algorithm
 * Note that we first call initialize...
 */
int PrimeNumberGenerator::operator()() {
   PrimeNumberGenerator::initialize();
   ListType::iterator i;
   iteration++;
	// if the prime has already been generated, return it
   if ( (!outsideList) && (iteration < vectorOfPrimes.size() ) ) {
      return vectorOfPrimes[iteration-1];
   } else { // the prime was not already generated, find the next prime
      outsideList = true;
      int valueToCheck = *(vectorOfPrimes.end()-1);
         do {
            valueToCheck += 2;
            i = find_if( vectorOfPrimes.begin()+1, vectorOfPrimes.end(), CompareModulus( valueToCheck ));
            if ( i == vectorOfPrimes.end() ) {
               vectorOfPrimes.push_back( valueToCheck );
               return valueToCheck;
            }               
         } while ( true );
   }     
}

/*
 * Lazy initialization.
 */
void PrimeNumberGenerator::initialize() {
   if ( !initialized ) {
		// Create the first {initializeSizeOfVector} primes
      int firstNumbers[initialSizeOfVector] = {1,2,3,5,7,11,13,17};
      ListType::iterator i = vectorOfPrimes.begin();
      copy( firstNumbers, firstNumbers + initialSizeOfVector, i );
      initialized = true;
   }
}

