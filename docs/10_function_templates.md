학습목표
=

1. How to define parameterized function templates that generate a family of related functions
2. That parameters to function templates are mostly, but not always, types
3. That template arguments are mostly deduced by the compiler and how to specify them explicitly when necessary
4. How to specialize and overload function templates if the generic function definition provided by the template isn’t suited for certain types
5. Why return type deduction is really powerful in combination with templates
6. How the abbreviated function template syntax makes it even easier to quickly write a basic function template

Function Templates
=
템플릿 자체는 함수가 아니다. 템플릿은 함수를 작성하기 위한 청사진이다.

Function Templates and Overloading
=
같은 이름을 가지는 함수를 정의함으로써 오버라이드가 일어나고 오버로딩을 하게 해준다.

Function Templates with Multiple Parameters
=
탬플릿 아규먼트의 타입이 서로 다르다면, 리턴 타입을 정의하는 과정에서 혼돈이 생길 수 있다.

decltype(auto)
=
