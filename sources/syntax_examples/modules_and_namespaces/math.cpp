#include "math.h"

double square(double x) { return x * x; };  // An abbreviated function template

// const double lambda{ 1.303577269034296391257 };   // Conway’s constant

// without 'export' Module-local function (not exported)
bool isOdd(int x) { return x % 2 != 0; };

int getOddity(int x) { return isOdd(x) ? 1 : 0; };


// // 컴파일
// // clang++ -std=c++20 -c math.cpp
// g++ -std=c++20 -fmodules-ts math.cpp modules_and_namespaces.cpp