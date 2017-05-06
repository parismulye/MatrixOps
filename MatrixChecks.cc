#include "ClassMatrix.h"
#include<iostream>

bool IsSquare(const ClassMatrix& A) {
  if(A.Rows() != A.Columns()) return false;
  return true;
}

bool IsNotSquare(const ClassMatrix& A) {
  if(A.Rows() == A.Columns()) return false;
  return true;
}

bool IsNull(const ClassMatrix& A){
  for(int i=0; i<A.Elems(); i++){
    if(*(A.Begin()+i) != 0.0) return false;
  }
  return true;
}

bool IsIdentity(const ClassMatrix& A){
  if(IsNotSquare(A)){  std::cout << "Not a Square Matrix"; throw; }
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(i!=j && A(i,j) != 0.0) return false;
      if(i==j && A(i,j) != 1.0) return false;
    }
  }
  return true;
}

bool IsSymmetric(const ClassMatrix& A){
  if(IsNotSquare(A)){std::cout << "Not a Square Matrix"; throw;}
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(A(i,j) != A(j,i)) return false;
    }
  }
  return true;
}

bool operator==(const ClassMatrix& A, const ClassMatrix& B){
  if(A.Rows() != B.Rows()) return false;
  if(A.Columns() != B.Columns()) return false;
  for(int i=0; i<A.Elems(); i++){
    if(*(A.Begin()+i) != *(B.Begin()+i)) return false;
  }
  return true;
}
