/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

// Disable the warnings from microsoft
#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include <string>
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

typedef std::vector<std::string>::iterator Iterator;
typedef std::vector<std::string> Container;

void printList( Container &l ) {
	Iterator i = l.begin();
	while ( i != l.end() ) {
		cout << (*i).data() << endl;
		i++;
	}

}

int main() {
	Container theList;
	theList.push_back( "String 1" );
	theList.push_back( "String 2" );
	theList.push_back( "String 3" );
	printList( theList);
	return 0;
}
