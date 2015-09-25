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
#include <deque>
#include <algorithm>
#include <stdlib.h>

using namespace std;

/*
 * This function should read all words from is
 * The words should be written out to os. When written out
 * to os, the words should be sorted alphabetically and 
 * duplicate words should be removed
 */
void generateWordList( istream& is, ostream& os ) {
   deque<string> words; // the container of the words

	// read the words into the container
   string tmp;
   while (!is.eof()) {
      cin >> tmp;
      words.push_back( tmp );
   }

      // sort the content of the vector
   sort( words.begin(), words.end() );

      // remove duplcicates
   deque<string>::iterator  newEnd = unique( words.begin(), words.end() );
   words.erase( newEnd, words.end() );

      // print out the words
   copy( words.begin(), words.end(), ostream_iterator<string> (os, "\n" ) );
}

int main() {
   generateWordList( cin, cout );
   return 0;
}
