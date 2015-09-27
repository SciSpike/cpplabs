/*
 * Main test loop
 *
 * Copyrights InferData Coropration
 */

#include <iostream>
#include <algorithm>
#include "primenumbergenerator.h"
#include "../lib/timer.h"

/*
 * Test program. 
 */

int main() {
	// Generate the first 10000 primes
	{
		Timer t( "Generate 10000 primes the first time: " );
	   ListType somePrimes( 10000 );
		generate( somePrimes.begin(), somePrimes.end(), PrimeNumberGenerator() );
	}
	{
		Timer t( "Generate 10000 primes the second time: " );
	   ListType somePrimes( 10000 );
		generate( somePrimes.begin(), somePrimes.end(), PrimeNumberGenerator() );
	}
   return 0;
}
