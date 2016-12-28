class ClassMatrix{
public:
  //***constructor

  //rectangular matrix, initialize to 0.0, column storage
  ClassMatrix(int rows, int cols);
  //sqaure matrix, initialize to 0.0, coulmn storage
  ClassMatrix(int size);

  //***basic output

  int Rows();
  int Columns();
  //return no of elems in matrix
  int Elems();
  //return pointer to the first elem of the matrix (0,0)
  double* Begin();

  //***operators
  double& operator()(int i, int j);

  //***printing

  //print 1D array resembles the storage in memory
  void PrintMatrix1D();
  //prints 2D array (for visual purpose)
  void PrintMatrix();

  //***Creation of different types of matrices
  void MakeIdentity();
  void MakeNull();




  //***variables
private:
  int m; //rows
  int n; //cols
  int elems; //total no of elems
  double *p; //pointer to the beginning of 1D-array
};


  //***printing
  void PrintMatrix(ClassMatrix& A);

  //***matrix Checks

  //return 1 if true, 0 if false
  int IsNull(ClassMatrix& A);
