// exercise 8-2. 

// Write a function that reads a string or array of characters as input and reverses it. 
// Justify your choice of parameter type? 
// provide a main() function to test your function that prompts for a string of characters, 
// reverses them, and outputs the reversed string.

#include <string>
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


std::string get_reversed_string(std::vector<char>  characters) {
    std::string return_string = "";

    for (int i = characters.size() -1; i>=0; i--) {
        return_string += characters[i];
    }
    return return_string;
};

std::string get_reversed_string(std::string input_string) {
    std::reverse(input_string.begin(), input_string.end());
    return input_string;
};

int main() {
    std::vector<char> s1 = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    std::cout << "Reversed: " << get_reversed_string(s1) << std::endl;

    std::string s2 = "begining c++";
    std::cout << "Reversed: " << get_reversed_string(s2) << std::endl;

//     Reversed: dlrow olleh
//     Reversed: ++c gninigeb
}