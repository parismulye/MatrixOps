#include "ClassMatrix.h"
#include<iostream>

  ClassMatrix::ClassMatrix(int rows, int cols){
  m = rows;
  n = cols;
  elems = m*n;
  p = new double [m*n];
  for (int i=0; i< m*n; i++){
    *(p+i) = 0.0;
  }
}

ClassMatrix::ClassMatrix(int size){
  m = size;
  n = size;
  elems = m*n;
  p = new double [m*n];
  for (int i=0; i< m*n; i++){
    *(p+i) = 0.0;
  }
}


int ClassMatrix::Rows(){return m;}
int ClassMatrix::Columns(){return n;}
int ClassMatrix::Elems(){return elems;}
double* ClassMatrix::Begin(){return p;}


void ClassMatrix::PrintMatrix1D(){
  for(int i=0; i<elems; i++){
    std::cout << *(p+i) << " ";
  }
  std::cout << std::endl;
}

void ClassMatrix::PrintMatrix(){
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      std::cout << *(p+m*j+i) << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

void PrintMatrix(ClassMatrix& A){
  for(int i=0; i < A.Rows(); i++){
    for(int j=0; j< A.Columns(); j++){
      std::cout << A(i,j) << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

double& ClassMatrix::operator()(int i, int j){
  return *(p+m*j+i);
}
ClassMatrix ClassMatrix::operator=(ClassMatrix& A){
  ClassMatrix B(A.Rows(),A.Columns());
  for(int i=0; i< A.Elems(); i++){
    *(B.Begin()+i) = *(A.Begin()+i);
  }
  return B;
}

ClassMatrix operator+(ClassMatrix& A, ClassMatrix& B){
  if(A.Rows() != B.Rows()){std::cout << "Size Mismatch: Addition"; throw;}
  if(A.Columns() != B.Columns()){std::cout << "Size Mismatch: Addition"; throw;}
  ClassMatrix C(A.Rows(),A.Columns());
  for(int i=0; i<A.Elems(); i++){
    *(C.Begin()+i) = *(A.Begin()+i) + *(B.Begin()+i);
  }
  return C;
}

int operator==(ClassMatrix& A, ClassMatrix& B){
  if(A.Rows() != B.Rows()) return 0;
  if(A.Columns() != B.Columns()) return 0;
  for(int i=0; i<A.Elems(); i++){
    if(*(A.Begin()+i) != *(B.Begin()+i)) return 0;
  }
  return 1;
}
