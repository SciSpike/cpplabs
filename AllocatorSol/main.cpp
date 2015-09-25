/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

// Disable the warnings from microsoft

#include <iostream>
#include <vector>
#include <string>
#include "eageralloc.h"

using namespace std;

/*
 * A test class ID
 */
class ID {
public:
    int         id;
    string      Name;

    ID() : id(0), Name("") {}
    ID(int i, string s) : id(i), Name(s) {}
};

bool operator< ( const ID& v1, const ID& v2 ) { return &v1 < &v2; }
bool operator== ( const ID& v1, const ID& v2 ) { return &v1 == &v2; }

// Define a template class for a vector of IDs.
typedef vector<ID, EagerAlloc<ID> > NAMEVECTOR;

int main()
{
        // Declare a dynamically allocated vector of IDs.
    NAMEVECTOR theVector;

        // Iterator is used to loop through the vector.
    NAMEVECTOR::iterator theIterator;

    for (int i = 0; i < 1000; i++)
        theVector.push_back(ID(i, "Some object"));

    theVector.erase(theVector.end() - 100, theVector.end());
    
        // Output the contents of the vector.
    cout << endl << "Players and scores:" << endl;
    for (theIterator = theVector.begin(); theIterator != theVector.end();
         theIterator++)
        cout << theIterator->id  << "\t"
             << theIterator->Name << endl;
    cout << endl;
    return 0;
} 
