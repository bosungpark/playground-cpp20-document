# include <iostream>
# include "math.h"

using namespace std;


int main() {
  // using enum Oddity;

  std::cout << "Lambda squared: " << square(lambda) << std::endl;

  int number;
  number = 1;

  switch (getOddity(number)) {

      case 1:
        std::cout << "odd";
        break;
      case 0:
        std::cout << "even" << std::endl; 
        break; 
  }

  // if (isOdd(number))            
  /* Error: identifier not found: 'isOdd' */
  //   std::cout << "Well done!" << std::endl;
}
