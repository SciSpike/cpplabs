/***************************************************************
 *  
 * File: main.cpp
 *
 * Description: Simple illustration of the use of standard
 *              containers.
 *
 * Author: SciSpike 
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include <iostream> // note the include of the standard iostream
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>

/* Constants and defines */

using namespace std;

/****************************************************************
 *
 * Description: Prints out the content of a list.
 *
 * Pre:  ListType must support be a sequence container from
 *       STL.
 *       The heading must be a valid string.
 *
 * Post: Prints the content and the header to cout in the 
 *       following format:
 *          heading
 *          elm1 elm2 ...
 *
 ***************************************************************/
template <class ListType>
void dumpList( const char* heading, const ListType& theList) {
   cout << heading << endl;
   typename ListType::const_iterator i;
   for ( i = theList.begin(); i != theList.end(); ++i) {
      cout << *i << " ";
   }
   cout << endl;
}

/****************************************************************
 *
 * Description: Illustration of the find algorithm. Searches
 *              for a value specified in the list then
 *              prints out the result of the find.
 *
 * Pre:  The name must be a valid string.
 *
 * Post: Prints the content and the header to cout in the 
 *       following format:
 *          <name> [does not] contain <theValue>
 *
 ***************************************************************/
void reportFindResult( const char* name, const vector<int>& theList, int theValue ) {
   // check to see if vector 1 contains the value 92
   vector<int>::const_iterator temp = find( theList.begin(), theList.end(), theValue );
   cout << name << " ";
   if ( temp == theList.end() )
      cout << "does not ";
   cout << "contain the value " << theValue << endl;
}

/****************************************************************
 *
 * Description: main: test loop for showing the use of std containers.
 *
 ***************************************************************/
int main() {
   /*
    * initialize two vectors
    */
   int numberSeries1[6] = { 23,67,87,31,42, 309 };
   int numberSeries2[6] = { 92,19,43,92, 897,333 };
   vector<int> v1 (numberSeries1, numberSeries1+6);
   vector<int> v2 (numberSeries2, numberSeries2+6);

   /*
    * print out the two vectors
    */
   dumpList( "Original series 1:", v1 );
   dumpList( "Original series 2:", v2 );

   /*
    * sort vector 1 and then print it out
    */
   sort(v1.begin(), v1.end());
   dumpList( "Sorted series 1:", v1 );

   /*
    * sort vector 2 and then print it out
    */
   sort(v2.begin(), v2.end());
   dumpList( "Sorted series 2:", v2 );

   /*
    * find the value 92 in each vector (check the details of the function)
    */
    reportFindResult( "Series 1", v1, 92 );
    reportFindResult( "Series 2", v2, 92 );
    

   /*
    * copy the series 1 into a new list
    */
   list<int> l1( v1.size());
   copy( v1.begin(), v1.end(), l1.begin() );
   dumpList( "New list created with copy:", l1 );
   
   /*
    * create a merged list of series 1 and 2
    * note the use of the inserter function
    * inserter is part of the standard library too!
    */
   vector<int> v3;
   merge( v1.begin(), v1.end(), v2.begin(), v2.end(), inserter( v3, v3.begin() ) );
   dumpList( "Merged list", v3 );

   /*
    * show an alternative to the dump list using
    * istream iterators
    */
   cout << "About to use the ostream_iterator" << endl;
   copy( v3.begin(), v3.end(), ostream_iterator<int>( cout, " " ) );
   cout << endl;

   /*
    * show the use of the replace algorithm
    */
   replace( v3.begin(), v3.end(), 92, 93 );
   dumpList( "After replacing 92 with 93:", v3 );

   /*
    * show the use of the reverse algorithm
    */
   reverse( v3.begin(), v3.end());
   dumpList( "After reverse:", v3 );

   return 0;
}