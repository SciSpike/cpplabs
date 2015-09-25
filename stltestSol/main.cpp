#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;

bool operator< ( const string& s1, const string& s2 ) {
   return (strcmp( s1.data(), s2.data() ) < 0);
}

bool operator== ( const string& s1, const string& s2 ) {
   return (strcmp( s1.data(), s2.data() ) == 0);
}

void testAdjacentFind() {
	const int T = 11; // number of elements
	int numbers[T] = {1,45,62,1,1,77,33,1,74,1,23};
	int sum = 0;
	vector<int> v( numbers, numbers + T ); // use C-style init.
	vector<int>::iterator i = 
		adjacent_find( v.begin(), v.end());
	if ( i == v.end() ) 
		cout << "Not found" << endl;
	else 
		cout << "Found: " << *--i << endl; // prints 62!
}

void copyTest() {
	const int T = 10; // elements in the array
	int numbers[T] = {44,45,62,54,77,88,33,1,74,23};
	vector<int> v1( numbers, numbers + T ); // C-style init.

	vector<int> v2( 4 ); // note need size
	// copy the first 4 elements in v1 to v2
	copy(v1.begin(), v1.begin() + 4, v2.begin());

	// the next line should print “44 45 62 54”
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout," ")) ;
   cout << endl;
}

void fillTest() {
//	const int T = 11; // number of elements
//	int numbers[T] = {1,2,3,33,45,62,74,80,45,62,230};

//	vector<int> v( numbers, numbers + T ); // initialize vector
   vector<int> v( 11, 99 );

	// fill the vector with 99
//	fill( v.begin(), v.end(), 99);

	// Prints: “99 99 99 99 99 99 99 99 99 99 99”
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}


void testFill_N() {
	const int T = 11; // number of elements
	// initialize array
	int numbers[T] = {1,2,3,33,45,62,74,80,45,62,230};

	// initialize vector
	vector<int> v( numbers, numbers + T );

	fill_n( v.begin(), 5, 99);

	// Prints: “99 99 99 99 99 62 74 80 45 62 230”
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void findTest() {
	const int T = 10; // number of elements

	// initialize elements in a C-style array
	int numbers[T] = {44,45,62,54,77,88,33,1,74,23};

	int sum = 0; // initial value of accumulator
	vector<int> v( numbers, numbers + T ); // initialize vector

	// try to find value 88 in the collection
	vector<int>::iterator i = find( v.begin(), v.end(), 88 );

	if (i != v.end() )  // matching element found
		cout << "88 found at location " << i - v.begin() << endl;
	else   // no matching element was found
		cout << "88 not found" << endl;
}

void findEndTest() {
	const int T = 11; // number of elements
	int numbers[T] = {1,2,3,33,45,62,74,80,45,62,230};
	int sn[2] = {45,62}; // what to search for
	vector<int> v( numbers, numbers + T ); // initialze vector
	vector<int>::iterator i = 
		find_end( v.begin(), v.end(), sn, sn + 2);
   
	// Prints 80 because we ask for the element before (--i) the
	// last occurance of the sequence 45,62
	cout << *--i << endl; // note the use of --i
}


void findFirstOfTest() {
	const int T = 11; // number of elements
	// initialize the elements
	int numbers[T] = {1,2,3,33,45,62,74,80,45,62,230};

	int sn[2] = {45,62}; // sequence to search for

	vector<int> v( numbers, numbers + T ); // initialize vector

	vector<int>::iterator i = 
		find_first_of( v.begin(), v.end(), sn, sn+2 );

	// Prints 33 because 33 is the number before (--i) the first
	// occurance of the sub-seqeunce 45,62
	cout << "Found: " << *--i << endl; 
}


int greaterThan50( int i ) {
	return i > 50;
}

void findIfTest() {
	const int T = 11; // number of elements
	// initialize array with test values
	int numbers[T] = {1,45,62,1,1,77,33,1,74,1,23};
	vector<int> v( numbers, numbers + T ); // C-style init.

	vector<int>::iterator i = 
		find_if( v.begin(), v.end(), greaterThan50);

	// Prints 62 because 62 is the first element which saticfy
	// greater than 50 predicate
	cout << "Found: " << *i << endl;
}

class DumpOnCout {
public:
   void operator() ( int i1) const {
      cout << i1 << " ";
   }
};

void forEachTest() {
	const int T = 10; // number of elements
	// Initialize numbers to some test values
	int numbers[T] = {44,45,62,54,77,88,33,1,74,23};

	vector<int> v( numbers, numbers + T ); // C-style init.

	// Prints  44 45 62 54 77 88 33 1 74 23” because the function
	// DumpOnCout::operator() is called for each element
	for_each( v.begin(), v.end(), DumpOnCout());
   cout << endl;
}

class Fibonacci {
public:
	Fibonacci() : r(0), f1(0), f2(1) {}
	int operator()() { r = f1 + f2; f1 = f2; f2 = r; return f1;}
	int r, f1, f2;
};

void generateTest() {
	vector<int> f(10); // Initial storage for 10 ints

	// Generate values to the collection by use of Fibonacci 
	// function object
	generate( f.begin(), f.end(), Fibonacci());

	// Prints: “1 1 2 3 5 8 13 21 34 55 0 0 0”
	copy( f.begin(), f.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void generateNTest() {
	vector<int> f(13); // Create a container that holds 13 ints

	// Generate 10 elements using Fibonacci (see generate)
	generate_n( f.begin(), 10, Fibonacci());

	// Prints: “1 1 2 3 5 8 13 21 34 55 0 0 0”. The last three 0’s
	// are due to the original size of 13
	copy( f.begin(), f.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void includesTest() {
	const int T = 11; // number of elements
	// initialize a C-style array with some test values
	int numbers[T] = {1,2,3,33,45,50,62,80,84,108,62};
	// initialize a sub-sequence to search for
	int sn[2] = {45,62};

	vector<int> v( numbers, numbers + T ); // C-style init.

	// check if the vector v contains the sub-sequence 
	// specified by sn
	if ( includes( v.begin(), v.end(), sn, sn + 2) )
		cout << "vector includes 45 or 62" << endl;
	else
		cout << "vector does not include 74 or 45" << endl;
}

void mergeTest() {
	const int T = 4; // number of elements
	int numbers1[T] = {1,2,33,45}; // test series 1
	int numbers2[T] = {3,6,74,230}; // test series 2
	// initialize v to hold both test series
	vector<int> v( T*2 );
	// merge the two series into v
	merge( numbers1, numbers1 + T, 									// first series
		numbers2, numbers2+T, 								// second series
		v.begin() );								// destination
	// prints “1,3,2,6,33,45,74,230”
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void removeTest() {
	const int T = 11; // Number of elements
	// test values
	int numbers[T] = {1,45,62,1,77,1,33,1,74,1,23};
	vector<int> v( numbers, numbers + T ); // C-style init

	// remove all 1’s, after this statement the vector would
	// hold: 45,62 77 33 74 23 33 1 74 1 23
	vector<int>::iterator newEnd = remove(v.begin(),v.end(),1);
	// now lets remove the garbage elements “33 1 74 1 23”
	v.erase( newEnd, v.end() );

	// Prints: "45 62 77 33 74 23"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

int lessThan50( int i ) { return i < 50; }

void removeIfTest() {
	const int T = 11; // number of elements
	 // test values
	int numbers[T] = {1,45,62,1,77,1,33,1,74,1, 23};
	vector<int> v( numbers, numbers + T ); // C-style init.

	// remove all values less than 50. At the end of this, the
	// collection contains “62 77 74 1 77 33 1 74 1 23”
	vector<int>::iterator newEnd = 
		remove_if( v.begin(), v.end(), lessThan50 );
	// remove the garbage values “1 77 33 1 74 1 23”
	v.erase( newEnd, v.end() );

	// Prints: "62 77 74"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void replaceTest() {

	const int T = 11; // number of elements

	// test values
	int numbers[T] = {1,45,62,1,77,1,33,1,74,1,23};

	vector<int> v( numbers, numbers + T ); // C-style init.

	// replace all 1’s with 5’s
	replace( v.begin(), v.end(), 1, 5 );

	// prints “5 45 62 5 77 5 33 5 74 5 23”
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void replaceIfTest() {
	const int T = 11; // number of elements
	// test data
	int numbers[T] = {1,45,62,1,77,1,33,1,74,1,23};
	vector<int> v( numbers, numbers + T ); // C-style init

	// replace all values with value less than 50 with 0
	replace_if( v.begin(), v.end(), lessThan50, 0 );

	// Prints “0 0 62 0 77 0 0 0 74 0 0”
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}


void reverseTest() {

	const int T = 11; // number of elements
	 // test values
	int numbers[T] = {1,45,62,1,77,1,33,1,74,1,23};
	vector<int> v( numbers, numbers + T ); // C-style init.

	// reverse the order of all elements in v
	reverse( v.begin(), v.end());

	// Prints: “23 1 74 1 33 1 77 1 62 45 1”
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
   cout << endl;
}

void multisetTest() {
   
	int numbers[] = {1,2,3};

	multiset<int> s( numbers, numbers+3 );
	s.insert( 1 ); // Inserts another 1 into the set
	s.insert( 4 ); // inserts 4 into the set

	// Prints: “1 2 3 1 4” (order not guaranteed)
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
	m.insert( Pair("InferData", "(512) 306 8225") );
	m.insert( Pair("Joe", "(512) 555 0000" ) );
	m.insert( Pair("Jill", "(512) 555 1234" ) );
	Map::iterator i = m.begin();
	while( i != m.end() ) {
		cout << (*i).first.data() << "=" << 
			(*i).second.data() << endl;
		i++;
	}

	cout << "Lookup InferData: " << 
		m["InferData"].data() << endl;
}

void multimapTest() {
typedef multimap<string,string, less<string> > Map;
typedef pair<string,string>   Pair;
	Map m;
	m.insert( Pair("Joe", "(512) 555 0000" ) );
	m.insert( Pair("InferData", "(512) 306 8225") );
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
   testAdjacentFind();
   copyTest();
   fillTest();
   testFill_N();
   findTest();
   findEndTest();
   findFirstOfTest();
   findIfTest();
   forEachTest();
   generateTest();
   generateNTest();
   includesTest();
   mergeTest();
   removeTest();
   removeIfTest();
   replaceTest();
   replaceIfTest();
   reverseTest();
   multisetTest();
   setTest();
   mapTest();
   multimapTest();
	return 0;
};