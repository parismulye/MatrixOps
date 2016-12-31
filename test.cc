#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include "BasicMatrixOps.h"
#include "Print.h"
#include "MatrixOps.h"
#include<iostream>

int main(){

ClassMatrix A(4,4);

MakeRandomInt(A,0,10);

PrintMatrix(A);

ClassMatrix D = Transpose(A);

PrintMatrix(D);

// MakeUpperTriangular(A);






MakeLowerTriangular(A);


PrintMatrix(A);

// std::cout << IsDiagonal(A);

std::cout << std::endl;


// PrintMatrix(A);

return 0;
}
