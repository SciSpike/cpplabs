/*
 * Copyright SciSpike
 *
 * This file test the associative containers
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstring>

using namespace std;

bool operator< ( const string& s1, const string& s2 ) {
	return (strcmp( s1.data(), s2.data() ) < 0);
}

bool operator== ( const string& s1, const string& s2 ) {
	return (strcmp( s1.data(), s2.data() ) == 0);
}

void multisetTest() {
   
	int numbers[] = {1,2,3};

	multiset<int> s( numbers, numbers+3 );
	s.insert( 1 ); // Inserts another 1 into the set
	s.insert( 4 ); // inserts 4 into the set

	// Prints: "1 1 2 3 4" (order guaranteed)
	copy( s.begin(), s.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void setTest() {
	int numbers[] = {1,2,3};

	set<int> s( numbers, numbers+3 );
	s.insert( 1 ); // no effect since the set already has 1
	s.insert( 4 ); // inserts 4 into the set

	// Prints: "1 2 3 4" (order guaranteed)
	copy( s.begin(), s.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void mapTest() {
typedef map<string,string, less<string> > Map;
typedef pair<string,string>   Pair;
	Map m;
	m.insert( Pair("SciSpike", "(888) 604 5583") );
	m.insert( Pair("Joe", "(512) 555 0000" ) );
	m.insert( Pair("Jill", "(512) 555 1234" ) );
	Map::iterator i = m.begin();
	while( i != m.end() ) {
		cout << (*i).first.data() << "=" << 
			(*i).second.data() << endl;
		i++;
	}

	cout << "Lookup SciSpike: " << 
		m["SciSpike"].data() << endl;
}

void multimapTest() {
typedef multimap<string,string, less<string> > Map;
typedef pair<string,string>   Pair;
	Map m;
	m.insert( Pair("Joe", "(512) 555 0000" ) );
	m.insert( Pair("SciSpike", "(512) 306 8225") );
	m.insert( Pair("Joe", "(512) 555 1234" ) );
	m.insert( Pair("Sue", "(512) 555 9999" ) );
	const char* searchKey = "Joe";

	Map::iterator i = m.find(searchKey);
	while( (i != m.end()) && string(searchKey) == ( (*i).first )) {
		cout << (*i).first.data() << "=" << 
			(*i).second.data() << endl;
		++i;
	}
}

int main() {
	setTest();
	multisetTest();
	mapTest();
	multimapTest();
	return 0;
}
