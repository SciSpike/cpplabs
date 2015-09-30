/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

// Disable the warnings from microsoft
#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include <iostream>
#include <iterator>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

/*
 * This function should read all words from is
 * The words should be written out to os. When written out
 * to os, the words should be sorted alphabetically and 
 * duplicate words should be removed
 */
void generateWordList( istream& is, ostream& os ) {
  set<string> words (
		     (istream_iterator<string>( is )),
		     istream_iterator<string>());
  copy(words.begin(), words.end(), ostream_iterator<string>(os, " "));
}


int main() {
   generateWordList( cin, cout );
   return 0;
}
