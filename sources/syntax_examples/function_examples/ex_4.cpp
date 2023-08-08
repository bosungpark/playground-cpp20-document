// exercise 8-4. 

// Create a function, plus(), that adds two values and returns their sum. 
// provide overloaded versions to work with int, double, and strings, and test that they work with the following calls:

// Can you explain why the following doesn’t work?
//        const auto d {plus(3, 4.2)};

// -> two type is different

#include <string>
#include <iostream>

using namespace std;



int main() {
    // 근데,,이거 왜  main 밖으로 내보내면 안되지,,,,,,
    const int plus(int a, int b);
    const double plus(double a, double b);
    const std::string plus(std::string a, std::string b);

    const int n = plus(3, 4);
    const double d {plus(3.2, 4.2)};
    const string s {plus("he", "llo")};
    const string s1 {"aaa"};
    const string s2 {"bbb"};
    const string s3 {plus(s1, s2)};

    std::cout << "n: " << n << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "s: " << s << std::endl;
    std::cout << "s3: " << s3 << std::endl;
}


const int plus(int a, int b) {   
    int n =  a + b;
    return n;
};

const double plus(double a, double b) {   
    return a + b;
};

const std::string plus(std::string a, std::string b) {   
    return a + b;
};