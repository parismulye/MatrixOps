#include "ClassMatrix.h"
#include<iostream>

int IsSquare(ClassMatrix& A){
  if(A.Rows() != A.Columns()) return 0;
  return 1;
}

int IsNotSquare(ClassMatrix& A){
  if(A.Rows() == A.Columns()) return 0;
  return 1;
}

int IsNull(ClassMatrix& A){
  for(int i=0; i<A.Elems(); i++){
    if(*(A.Begin()+i) != 0.0) return 0;
  }
  return 1;
}

int IsIdentity(ClassMatrix& A){
  if(A.Rows()!=A.Columns()){
    std::cout << "Not a Square Matrix"; throw;
  }
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(i!=j && A(i,j) !=0) return 0;
      if(i==j && A(i,j) !=1) return 0;
    }
  }
  return 1;
}

int IsSymmetric(ClassMatrix& A){
  if(IsNotSquare(A)){std::cout << "Not a Square Matrix"; throw;}
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(A(i,j) != A(j,i)) return 0;
    }
  }
  return 1;
}
