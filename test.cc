#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include "BasicMatrixOps.h"
#include "Print.h"
#include "MatrixOps.h"
#include<iostream>

int main(){

ClassMatrix A(4,2);

MakeRandomInt(A,0,10);

PrintMatrix(A);

ClassMatrix D = Transpose(A);

PrintMatrix(D);


return 0;
}
