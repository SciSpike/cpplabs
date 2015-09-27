#include "matrix.h"
#include "../lib/timer.h"
#include <iostream>

using namespace std;

void printMatrix(IntMatrix &mtrx)
{
    int m = mtrx.getNumRows();
    int n = mtrx.getNumCols();


    for ( int i = 0; i < m; i++) {
        for ( int j = 0; j < n; j++)
            cout << mtrx.getVal(i, j) << " ";
        cout << endl;
    }
    cout << endl;
}

IntMatrix operator+(IntMatrix m1, IntMatrix m2)

{
    IntMatrix rslt(m1.numRows, m1.numCols);

    for ( int i = 0; i < m1.numRows; i++) {
        for ( int j = 0; j < m1.numCols; j++) {

            rslt.matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
        }
    }
    return rslt;
}
    
int main()
{
    IntMatrix m1(10, 20), m2(10, 20);
    IntMatrix m3(10, 20);

    m1.fillWith(1); // fill all elements with 1
    m2.fillWith(2); // fill all elements with 2

    Timer t("Time for 10000 matrix addition passed by value: ");

    for (int i = 0; i < 10000; i++) {
        m3 = m1 + m2;
#ifdef DEBUG
        printMatrix(m3);
#endif
    }    
    return 0;
}
