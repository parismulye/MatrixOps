#include "ClassMatrix.h"
#include<iostream>
#include<iomanip>

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


int ClassMatrix::Rows() const {return m;}
int ClassMatrix::Columns() const {return n;}
int ClassMatrix::Elems() const {return elems;}
double* ClassMatrix::Begin() const {return p;}


void ClassMatrix::PrintMatrix1D() const {
  for(int i=0; i<elems; i++){
    std::cout << *(p+i) << " ";
  }
  std::cout << std::endl;
}

void ClassMatrix::PrintMatrix() const {
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      std::cout << std::scientific << std::setw(6) << std::setprecision(2) <<  *(p+m*j+i) << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

void PrintMatrix(const ClassMatrix& A){
  A.PrintMatrix();
}

double& ClassMatrix::operator()(int i, int j){
  return *(p+m*j+i);
}

ClassMatrix ClassMatrix::operator=(const ClassMatrix& A){
  ClassMatrix B(A.Rows(),A.Columns());
  for(int i=0; i< A.Elems(); i++){
    *(B.Begin()+i) = *(A.Begin()+i);
  }
  return B;
}
