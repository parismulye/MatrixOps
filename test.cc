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

ClassMatrix B = GetSubMatrix(A,2,3,0,0);

PrintMatrix(B);

return 0;
}
