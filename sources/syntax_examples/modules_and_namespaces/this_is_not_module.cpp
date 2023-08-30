// // export를 뻬니까 되네,,,,,
// https://kukuta.tistory.com/389 -> include와 import는 다르다,,, 이건 모듈이 아니야,,,,,,

// module mymath;

auto square(const auto& x) { return x * x; };  // An abbreviated function template

const double lambda{ 1.303577269034296391257 };   // Conway’s constant

// without 'export' Module-local function (not exported)
bool isOdd(int x) { return x % 2 != 0; };

auto getOddity(int x) { return isOdd(x) ? 1 : 0; };

// // 컴파일
// // clang++ -std=c++20 -c math.cpp
