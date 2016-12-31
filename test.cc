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

std::vector<double> v = GetRow(A,2);
std::vector<double> w = GetRow(A,3);

PrintVector(v);
PrintVector(w);

ClassMatrix C = TensorProduct(v,w);
PrintMatrix(C);

return 0;
}
