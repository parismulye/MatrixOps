#include "ClassMatrix.h"
#include<iostream>

//constructor

//rectangular
ClassMatrix::ClassMatrix(int rows, int cols){
  m = rows;
  n = cols;
  elems = m*n;
  p = new double [m*n];
  for (int i=0; i< m*n; i++){
    *(p+i) = 0.0;
  }
}

//sqaure
ClassMatrix::ClassMatrix(int size){
  m = size;
  n = size;
  elems = m*n;
  p = new double [m*n];
  for (int i=0; i< m*n; i++){
    *(p+i) = 0.0;
  }
}

//basic output
int ClassMatrix::Rows(){return m;}
int ClassMatrix::Columns(){return n;}
int ClassMatrix::Elems(){return elems;}
double* ClassMatrix::Begin(){return p;}

//operators
double& ClassMatrix::operator()(int i, int j){
  return *(p+m*j+i);
}

//printing
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
}

void PrintMatrix(ClassMatrix& A){
  for(int i=0; i < A.Rows(); i++){
    for(int j=0; j< A.Columns(); j++){
      std::cout << A(i,j) << " ";
    }
    std::cout << std::endl;
  }
}

//creation of different types matrices
void ClassMatrix::MakeIdentity(){
  if(m != n){
    std::cout << "Not a Sqaure Matrix "; throw;
  }
  for(int i=0; i< elems; i++) *(p+i) = 0.0;
  for(int i=0; i< m; i++){
    *(p+i*m+i) = 1.0;
  }
}

void ClassMatrix::MakeNull(){
  for(int i=0; i< elems; i++) *(p+i) = 0.0;
}


//Matrix Checks
int IsNull(ClassMatrix& A){
  for(int i=0; i<A.Elems(); i++){
    if(*(A.Begin()+i) != 0.0) return 0;
  }
  return 1;
}
