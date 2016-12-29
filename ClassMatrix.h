class ClassMatrix{
public:

  //rectangular matrix, initialize to 0.0, column storage
  ClassMatrix(int rows, int cols);
  //sqaure matrix, initialize to 0.0, coulmn storage
  ClassMatrix(int size);

  //no of rows of matrix
  int Rows() const;
  //no of columns of matrix
  int Columns() const;
  //no of elems in matrix
  int Elems() const;
  //pointer to the first elem of the matrix (0,0)
  double* Begin() const;

  //print 1D array resembles the storage in memory
  void PrintMatrix1D() const;
  //prints 2D array (for visual purpose)
  void PrintMatrix() const;

  //index operator A(i,j)
  double& operator()(int i, int j);
  //Assignment of two Matrices A = B
  ClassMatrix operator=(const ClassMatrix& A);

private:
  int m; //rows
  int n; //cols
  int elems; //total no of elems
  double *p; //pointer to the beginning of 1D-array
};


  //print 2D array (for visual purpose)
  void PrintMatrix(const ClassMatrix& A);
