#include "ClassMatrix.h"
#include<iostream>

int main(){

ClassMatrix P(2,3);

for(int i=0; i<2; i++){
  for(int j=0; j<3; j++){
    P(i,j) = (i+1)*(j+1);
  }
}


P.PrintMatrix();
P.PrintMatrix1D();
PrintMatrix(P);

return 0;
}
