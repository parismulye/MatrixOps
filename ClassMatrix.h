class ClassMatrix{
public:
  //constructor
  ClassMatrix(int rows, int cols);
  ClassMatrix(int size);

  //basic output
  int GetRows();
  int GetColumns();
  int Elems();
  double* Begin();

  //operators
  double& operator()(int i, int j);

  //printing
  void PrintMatrix1D();
  void PrintMatrix();


private:
  int m; //rows
  int n; //cols
  int elems; //total size
  double *p; //pointer to the beginning of 1D-array
};


  void PrintMatrix(ClassMatrix& A);
