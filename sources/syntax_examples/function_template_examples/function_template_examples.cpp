#include <string>
#include <iostream>

template<typename T> T larger(T a, T b);

int main() {
    // double
    std::cout << larger(1.5, 2.5) << std::endl;

    // int
    std::cout << larger(3, 4) << std::endl;

    // string
    std::string a_string {"A"}, z_string {"Z"};
    std::cout << larger(a_string, z_string) << std::endl;

    // explicit template arguments -> 2
    std::cout << larger<int>(1.5, 2.5) << std::endl;
}

template <typename T> T larger(T a, T b) {
    return a > b ? a : b;
}
