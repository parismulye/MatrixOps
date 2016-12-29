#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include "BasicMatrixOps.h"
#include "Print.h"
#include "MatrixOps.h"
#include<iostream>

int main(){

ClassMatrix A(4,5);

MakeRandomInt(A,0,10);

PrintMatrix(A);

A(1,2) = 5;

PrintMatrix(A);

ClassMatrix B(4,5);

MakeRandomInt(B,0,4);

PrintMatrix(B);

ClassMatrix C = A+B;

PrintMatrix(C);

return 0;
}
