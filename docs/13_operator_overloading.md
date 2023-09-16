학습목표
=
- What operator overloading is
- Which operators you can implement for your own data types
- How to implement member functions that overload operators
- How and when to implement operator functions as ordinary functions instead
- How to implement custom comparison and arithmetic operators for a class
- How the spaceship operator greatly simplifies defining comparison operators
- How to have the compiler generate comparison operators for you
- How overloading the << operator allows objects of your own type to be streamed out to, for instance, std::cout
- How to overload unary operators, including the increment and decrement operators
- How to overload the array subscript operator (informally known as the square
brackets operator, []) if your class represents a collection of values
- How to define type conversions as operator functions
- What copy assignment is and how to implement your own assignment operator

Operator Overloading
=
연산자 오버로딩은 대부분의 연산자에서 유연하게 지원하고 있지만 몇몇 제약도 있다.

1. 새로운 연산자를 만들면 안된다.
2. 피연산자의 갯수를 바꾸거나, 평가받는 순서를 바꾸어서는 안된다.
3. 빌트-인 오퍼레이터를 바꾸어서는 안된다. 바꾸는 대상은 직접 만든 타입(클래스)여야 한다.

<=>를 오버라이드하면 <, >, <=, >= 역시 오버라이드 된다.  ==를 오버라이드 하면 != 역시 오버라이드 된다.

