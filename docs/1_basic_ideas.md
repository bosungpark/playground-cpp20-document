Modern C++
=
2011년 ISO에서 표준을 제시하기 이전까지 거의 변하지 않은채 유지되어 왔다.
c++20은 c++11만큼이나 큰 변화가 일어난 버전이다.

Namespaces
=
규모있는 프로젝트는 많은 프로그래머들이 동시에 작업을 한다. 이건 네임에 대한 문제를 발생시킬 우려가 있다. 같은 이름을 다른 사람들이 동시에 이용한다면, 혼란 혹은 장애를 낳을 수 있다. 네임스페이스는 이런 문제를 해결하기 위해 고안되었다.

네임스페이스는 네임스페이스 안에 작성된 모든 이름에 붙는 일종의 prefix이다.

*example*
std::cout // :: is the scope resolution operator

Templates
=
You sometimes need several similar classes or functions in a program where the code differs only in the kind of data that is processed. A template is a recipe that you create to be used by the compiler to generate code automatically for a function or class customized for a particular type or types. The compiler uses a function template to generate one or more of a family of functions. It uses a class template to generate classes. (그동안 다른 언어에서는 접하지 못했던 개념이라 메모.)

Creating an Executable
=
1. preprocessor processes all preprocessing directives. (필요한 지시어를 만들고)
2. your compiler processes each source file to produce an object file that contains the machine code equivalent of the preprocessed code. (컴파일러가 기계어로 바꾸고)
3. linker combines the binary files for a program into a file containing the complete executable program. (링커가 앞선 과정에서 기계어로 변한 여러 바이너리 파일들 그리고 라이브러리등을 연결한다.)

<img src="../.images/컴파일과%20링커.png" />

Representing Numbers
=
- Binary Numbers
- Hexadecimal Numbers
- Negative Binary Numbers
- Octal Values
- Big-Endian and Little-Endian Systems
- Floating-Point Numbers
  
Representing Characters
=
- ASCII(American Standard Code for Information Interchange) Codes
- UCS and Unicode

