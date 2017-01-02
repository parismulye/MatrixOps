#include "ClassMatrix.h"
#include "MatrixChecks.h"
#include "MatrixConvert.h"
#include "BasicMatrixOps.h"
#include "Print.h"
#include "MatrixOps.h"
#include<iostream>
#include<vector>

int main(){

std::vector<double> v(4,3);
std::vector<double> m = v/4;

Print(v);

Print(m);

return 0;
}
