#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include<iostream>

void MakeIdentity(ClassMatrix &A){
  if(A.Rows() != A.Columns()){
    std::cout << "Not a Sqaure Matrix "; throw;
  }
  for(int i=0; i< A.Elems(); i++) *(A.Begin()+i) = 0.0;
  for(int i=0; i< A.Rows(); i++){
    A(i,i) = 1.0;
  }
}

void MakeNull(ClassMatrix& A){
  for(int i=0; i< A.Elems(); i++) *(A.Begin()+i) = 0.0;
}

void MakeRandomInt(ClassMatrix& A, int min, int max){
  int range = max-min;
  for(int i=0; i<A.Elems(); i++){
    *(A.Begin()+i) = std::rand()%range+min;
  }
}

void MakeDiagonal(ClassMatrix& A){
  if(IsNotSquare(A)) {std::cout << "Not a Square Matrix"; throw;}
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(i!=j) A(i,j) = 0.0;
    }
  }
}

void MakeUpperTriangular(ClassMatrix& A){
  if(IsNotSquare(A)) {std::cout << "Not a Square Matrix"; throw;}
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(i>j) A(i,j) = 0.0;
    }
  }
}

void MakeLowerTriangular(ClassMatrix& A){
  if(IsNotSquare(A)) {std::cout << "Not a Square Matrix"; throw;}
  for(int i=0; i<A.Rows(); i++){
    for(int j=0; j<A.Columns(); j++){
      if(i<j) A(i,j) = 0.0;
    }
  }
}
