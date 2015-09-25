#ifndef _INT_MATRIX_
#define _INT_MATRIX_

class IntMatrix {
public:
    IntMatrix(int m, int n);
    IntMatrix(const IntMatrix &copyMe);
	~IntMatrix();

    friend IntMatrix operator+(IntMatrix & m1, IntMatrix & m2);
	const IntMatrix & operator=(const IntMatrix & rhs);

    void fillWith(int val);
    int getNumRows(void) const { return numRows; }
    int getNumCols(void) const { return numCols; }
    void setVal(int i, int j, int val) { matrix[i][j] = val; }
    int  getVal(int i, int j) const { return matrix[i][j]; }
    
private:
    int numRows;
    int numCols;
    int **matrix;
};

#endif
