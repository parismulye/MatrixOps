# MatrixOps  
This is a Matrix class and other supplementary functions written in C++. This is intended to be used as a base for different numerical methods and their implementation.

## Getting Started

ClassMatrix.cc    ->  Definition of Matrix Class  
MatrixConvert.cc  ->  Convert the matrix into something. Useful in generation of different types of matrices (identity, random)  
MatrixChecks.cc   ->  Check if the matrix is something. (symmetric, diagonal, null)
MatrixOps.cc      ->  Operations on matrix, vectors. (dot product, addition, subtraction)

## Running the tests

The file "test.cc" can be used for testing. No automated testing as of now. It will be implemented soon.

```
ClassMatrix A(2,3);
MakeRandomInt(A,0,3);
PrintMatrix(A);
ClassMatrix B(2,3);
MakeRandomInt(B,0,10);
PrintMatrix(B);
ClassMatrix C = DotProduct(A,B);
PrintMatrix(C);
```
