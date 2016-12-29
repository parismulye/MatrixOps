#include "ClassMatrix.h"

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
  }}


int ClassMatrix::Rows() const {return m;}
int ClassMatrix::Columns() const {return n;}
int ClassMatrix::Elems() const {return elems;}
double* ClassMatrix::Begin() const {return p;}


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
