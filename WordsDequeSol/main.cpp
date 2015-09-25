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
#include <string>
#include <set>
#include <deque>
#include <algorithm>
#include <iterator>
#include <cstdlib>

using namespace std;

//class NoDuplicates {
//public:
//	bool operator() (const string &s) {
//		bool retVal = (s == lastWord);
//		lastWord = s;
//		return retVal;
//	}
//private:
//	string lastWord;
//};

/*
 * This function should read all words from is
 * The words should be written out to os. When written out
 * to os, the words should be sorted alphabetically and 
 * duplicate words should be removed
 */
void generateWordList( istream& is, ostream& os ) {
   set<string> words; // the container of the words
   copy( istream_iterator<string>( is ),
            istream_iterator<string>(),
            inserter(words, words.begin()) );
   copy(words.begin(), words.end(), ostream_iterator<std::string>(os,"\n"));

   //   string tmp;
//   while (!is.eof()) {
//      is >> tmp;
//      words.push_back( tmp );
//   }

	// sort the content of the vector
//   deque<string>::iterator  i = words.begin();
//   while ( i != words.end() ) {
//	   deque<string>::iterator  j = i + 1;
//      while ( j != words.end() ) {
//         if ( *j < *i ) {
//            tmp = *i;
//            *i = *j;
//            *j = tmp;
//			}
//         j++;
//      }
//      i++;
//   }

	// Then finally print it out... 
//   deque<string>::iterator i = words.begin();
//	while ( i != words.end() ) {
//		deque<string>::iterator tmp = i;
//		os << *i << endl;
//		i++;
//		// make sure we do not print duplicates...
//		while ( (i != words.end() ) && (*i == *tmp) ) {
//			i++;
//		}
//	}
}


int main() {
   generateWordList( cin, cout );
   return 0;
}
