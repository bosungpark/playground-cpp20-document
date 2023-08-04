// exercise 8-3. 

// Write a program that accepts from two to four command-line arguments. 
// if it is called with less than two or more than four arguments, 
// output a message telling the user what they should do and then exit. 
// if the number of arguments is correct, output them, each on a separate line.

#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    // chmod +x ex_3.cpp
    // ./ex_3 command-line arguments 입력

    if (2<=argc and argc<=4){
        // ./ex_3 1 2 3 1
        // 
        // Input has less than two or more than four arguments.

        for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] <<  std::endl;
    }
        
    } else {
        // ./ex_3 1 2 3 
        // 
        // 1
        // 2
        // 3

        std::cout << "Input has less than two or more than four arguments." <<  std::endl;
    }
    
    return 0;
}