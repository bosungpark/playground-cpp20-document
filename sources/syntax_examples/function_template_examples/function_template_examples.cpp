#include <string>
#include <iostream>

template<typename T> T larger(T a, T b);
template <typename T1, typename T2> double larger(T1 a, T2 b);
template <typename T1, typename T2, typename T3> T3 larger(int a, double b);

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

    // check if return type is converted
    std::cout << "Larger of 1.5 and 2 is " << larger<int>(1.5, 2.5) << std::endl;  // 2.5
    std::cout << "Larger of 1.5 and 2 is " << larger<int, double>(1.5, 2.5) << std::endl;  // 2.5
    std::cout << "Larger of 1.5 and 2 is " << larger<int, double, int>(1.5, 2.5) << std::endl;  // 2

}

template <typename T> T larger(T a, T b) {
    return a > b ? a : b;
}

template <typename T1, typename T2>  double larger(T1 a, T2 b) {
    return a > b ? a : b;
}

template <typename T1, typename T2, typename T3> T3 larger(int a, double b) {
    return a > b ? a : b;
}


