#include "ClassMatrix.h"
#include "BasicMatrixOps.h"
#include<iostream>
#include<vector>

ClassMatrix operator+(const ClassMatrix& A, const ClassMatrix& B){
  if(A.Rows() != B.Rows()){std::cout << "Size Mismatch: Addition"; throw;}
  if(A.Columns() != B.Columns()){std::cout << "Size Mismatch: Addition"; throw;}
  ClassMatrix C(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++){
    *(C.Begin()+i) = *(A.Begin()+i) + *(B.Begin()+i);
  }
  return C;
}

ClassMatrix operator-(const ClassMatrix& A, const ClassMatrix& B){
  if(A.Rows() != B.Rows()){std::cout << "Size Mismatch: Addition"; throw;}
  if(A.Columns() != B.Columns()){std::cout << "Size Mismatch: Addition"; throw;}
  ClassMatrix C(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++){
    *(C.Begin()+i) = *(A.Begin()+i) - *(B.Begin()+i);
  }
  return C;
}

ClassMatrix operator*(const double fact, const ClassMatrix& A){
  ClassMatrix B(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++) *(B.Begin()+i) = *(A.Begin()+i) * fact;
  return B;
}

ClassMatrix operator*(const ClassMatrix& A, const double fact){
  ClassMatrix B(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++) *(B.Begin()+i) = *(A.Begin()+i) * fact;
  return B;
}

ClassMatrix operator/(const double fact, const ClassMatrix& A){
  ClassMatrix B(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++) *(B.Begin()+i) = *(A.Begin()+i) / fact;
  return B;
}

ClassMatrix operator/(const ClassMatrix& A, const double fact){
  ClassMatrix B(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++) *(B.Begin()+i) = *(A.Begin()+i) / fact;
  return B;
}

ClassMatrix Transpose(const ClassMatrix& A){
  ClassMatrix C(A.Columns(),A.Rows());
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      C(i,j) = A(j,i);
    }
  }
  return C;
}

std::vector<double> GetRow(const ClassMatrix& A, int rownum){
  int size = A.Columns();
  std::vector<double> rowvect(size,0);
  for(int i=0; i<size; i++){
    rowvect[i] = A(rownum,i);
  }
  return rowvect;
}

std::vector<double> GetColumn(const ClassMatrix& A, int colnum){
  int size = A.Rows();
  std::vector<double> colvect(size,0);
  for(int i=0; i<size; i++){
    colvect[i] = A(i,colnum);
  }
  return colvect;
}

ClassMatrix GetSubMatrix(const ClassMatrix& A, int rowstart, int rowend, int colstart, int colend){
  int new_no_rows = rowend-rowstart+1;
  int new_no_cols = colend-colstart+1;
  ClassMatrix B(new_no_rows, new_no_cols);
  for(int i=0; i<new_no_rows; i++){
    for(int j=0; j<new_no_cols; j++){
      B(i,j) = A(rowstart+i, colstart+j);
    }
  }
  return B;
}

ClassMatrix DotProduct(const ClassMatrix& A, const ClassMatrix& B){
  if(A.Rows() != B.Rows() || A.Columns() != B.Columns()) {std::cout << "size is not same"; throw;}
  ClassMatrix C(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++) *(C.Begin()+i) = *(A.Begin()+i) * *(B.Begin()+i);
  return C;
}

std::vector<double> DotProduct(const std::vector<double>& A, const std::vector<double>& B){
  if(A.size() != B.size()) {std::cout << "size is not same"; throw;}
  std::vector<double> C(A.size());
  for(int i=0; i<A.size(); i++) C[i] = A[i]*B[i];
  return C;
}

double Sum(const ClassMatrix& A){
  double sum = 0;
  for(int i=0; i<A.Elems(); i++) sum += *(A.Begin()+i);
  return sum;
}

double Sum(const std::vector<double>& A){
  double sum = 0;
  for(int i=0; i<A.size(); i++) sum+= A[i];
  return sum;
}

double ScalarProduct(const std::vector<double>& A, std::vector<double>& B){
  std::vector<double> dotvec = DotProduct(A,B);
  return Sum(dotvec);
}

double ScalarProduct(const ClassMatrix& A, const ClassMatrix& B){
  ClassMatrix dotmatrix = DotProduct(A,B);
  return Sum(dotmatrix);
}

ClassMatrix TensorProduct(const std::vector<double>& A, const std::vector<double>& B){
  int rows = A.size();
  int columns = B.size();
  ClassMatrix C(rows, columns);
  for(int i=0; i< rows; i++){
    for(int j=0; j< columns; j++){
      C(i,j) = A[i]*B[j];
    }
  }
  return C;
}
