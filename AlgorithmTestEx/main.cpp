/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iterator>
#include <set>
#include <map>
#include <string>
#include <cstring>

#ifndef NO_BOOST
#include <boost/algorithm/cxx11/is_sorted.hpp>
#include <boost/algorithm/cxx11/copy_n.hpp>
#endif

using namespace std;

bool operator< ( const string& s1, const string& s2 ) {
	return (strcmp( s1.data(), s2.data() ) < 0);
}

bool operator== ( const string& s1, const string& s2 ) {
	return (strcmp( s1.data(), s2.data() ) == 0);
}

int greaterThan50( int i ) {
	return i > 50;
}

int lessThan50( int i ) { 
	return i < 50; 
}

bool lessThan5( int i ) {
	return i < 5;
}

bool modulus2( int i ) {
	return ( i % 2 ) == 0;
}

class DumpOnCout {
public:
	void operator() ( int i1) const {
		cout << i1 << " ";
	}
};

class Fibonacci {
public:
	Fibonacci() : r(0), f1(0), f2(1) {}
	int operator()() { r = f1 + f2; f1 = f2; f2 = r; return f1;}
	int r, f1, f2;
};

void accumulate() {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10}; // C-style array
	const int N = sizeof(numbers)/sizeof(int);
	int sum = 0; // accumulator
	sum = accumulate( numbers, numbers + N, sum); // From C-array
	cout << sum << endl; // should print 55

	vector<int> v( numbers, numbers + N ); // initialize a vector
	sum = accumulate( v.begin(), v.end(), sum ); // From vector
	cout << sum << endl; // should print 110
}

void adjacentFind() {
	int numbers[] = {1,45,62,1,1,77,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // use C-style init.
	vector<int>::iterator i = 
		adjacent_find( v.begin(), v.end());
	if ( i == v.end() ) 
		cout << "Not found" << endl;
	else 
		cout << "Found: " << *--i << endl; // prints 62!
}

void advance() {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10,11};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // use C-style init.
	vector<int>::iterator i = v.begin();

	advance( i, 5 ); // advanced the iterator by 5

		// the next line should print "6 7 8 9 10 11"
	copy( i, v.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;
}

void binarySearch() {
	int numbers[] = {1,2,2,2,3,3,4,8,8,10,11};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // use C-style init.

	for (int i = 0; i < 10; i++ )
			// check if the value i is present
		if (binary_search( v.begin(), v.end(), i ))
			cout << i << " is in v" << endl;

}

void copy() {
	int numbers[] = {1,2,3,5,7,11,13,17,19,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v1( numbers, numbers + N ); // C-style init.

	vector<int> v2( 4 ); // note need size
		// copy the first 4 elements in v1 to v2
	copy(v1.begin(), v1.begin() + 4, v2.begin());

		// the next line should print "1 2 3 5"
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout," ")) ;
	cout << endl;
}

void copyBackward() {
	int numbers[] = {1,2,3,5,7,11,13,17,19,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v1( numbers, numbers + N ); // C-style init.

	vector<int> v2( 4 ); // note need size
		// copy the first 4 elements in v1 to v2
	copy_backward(v1.begin(), v1.begin() + 4, v2.end());

		// the next line should print "1 2 3 5"
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout," ")) ;
	cout << endl;
}

#ifndef NO_BOOST
void copyN() {
	int numbers[] = {1,2,3,5,7,11,13,17,19,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v1( numbers, numbers + N ); // C-style init.

	vector<int> v2( 6 ); // note need size
	   // copy the first 4 elements in v1 to v2
             // v2 should now hold 1,2,3,5,7,11
	boost::algorithm::copy_n(v1.begin(), 6, v2.begin());

		// the next line should print "1 2 3 5"
	boost::algorithm::copy_n(v2.begin(), 4 ,ostream_iterator<int>(cout," ")) ;
	cout << endl;
}
#endif

void count() {

	// initial values in a C-style array
	int numbers[] = {44,45,44,54,44,88,33,1,44,23};
          const int N = sizeof(numbers)/sizeof(int);

	const char* cp = 
		"Without this statement this string would not exist";
	// initialize the collection
	vector<int> v1( numbers, numbers + N ); 

	// counts the number of occurences of 44
	// we could have done that directly on the C-style array!
	cout << count( v1.begin(), v1.end(), 44 ) << endl;

	// counts the number of spaces in the string
	cout << count( cp, cp + strlen(cp), ' ' ) << endl;
}

void countIf() {

	// initial values in a C-style array
	int numbers[] = {44,45,44,54,44,88,33,1,44,23};
          const int N = sizeof(numbers)/sizeof(int);

	vector<int> v1( numbers, numbers + N ); 

             // Counts the number of values greater than 50 = 2
	cout << count_if( v1.begin(), v1.end(), greaterThan50 ) << endl;
}

void distance() {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10,11};
          const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // use C-style init.
	vector<int>::iterator i_first = v.begin();
	vector<int>::iterator i_end = v.end();

	// find the distance between the the two iterators
	int size = distance( i_first, i_end);

	// the next line should print "The size of v is: 11"
	cout << "The size of v is: " << size << endl;
}

void fill() {
	int numbers[] = {1,2,3,33,45,62,74,80,45,62,230};
          const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // initialize vector

		// fill the vector with 99
	fill( v.begin(), v.end(), 99);

		// Prints: "99 99 99 99 99 99 99 99 99 99 99"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}


void fillN() {
		// initialize array
	int numbers[] = {1,2,3,33,45,62,74,80,45,62,230};
          const int N = sizeof(numbers)/sizeof(int);

		// initialize vector
	vector<int> v( numbers, numbers + N );

	fill_n( v.begin(), 5, 99);

		// Prints: "99 99 99 99 99 62 74 80 45 62 230"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void find() {
		// initialize elements in a C-style array
	int numbers[] = {44,45,62,54,77,88,33,1,74,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // initialize vector

		// try to find value 88 in the collection
	vector<int>::iterator i = find( v.begin(), v.end(), 88 );

	if (i != v.end() )	// matching element found
		cout << "88 found at location " << i - v.begin() << endl;
	else	// no matching element was found
		cout << "88 not found" << endl;
}

void findEnd() {
	int numbers[] = {1,2,3,33,45,62,74,80,45,62,230};
          const int N = sizeof(numbers)/sizeof(int);
	int sn[2] = {45,62}; // what to search for
	vector<int> v( numbers, numbers + N ); // initialze vector
	vector<int>::iterator i = 
		find_end( v.begin(), v.end(), sn, sn + 2);
	
		// Prints 80 because we ask for the element before (--i) the
		// last occurance of the sequence 45,62
	cout << *--i << endl; // note the use of --i
}

void findFirstOf() {
		// initialize the elements
	int numbers[] = {1,2,3,33,45,62,74,80,45,62,230};
	const int N = sizeof(numbers)/sizeof(int);

	int sn[2] = {45,62}; // sequence to search for

	vector<int> v( numbers, numbers + N ); // initialize vector

	vector<int>::iterator i = 
		find_first_of( v.begin(), v.end(), sn, sn+2 );

		// Prints 33 because 33 is the number before (--i) the first
		// occurance of the sub-seqeunce 45,62
	cout << "Found: " << *--i << endl; 
}


void findIf() {
		// initialize array with test values
	int numbers[] = {1,45,62,1,1,77,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init.

	vector<int>::iterator i = 
		find_if( v.begin(), v.end(), greaterThan50);

		// Prints 62 because 62 is the first element which saticfy
		// greater than 50 predicate
	cout << "Found: " << *i << endl;
}

void forEach() {
		// Initialize numbers to some test values
	int numbers[] = {44,45,62,54,77,88,33,1,74,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

		// Prints	"44 45 62 54 77 88 33 1 74 23" because the function
		// DumpOnCout::operator() is called for each element
	for_each( v.begin(), v.end(), DumpOnCout());
	cout << endl;
}

void generate() {
	vector<int> f(10); // Initial storage for 10 ints

		// Generate values to the collection by use of Fibonacci 
		// function object
	generate( f.begin(), f.end(), Fibonacci());

		// Prints: "1 1 2 3 5 8 13 21 34 55 0 0 0"
	copy( f.begin(), f.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void generateN() {
	vector<int> f(13); // Create a container that holds 13 ints

		// Generate 10 elements using Fibonacci (see generate)
	generate_n( f.begin(), 10, Fibonacci());

		// Prints: "1 1 2 3 5 8 13 21 34 55 0 0 0". The last three 0's
		// are due to the original size of 13
	copy( f.begin(), f.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void includes() {
		// initialize a C-style array with some test values
	int numbers[] = {1,2,3,33,45,50,62,80,84,108,62};
	const int N = sizeof(numbers)/sizeof(int);
		// initialize a sub-sequence to search for
	int sn[2] = {45,62};

	vector<int> v( numbers, numbers + N ); // C-style init.

		// check if the vector v contains the sub-sequence 
		// specified by sn
	if ( includes( v.begin(), v.end(), sn, sn + 2) )
		cout << "vector includes 45 or 62" << endl;
	else
		cout << "vector does not include 74 or 45" << endl;
}

void innerProduct() {
	int values1[] = {2, 5, 3};
	int values2[] = {4, 3, 5};
	const int N = sizeof(values1) / sizeof(int);
	vector<int> v( values2, values2 + N );
 
	   // the result is 38 (2 * 4 +  5 * 3 + 3 * 5)
	cout << "The inner product of {2,5,3} and {4,3,5} = " 
	     << inner_product(values1, values1 + N, v.begin(), 0)
	     << endl;
}

#ifndef NO_BOOST
void isSorted() {
	int values1[] = {1, 2, 3, 4, 5, 6};
	int values2[] = {1, 2, 3, 5, 4, 6};
	const int N = sizeof(values1);
	vector<int> v1( values1, values1 + N );
	vector<int> v2( values2, values2 + N );
	

	cout << "values 1 sorted? " << 
	   (boost::algorithm::is_sorted( v1.begin(), v1.end() ) ? "Yes" : "No") << endl;
	cout << "values 2 sorted? " << 
	   (boost::algorithm::is_sorted( v2.begin(), v2.end() ) ? "Yes" : "No") << endl;
}
#endif

void iterSwap() {
	int values[] = {1, 2, 3, 4, 5, 6};
	const int N = sizeof(values) / sizeof(int);
	vector<int> v( values, values + N );

	// Before the swap "1 2 3 4 5 6"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;

	iter_swap(v.begin(), v.end() - 1 );

	// After the swap "6 2 3 4 5 1"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void lexicographicalCompare() {

	int v1[] = {3, 1, 4, 1, 5, 9};
	int v2[] = {3, 1, 4, 2, 8, 5};
	int v3[] = {1, 2, 3, 4};
	int v4[] = {1, 2, 3, 4, 5};

	const int N1 = sizeof(v1) / sizeof(int);
	const int N2 = sizeof(v2) / sizeof(int);
	const int N3 = sizeof(v3) / sizeof(int);
	const int N4 = sizeof(v4) / sizeof(int);

	bool C12 = lexicographical_compare(v1, v1 + N1, v2, v2 + N2);
	bool C34 = lexicographical_compare(v3, v3 + N3, v4, v4 + N4);
	   // Both of the comparisons should return true
	cout << "v1[] < v2[]: " << (C12 ? "true" : "false") << endl;
	cout << "v3[] < v4[]: " << (C34 ? "true" : "false") << endl;
}

void lowerBound() {
	int numbers[] = {1,2,3,4,5,6,7,8};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N );

	// Find the first place we can insert 5 and maintain ordering
	vector<int>::iterator i = lower_bound( v.begin(), v.end(), 5 );

	cout << "We can insert 5 at: " << i - v.begin() << endl;
}

void makeHeap() {
	int values[] = {1, 4, 2, 8, 5, 7};
	const int N = sizeof(values) / sizeof(int);

	make_heap(values, values + N);

	// prints "8 5 7 4 1 2"
	copy(values, values + N, ostream_iterator<int>(cout, " "));
	cout << endl;
}

void maxElement() {
	int values[] = {1, 4, 2, 8, 5, 7};
	const int N = sizeof(values) / sizeof(int);
	vector<int> v( values, values + N );
	

	vector<int>::iterator i = max_element(v.begin(), v.end());

	cout << "Max value in the collection is: " << *i << endl;
}

void merge() {
	int numbers1[] = {1,2,33,45}; // test series 1
	int numbers2[] = {3,6,74,230}; // test series 2
	const int N = sizeof(numbers1)/sizeof(int);
	// initialize v to hold both test series
	vector<int> v( N*2 );

	// merge the two series into v
	merge( numbers1, numbers1 + N, // first series
	       numbers2, numbers2 + N, // second series
	       v.begin() ); // destination

	// prints "1,3,2,6,33,45,74,230"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void minElement() {
	int values[] = {9, 4, 2, 8, 5, 7};
	const int N = sizeof(values) / sizeof(int);
	vector<int> v( values, values + N );
	

	vector<int>::iterator i = min_element(v.begin(), v.end());

	// Should print 2 since 2 is the min value of the collection
	cout << "Min value in the collection is: " << *i << endl;
}

void mismatch() {
	int numbers1[] = {1,2,3,4,5,6,7,8,9}; // test series 1
	int numbers2[] = {1,2,3,4,5,6,7,9,9}; // test series 2
	const int N = sizeof(numbers1)/sizeof(int);

	pair<int*,int*> m = mismatch(numbers1, numbers1+N, numbers2);

	cout << "Mismatch on values (" <<  *m.first << "," << *m.second
	     << ") in position " << m.first - numbers1 << endl;
}

void nextPermutation() {
	int numbers[] = {8, 3, 6, 1, 2, 5, 7, 4};
	const int N = sizeof(numbers)/sizeof(int);
	int  i = 0;

	// We will find more than 3000 permutation before the 
	// collection is sorted
	while ( next_permutation( numbers, numbers + N ) ) {
		cout << "Iteration " << ++i << ": ";
		copy( numbers, numbers+N, ostream_iterator<int>(cout," "));
		cout << endl;
	}
}

void nthElement() {
	int numbers[] = {8, 3, 6, 1, 2, 5, 7, 4};
	const int N = sizeof(numbers)/sizeof(int);

	nth_element( numbers, numbers + 4, numbers + N );

	// Prints "1 3 2 4 5 6 7 8"
	copy( numbers, numbers+N, ostream_iterator<int>(cout," "));
	cout << endl;
}

void partialSort() {
	int numbers[] = {8, 3, 6, 1, 2, 5, 7, 4};
	const int N = sizeof(numbers)/sizeof(int);

	partial_sort( numbers, numbers + 4, numbers + N );

	// Prints "1 2 3 4 8 6 7 5"
	copy( numbers, numbers+N, ostream_iterator<int>(cout," "));
	cout << endl;
}
		
void partialSortCopy() {
	int numbers[] = {8, 3, 6, 1, 2, 5, 7, 4};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v(3);

	partial_sort_copy( numbers, numbers + N, v.begin(), v.end() );

	// Prints "1 2 3"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void partialSum() {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};
	const int N = sizeof(numbers)/sizeof(int);

	cout << "Partial sums: ";

	// Prints: "1 3 6 10 15 21 28 36 45 55"
	partial_sum(numbers, numbers+N, ostream_iterator<int>(cout, " "));

	cout << endl;
}

void partition() {
	int numbers[] = {8, 3, 6, 1, 2, 5, 7, 4};
	const int N = sizeof(numbers)/sizeof(int);

	int* ip = partition( numbers, numbers + N, lessThan5 );

	// Prints "4 3 2 1 6 5 7 8"
	copy( numbers, numbers + N, ostream_iterator<int>(cout," "));
	cout << endl;
	// Position will be 4
	cout << "Partition at : " << ip - numbers << endl;
}

void popHeap() {
	int numbers[] = {1, 2, 3, 4, 5, 6};
	const int N = sizeof(numbers) / sizeof(int);

	make_heap(numbers, numbers+N);
	cout << "Before pop: ";
	copy(numbers, numbers+N, ostream_iterator<int>(cout, " "));

	pop_heap(numbers, numbers+N);

	cout << endl << "After pop: "; // "5 4 3 1 2"
	copy(numbers, numbers+N, ostream_iterator<int>(cout, " "));
	   // poped value = 6
	cout << endl << "last value = " << numbers[N-1] << endl;
}

void prevPermutation() {
	int numbers[] = {8, 3, 6, 1, 2, 5, 7, 4};
	const int N = sizeof(numbers)/sizeof(int);
	int  i = 0;

	// We will find more than 37000 permutation before the 
	// collection is sorted
	while ( prev_permutation( numbers, numbers + N ) ) {
		cout << "Iteration " << ++i << ": ";
		copy( numbers, numbers+N, ostream_iterator<int>(cout," "));
		cout << endl;
	}
}

void pushHeap() {

	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	make_heap(numbers, numbers + 9);
	cout << "[numbers, numbers + 9)  = ";
	copy(numbers, numbers + 9, ostream_iterator<int>(cout, " "));
  
	push_heap(numbers, numbers + 10);
	cout << endl << "[numbers, numbers + 10) = ";
	copy(numbers, numbers + 10, ostream_iterator<int>(cout, " "));
	cout << endl;
}

void randomShuffle() {
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int N = sizeof(numbers)/sizeof(int);

	random_shuffle( numbers, numbers+N );
  
	push_heap(numbers,numbers + 10);
	copy(numbers, numbers + 10, ostream_iterator<int>(cout, " "));
	cout << endl;
}

void remove() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init

	// remove all 1's, after this statement the vector would
	// hold: 45,62 77 33 74 23 33 1 74 1 23
	vector<int>::iterator newEnd = remove(v.begin(),v.end(),1);
	// now lets remove the garbage elements "33 1 74 1 23"
	v.erase( newEnd, v.end() );

	// Prints: "45 62 77 33 74 23"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void removeCopy() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init

	// pass all values except 1 to the ostream iterator
	remove_copy(v.begin(),v.end(), ostream_iterator<int>(cout," "), 1);
	cout << endl;

	// prints "1 45 62 1 77 1 33 1 74 1 23"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;

}

void removeCopyIf() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init

	// pass all values except less than 50
	remove_copy_if( v.begin(), v.end(), 
	    ostream_iterator<int>(cout," "), lessThan50 );
	cout << endl;

	// prints "1 45 62 1 77 1 33 1 74 1 23"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;

}

void removeIf() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1, 23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init.

	// remove all values less than 50. At the end of this, the
	// collection contains "62 77 74 1 77 33 1 74 1 23"
	vector<int>::iterator newEnd = 
		remove_if( v.begin(), v.end(), lessThan50 );
	// remove the garbage values "1 77 33 1 74 1 23"
	v.erase( newEnd, v.end() );

	// Prints: "62 77 74"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void replace() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

	// replace all 1's with 5's
	replace( v.begin(), v.end(), 1, 5 );

	// prints "5 45 62 5 77 5 33 5 74 5 23"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void replaceCopy() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

	// prints "5 45 62 5 77 5 33 5 74 5 23"
	replace_copy( v.begin(), v.end(), 
		ostream_iterator<int>(cout," "), 1, 5 );

	cout << endl;
}

void replaceCopyIf() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

	// prints "0 0 62 0 77 0 0 0 74 0 0"
	replace_copy_if( v.begin(), v.end(), 
		ostream_iterator<int>(cout," "), lessThan50, 0 );

	cout << endl;
}

void replaceIf() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init
	// replace all values with value less than 50 with 0
	replace_if( v.begin(), v.end(), lessThan50, 0 );

	// Prints "0 0 62 0 77 0 0 0 74 0 0"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}


void reverse() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init.

	// reverse the order of all elements in v
	reverse( v.begin(), v.end() );

	// Prints: "23 1 74 1 33 1 77 1 62 45 1"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void reverseCopy() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N ); // C-style init.

	// reverse the order and copy them to the oustream
	// Prints: "23 1 74 1 33 1 77 1 62 45 1"
	reverse_copy( v.begin(), v.end(), 
		ostream_iterator<int>(cout," ") );
	cout << endl;

	// Prints: "1 45 62 1 77 1 33 1 74 1 23" (No change)
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
}

void rotate() {
	int numbers[] = {0,1,2,3,4,5,6,7,8,9};
	const int N = sizeof(numbers)/sizeof(int);

	rotate( numbers, numbers + 2, numbers + N );

	// Prints: "2 3 4 5 6 7 8 9 0 1"
	copy( numbers, numbers + N, ostream_iterator<int>(cout," "));
	cout << endl;
}

void rotateCopy() {
	int numbers[] = {0,1,2,3,4,5,6,7,8,9};
	const int N = sizeof(numbers)/sizeof(int);

	// Prints: "2 3 4 5 6 7 8 9 0 1"
	rotate_copy( numbers, numbers + 2, numbers + N, 
		ostream_iterator<int>(cout," ") );
	cout << endl;

	// Prints: "0 1 2 3 4 5 6 7 8 9" (The same)
	copy( numbers, numbers + N, ostream_iterator<int>(cout," "));
	cout << endl;
}

void search() {
	int numbers[] = {1,2,3,33,45,62,74,80,45,62,230};
	const int N = sizeof(numbers)/sizeof(int);

	int sn[2] = {45,62}; // sequence to search for

	vector<int> v( numbers, numbers + N ); // initialize vector

	vector<int>::iterator i = 
		search( v.begin(), v.end(), sn, sn+2 );

		// Prints 33 because 33 is the number before (--i) the first
		// occurance of the sub-seqeunce 45,62
	cout << "Found: " << *--i << endl; 
}

void searchN() {
	int numbers[] = {1,2,3,4,5,5,5,6,6,7,8};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // initialize vector

	// search for 3 concecutive occurances of 5
	vector<int>::iterator i = 
		search_n( v.begin(), v.end(), 3, 5 );

	// Prints 4 because 4 is the number before (--i) the first
	// occurance of 3 time 5
	cout << "Found: " << *--i << endl; 
}

void setDifference() {
	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {3,4,5,6,7};
	const int N = sizeof(numbers1)/sizeof(int);

	// prints "1 2"
	set_difference( numbers1, numbers1+N, numbers2, numbers2+N, 
			ostream_iterator<int>(cout, " ") );

	cout << endl;
}

void setIntersection() {
	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {3,4,5,6,7};
	const int N = sizeof(numbers1)/sizeof(int);

	// prints "3 4 5"
	set_intersection( numbers1, numbers1+N, numbers2, numbers2+N, 
			ostream_iterator<int>(cout, " ") );

	cout << endl;
}

void setSymmetricDifference() {
	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {3,4,5,6,7};
	const int N = sizeof(numbers1)/sizeof(int);

	// prints "1 2 6 7"
	set_symmetric_difference( numbers1, numbers1+N, numbers2, numbers2+N, 
			ostream_iterator<int>(cout, " ") );

	cout << endl;
}

void setUnion() {
	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {3,4,5,6,7};
	const int N = sizeof(numbers1)/sizeof(int);

	// prints "1 2 3 4 5 6 7"
	set_union( numbers1, numbers1+N, numbers2, numbers2+N, 
			ostream_iterator<int>(cout, " ") );

	cout << endl;
}


void sort() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

	// sort all elements in v
	sort( v.begin(), v.end() );

	// Prints: "1 1 1 1 1 23 33 45 62 74 77"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," ") );
}

void sortHeap() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

	// sort all elements in v
	make_heap( v.begin(), v.end() );
	sort_heap( v.begin(), v.end() );

	// Prints: "1 1 1 1 1 23 33 45 62 74 77"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," ") );
	cout << endl;
}

void stablePartition() {
	int numbers[] = {0,1,2,3,4,5,6,7,8,9};
	const int N = sizeof(numbers)/sizeof(int);

	stable_partition( numbers, numbers+N, modulus2 );

	// Prints "0 2 4 6 8 1 3 5 7 9"
	copy( numbers, numbers + N, ostream_iterator<int>(cout," ") );
	cout << endl;
	
}

void stableSort() {
	int numbers[] = {1,45,62,1,77,1,33,1,74,1,23};
	const int N = sizeof(numbers)/sizeof(int);

	vector<int> v( numbers, numbers + N ); // C-style init.

	// sort all elements in v
	stable_sort( v.begin(), v.end() );

	// Prints: "1 1 1 1 1 23 33 45 62 74 77"
	copy( v.begin(), v.end(), ostream_iterator<int>(cout," ") );
	cout << endl;
}

void swap() {
	int v1 = 1;
	int v2 = 2;

	swap( v1, v2 );

	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
}

void swapRanges() {
	int numbers1[] = {1,2,3};
	int numbers2[] = {4,5,6};
	const int N = sizeof(numbers1)/sizeof(int);

          swap_ranges( numbers1, numbers1 + N, numbers2 );

	// Prints "4 5 6 1 2 3"
	copy( numbers1, numbers1 + N, ostream_iterator<int>(cout," ") );
	copy( numbers2, numbers2 + N, ostream_iterator<int>(cout," ") );
	cout << endl;
}

int multiplyBy2(int i) { return i*2; }
int multiply( int i1, int i2 ) { return i1*i2; }

void transform1() {
	int numbers[] = {1,2,3};
	const int N = sizeof(numbers)/sizeof(int);

	transform( numbers, numbers + N, numbers, multiplyBy2 );

	// Prints "2 4 6"
	copy( numbers, numbers + N, ostream_iterator<int>(cout," ") );
	cout << endl;
}
	
void transform2() {
	int numbers[] = {1,2,3};
	const int N = sizeof(numbers)/sizeof(int);

	transform( numbers, numbers + N, numbers, numbers, multiply );

	// Prints "1 4 9"
	copy( numbers, numbers + N, ostream_iterator<int>(cout," ") );
	cout << endl;
}

void unique() {
	int numbers[] = {1,1,1,2,2,3,3,3,4,4};
	const int N = sizeof(numbers)/sizeof(int);

	int* newEnd = unique( numbers, numbers + N );

	// Prints "1 2 3 4"
	copy( numbers, newEnd, ostream_iterator<int>(cout," ") );
	cout << endl;
}	

void uniqueCopy() {
	int numbers[] = {1,1,1,2,2,3,3,3,4,4};
	const int N = sizeof(numbers)/sizeof(int);

	// Prints "1 2 3 4"
	unique_copy( numbers, numbers + N, ostream_iterator<int>(cout," ") );

	cout << endl;
}

void upperBound() {
	int numbers[] = {1,2,3,4,5,6,7,8};
	const int N = sizeof(numbers)/sizeof(int);
	vector<int> v( numbers, numbers + N );

	// Find the first place we can insert 5 and maintain ordering
	vector<int>::iterator i = upper_bound( v.begin(), v.end(), 5 );

	cout << "We can insert 5 at: " << i - v.begin() << endl;
}

int main() {
	accumulate();
	adjacentFind();
	advance();
	binarySearch();
	copy();
	copyBackward();
#ifndef NO_BOOST
	copyN(); // copy_n not in Visual C++
#endif
	count();
	countIf();
	distance();
	fill();
	fillN();
	find();
	findEnd();
	findFirstOf();
	findIf();
	forEach();
	generate();
	generateN();
	includes();
	innerProduct();
#ifndef NO_BOOST
	isSorted();
#endif
	iterSwap();
	lexicographicalCompare();
	lowerBound();
	makeHeap();
	maxElement();
	merge();
	minElement();
	mismatch();
	nextPermutation();
	nthElement();
	partialSort();
	partialSortCopy();
	partialSum();
	partition();
	popHeap();
	prevPermutation();
	pushHeap();
	randomShuffle();
	remove();
	removeCopy();
	removeCopyIf();
	removeIf();
	replace();
	replaceCopy();
	replaceCopyIf();
	replaceIf();
	reverse();
	reverseCopy();
	rotate();
	rotateCopy();
	search();
	searchN();
	setDifference();
	setIntersection();
	setSymmetricDifference();
	setUnion();
	sort();
	sortHeap();
	stablePartition();
	stableSort();
	swap();
	swapRanges();
	transform1();
	transform2();
	unique();
	uniqueCopy();
	upperBound();

	return 0;
};

