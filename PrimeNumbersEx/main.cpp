/*
 * Main test loop
 *
 * Copyrights InferData Coropration
 */

#include <iostream>
#include <algorithm>
#include <iterator>
#include "primenumbergenerator.h"
#include "timer.h"

/*
 * Test program. 
 */

int main() {
      // Generate the first 10000 primes
   ListType somePrimes( 10000 );
   {
      Timer t( "Generate 10000 primes the first time: " );
      generate( somePrimes.begin(), somePrimes.end(), PrimeNumberGenerator() );
   }
	// TODO Generate the 10000 new primes and check out the time difference
	// TODO Why is the second time so much faster?
   copy( somePrimes.begin(), somePrimes.end(), ostream_iterator<int>(cout,"\n"));
   return 0;
}
