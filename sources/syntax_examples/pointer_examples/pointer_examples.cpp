#include <iostream>

using namespace std;

int main() {
    long* pnumber;  // 0x102a4fd48
    int* pint;  // 0x60690001043ceb3c


    // 주소 간의 사이즈 비교: the size of pointer variables will be either 4 bytes or 8 bytes 
    std::cout << "주소 간의 사이즈 비교" << std::endl; 
    std::cout << (sizeof(pnumber) == sizeof(pint))<< std::endl;  // 1   -> 타입과 상관 없이 포인터의 사이즈(주소의 사이즈)는 모두 같다.
    std::cout << "" << std::endl; 

    long number=12345L;
    pnumber = &number;  // 0x16f4bb240
  
    // 포인터는 주소값을 가진다.
    std::cout << "포인터의 주소값 비교" << std::endl; 
    std::cout << (*pnumber == 12345L) << std::endl; // 1
    std::cout << "" << std::endl; 


    // initialize pointer using new
    double* pvalue = new double (3.14);

    std::cout << *pvalue << std::endl;  // 3.14

    // release pointer using delete
    delete pvalue;
    std::cout << *pvalue << std::endl;  // 3.14 -> dangling pointer: release를 하더라도 이전의 주소값을 가지고 있는다.
    
    pvalue = nullptr;
    std::cout << *pvalue << std::endl;  // Segmentation fault: 11

    return 0;
}