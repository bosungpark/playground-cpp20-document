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

    word.append("and append some words.");
    std::cout << "this is operation of word: " + word << std::endl; 

    // for loop
    for (size_t i {}; i < there.length(); ++i)
        std::cout << there[i] << std::endl; 

    // fucked complie
    std::string foo {"jiji"};
    foo += 69;
    std::cout << foo << std::endl;  // jijiE

    // Specifying ch as a reference type allows the character in the string to be modified within the loop. 
    for (char& ch : there)
        ch = static_cast<char>(std::toupper(ch));
    std::cout << there << std::endl;  // THERE!

    // substr
    std::cout << there.substr(0,10000) << std::endl;  // THERE!
    std::cout << there.substr(0) << std::endl;  // THERE!
    std::cout << there.substr(0,5) << std::endl;  // THERE

    // Comparing Strings
    std::string word1 {"age"};
    std::string word2 {"beauty"};

    std::cout << word1 << (word1 < word1 ? " comes " : " does not come ")
          << "before " << word2 << '.' << std::endl;

}
