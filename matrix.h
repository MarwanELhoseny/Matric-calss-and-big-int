#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <iomanip>
using namespace std;

class matrix
{
    private:
        int* data;
        int row , col;
    public:
		matrix(int row1 = 0, int col1 = 0, int num[] = 0);
        void setrow(int r);
        void setcolumn(int c);
        void setdata(int row1, int col1,int num[]);
        int getrow();
        int getcolumn();
        int *getdata();

        friend istream& operator >> (istream& in, matrix& mat);/// friend because it need in the class to name as a type
        friend ostream& operator<< (ostream& out, matrix mat); /// friend because it need in the class to name as a type
        void createMatrix(int row, int col, int num[], matrix& mat); /// it create the matrix and it written by the doctor

        /// student one ///
        matrix operator+  (matrix mat2); /// Add if same dimensions
        matrix operator-  (matrix mat2); /// Subtract if same dimensions
        matrix operator*  (matrix mat2); /// Multiplication if col1 == row2
        matrix operator+  (int scalar);  /// Add a scalar
        matrix operator-  (int scalar);  /// Subtract a scalar
        matrix operator*  (int scalar);  /// Multiplication by scalar

        /// student two ///
        matrix operator+= (matrix mat2); /// mat1 changes & return
        matrix operator-= (matrix mat2); /// mat1 changes + return new
        matrix operator+= (int scalar);   /// change mat & return new matrix
        matrix operator-= (int scalar);   /// change mat & return new matrix
        void   operator++ ();   	/// Add 1 to each element ++mat
        void   operator-- ();    	/// Sub 1 from each element --mat

        /// student three ///
        bool   operator== (matrix mat2);	/// True if identical
        bool   operator!= (matrix mat2); 	/// True if not same
        bool   isSquare();      /// True if square matrix
        bool   isSymetric();    /// True if square and symmetric
        bool   isIdentity();    /// True if square and identity
        matrix transpose();     /// Return new matrix with the transpose
        void operator=(matrix mat); /// It put the filled Matrix in an empty Matrix
};

#endif // MATRIX_H
