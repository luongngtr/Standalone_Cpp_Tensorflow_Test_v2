#include "Myclass.h"

int main()
{
	Myclass x;
	x.myfunc();
	return 0;
}

// Run test.cpp
// $ g++ -std=c++11 -Wl,-rpath='$ORIGIN/lib' -Llib test.cpp -lmyclass -ltensorflow_cc -ltensorflow_framework -o exec_test
