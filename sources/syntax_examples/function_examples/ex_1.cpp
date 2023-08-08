// // exercise 8-1. 

// // Write a function, validate_input(), that accepts two integer arguments 
// // that represent the upper and lower limits for an integer that is to be entered. 

// // it should accept a third argument that is a string describing the input, 
// // with the string being used in the prompt for input to be entered. 

// // the function should prompt for input of the value 
// // within the range specified by the first two arguments and include the string identifying the type of value to be entered. 

// // the function should check the input and continue to prompt for input until the value entered by the user is valid. 
// // use the validate_input() function in a program that obtains a user’s date of birth and outputs it in the form of this example:

// // You were born on the 21st of November, 2012

// // the program should be implemented so that separate functions, month(), year(), and day(), 
// // manage the input of the corresponding numerical values. 
// // Don’t forget leap years—february 29, 2017, is not allowed!

// #include <string>
// #include <iostream>

// bool year(int y) {
//     if (0<=y){
//         return true;
//     }
//     return false;

// }

// bool day(int d) {
//     if (d % 2 and 1<=d and d<=31){
//         return true;
//     }

//     if (!d % 2 and 1<=d and d<=30){
//         return true;
//     }

//     return false;

// }

// bool month(std::string m) {
//     if (1<=m and m<=12){
//         return true;
//     }
//     return false;

// }

// bool validate_input(int a, int b, std::string c){
//     if (month(a) and year(b) and day(c)){
//         return true;
//     }
//     return false;
// }

// using namespace std;



// int main() {


//     std::cout << "" << std::endl;
// }