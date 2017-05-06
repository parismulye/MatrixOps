#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include<iostream>
#include<iomanip>
#include<vector>

void PrintMatStorage(const ClassMatrix& A) {
  for(int i=0; i<A.Elems(); i++){
    std::cout << *(A.Begin()+i) << " ";
  }
  std::cout << std::endl;
}

void Print(const ClassMatrix& A) {
  int m = A.Rows();
  int n = A.Columns();
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      std::cout << std::scientific << std::setw(6) << std::setprecision(2) <<  *(A.Begin()+m*j+i) << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

void PrintDiagonal(const ClassMatrix& A){
  if(IsNotSquare(A)) {std::cout << "Not a Square Matrix"; throw;}
  for(int i=0; i<A.Rows(); i++){
    std::cout << *(A.Begin()+i*A.Rows()+i) << " ";
  }
  std::cout << std::endl;
}

void PrintRow(const ClassMatrix& A, const int val){
  for(int i=val; i<A.Elems(); i=i+A.Rows()){
    std::cout << *(A.Begin()+i) << " ";
  }
  std::cout << std::endl;
}

void PrintColumn(const ClassMatrix& A, const int val){
  for(int i=0; i<A.Rows(); i++){
    std::cout << *(A.Begin()+val*A.Rows()+i) << " ";
  }
  std::cout << std::endl;
}

void Print(const std::vector<double> vec){
  for(int i=0; i< vec.size(); i++){
    std::cout << std::scientific << std::setw(6) << std::setprecision(2) << vec[i] << "\n";
  }
  std::cout << std::endl;
}
