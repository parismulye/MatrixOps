CXXFLAGS =   -O3 -std=c++11

all: test

# this are the rule to compile the library file that Igave you (mmio.cc and dmatrix_denseCM.cc)
ClassMatrix.o : Makefile ClassMatrix.cc ClassMatrix.h
	$(CXX) $(CXXFLAGS) -c ClassMatrix.cc

test.o : Makefile test.cc ClassMatrix.h
	$(CXX) $(CXXFLAGS) -c test.cc

test :  Makefile ClassMatrix.o test.o
	$(CXX) $(CXXFLAGS) ClassMatrix.o test.o -o test


clean :
	rm -rf *.o *~
	rm test
