#include<vector>

//prints matrix as stored in memory (1D)
void PrintMatStorage(const ClassMatrix& A);
//visual representation 2D
void Print(const ClassMatrix& A);
//print diagonal of a square matrix
void PrintDiagonal(const ClassMatrix& A);
//print specified row
void PrintRow(const ClassMatrix& A, const int val);
//print specified column
void PrintColumn(const ClassMatrix& A, const int val);
//print a vector
void Print(const std::vector<double> vec);
