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
