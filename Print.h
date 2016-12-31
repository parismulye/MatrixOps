#include<vector>

//prints matrix as stored in memory (1D)
void PrintMatrix1D(const ClassMatrix& A);
//visual representation 2D
void PrintMatrix(const ClassMatrix& A);
//print diagonal of a square matrix
void PrintDiagonal(const ClassMatrix& A);
//print specified row
void PrintRow(const ClassMatrix& A, const int val);
//print specified column
void PrintColumn(const ClassMatrix& A, const int val);
//print a vector
void PrintVector(const std::vector<double> vec);
