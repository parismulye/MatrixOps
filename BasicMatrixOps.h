#include<vector>

//Adding two matrices A+B
ClassMatrix operator+(const ClassMatrix& A, const ClassMatrix& B);
//Subtracting two matrice A-B
ClassMatrix operator-(const ClassMatrix& A, const ClassMatrix& B);
//multiplication by a scalar double
ClassMatrix operator*(const ClassMatrix& A, const double fact);
ClassMatrix operator*(const double fact, const ClassMatrix& A);
//division by a scalar double
ClassMatrix operator/(const ClassMatrix& A, const double fact);
ClassMatrix operator/(const double fact, const ClassMatrix& A);
//transpose
ClassMatrix Transpose(const ClassMatrix& A);
//return a row vector of a specific row number
std::vector<double> GetRow(const ClassMatrix& A, int rownum);
//return a column vector of a specific row number
std::vector<double> GetColumn(const ClassMatrix& A, int colnum);
//return a submatrix with rowrange and columnrange
ClassMatrix GetSubMatrix(const ClassMatrix& A, int rowstart, int rowend, int colstart, int colend);
//dot product of matrices (elementwise)
ClassMatrix DotProduct(const ClassMatrix& A, const ClassMatrix& B);
//dot product of vectors (elementwise)
std::vector<double> DotProduct(const std::vector<double>& A, const std::vector<double>& B);
//total sum of matrix
double Sum(const ClassMatrix& A);
//total sum of vector
double Sum(const std::vector<double>& A);
//scalar product vector
double ScalarProduct(const std::vector<double>& A, std::vector<double>& B);
//scalar product matrix
double ScalarProduct(const ClassMatrix& A, const ClassMatrix& B);
