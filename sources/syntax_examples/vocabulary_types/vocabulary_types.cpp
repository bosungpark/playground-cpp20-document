#include <optional>
#include <string>
#include <iostream>


std::optional<std::string> return_nullopt(std::optional<std::string> x = std::nullopt){
    return x;
}


int main() {
    std::optional<std::string> a = {return_nullopt()};

    if (a) {
        std::cout << *a << std::endl; 
    }


    std::string str = {"finally here comes b"};
    std::optional<std::string> b = {return_nullopt(str)};

    if (b) {
        std::cout << *b << std::endl; 
    }
}

// span<>
// string_view -> 재미있는 타입, 카피 X