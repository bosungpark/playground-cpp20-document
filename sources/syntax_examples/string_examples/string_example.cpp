#include <string>
#include <iostream>

using namespace std;


int main() {
    // 6 way of making string
    std::string empty;  // An empty string
    std::cout << empty << std::endl; 
    std::cout << empty.length() << std::endl; 

    std::string hello_world {"hi there!"};  // hi there!
    std::cout << hello_world << std::endl; 
    std::cout << hello_world.length() << std::endl; 
    
    std::string hi {"hi there!", 2};
    std::cout << hi << std::endl; 
    std::cout << hi.length() << std::endl; 

    std::string sleeping(6, 'z');  // zzzzzz
    std::cout << sleeping << std::endl; 
    std::cout << sleeping.length() << std::endl; 

    std::string sentence {sleeping};  // zzzzzz
    std::cout << sentence << std::endl; 
    std::cout << sentence.length() << std::endl; 

    std::string there {hello_world, 3, 8};  // there!
    std::cout << there << std::endl; 
    std::cout << there.length() << std::endl; 

    // operation
    std::string word {"empty value, please assign value to me!"};
    // 이런 경우에 포인터만 바뀌는지?
    word = there;
    std::cout << "this is operation of word: " + word << std::endl; 

}
