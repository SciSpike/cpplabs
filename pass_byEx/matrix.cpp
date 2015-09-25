#include "matrix.h"
#include <iostream>
#include <new>

using namespace std;

IntMatrix::IntMatrix(int m, int n)
{
    numRows = m;
    numCols = n;
    
    matrix = new int*[m];

    for ( int i = 0; i < m; i++)
        matrix[i] = new int[n];
}

IntMatrix::IntMatrix(const IntMatrix & copyMe)
{
    numRows = copyMe.getNumRows();
    numCols = copyMe.getNumCols();

    matrix = new int*[numRows];

    for ( int i = 0; i < numRows; i++) {

        matrix[i] = new int[numCols];

        for ( int j = 0; j < numCols; j++)
            matrix[i][j] = copyMe.getVal(i, j);
    }

#ifdef COUNT_TEMP
    cout << "copy constructor called" << endl;
#endif    
}

IntMatrix::~IntMatrix() {
    for ( int i = 0; i < numRows; i++)
		delete [] matrix[i];
	delete [] matrix;
}

const IntMatrix & IntMatrix::operator=(const IntMatrix & rhs) {
	if (this != &rhs) { // test for self-assignment
		this->~IntMatrix(); // reuse dtor to clean up lhs
		new(this) IntMatrix(rhs); // reuse cpy ctor to duplicate rhs
	}
	return *this;
}

void IntMatrix::fillWith(int val)
{
    for ( int i = 0; i < numRows; i++) {
        for ( int j = 0; j < numCols; j++)
            matrix[i][j] = val;
    }
}
