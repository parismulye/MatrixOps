#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include<iostream>

int main(){

ClassMatrix A(4,4);

MakeRandomInt(A,0,10);

PrintMatrix(A);

std::cout << std::endl;

return 0;
}
