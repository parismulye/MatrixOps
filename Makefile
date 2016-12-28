CXXFLAGS =   -O3 -std=c++11

all: test

# this are the rule to compile the library file that Igave you (mmio.cc and dmatrix_denseCM.cc)
ClassMatrix.o : Makefile ClassMatrix.cc ClassMatrix.h
	$(CXX) $(CXXFLAGS) -c ClassMatrix.cc

MatrixChecks.o : Makefile MatrixChecks.cc MatrixChecks.h ClassMatrix.cc ClassMatrix.h
	$(CXX) $(CXXFLAGS) -c MatrixChecks.cc

MatrixConvert.o : Makefile MatrixConvert.cc MatrixConvert.h ClassMatrix.cc ClassMatrix.h
	$(CXX) $(CXXFLAGS) -c MatrixConvert.cc

test.o : Makefile test.cc ClassMatrix.h MatrixChecks.h MatrixConvert.h
	$(CXX) $(CXXFLAGS) -c test.cc

test :  Makefile ClassMatrix.o MatrixChecks.o MatrixConvert.o test.o
	$(CXX) $(CXXFLAGS) ClassMatrix.o MatrixChecks.o MatrixConvert.o test.o -o test


clean :
	rm -rf *.o *~
	rm test
