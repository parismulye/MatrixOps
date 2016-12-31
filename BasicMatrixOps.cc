#include "ClassMatrix.h"
#include "BasicMatrixOps.h"

#include<iostream>

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
