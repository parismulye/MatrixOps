#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include "BasicMatrixOps.h"
#include "Print.h"
#include "MatrixOps.h"
#include<iostream>
#include<vector>

int main(){

ClassMatrix A(6,4);
MakeRandomInt(A,0,10);
Print(A);

ClassMatrix B(4,2);
MakeRandomInt(B,0,3);
Print(B);

ClassMatrix C = A*B;
Print(C);

return 0;
}
