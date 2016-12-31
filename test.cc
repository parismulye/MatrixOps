#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include "BasicMatrixOps.h"
#include "Print.h"
#include "MatrixOps.h"
#include<iostream>

#include<vector>

int main(){

ClassMatrix A(4,4);
MakeRandomInt(A,0,10);
PrintMatrix(A);

ClassMatrix B(4,4);
MakeRandomInt(B,0,10);
PrintMatrix(B);

ClassMatrix C = DotProduct(A,B);
PrintMatrix(C);

std::cout << "lol\n";

std::vector<double> v = GetRow(A,2);
std::vector<double> w = GetRow(A,3);

std::vector<double> x = DotProduct(v,w);

PrintVector(x);

std::cout << "Hi\n";

std::cout << Sum(C) << std::endl;

std::cout << ScalarProduct(A,B);

return 0;
}
