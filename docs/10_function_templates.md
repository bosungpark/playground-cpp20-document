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
템플릿 자체는 함수가 아니다. 템플릿은 함수를 작성하기 위한 도구이다.
오버로드를 컴파일러가 하기위한 도구라고 생각할 수 있다.

함수를 만드는 도구는 무엇으로 이뤄져서 만들지는 정하지는 않는다.
그래서 함수 템플릿이 만들어 내는 함수의 자료형도 결정되어 있지 않는다.

Function Templates and Overloading
=
같은 이름을 가지는 함수를 정의함으로써 오버라이드가 일어나고 오버로딩을 하게 해준다.

Function Templates with Multiple Parameters
=
탬플릿 아규먼트의 타입이 서로 다르다면, 리턴 타입을 정의하는 과정에서 혼돈이 생길 수 있다.

decltype(auto)
=
 decltype 타입 지정자는 명시된 대상의 타입을 산출합니다. 

Default Values for Template Parameters
=

template <typename ReturnType=double, typename T1, typename T2>
ReturnType larger(const T1&, const T2&);

-> 이와같이 정의시에 입력값이 int형이더라도, 반환 기본값이 double이므로 해당 형태로 반환할 수 있다. (앞서 선언한 타입을 그대로 정의해도 괜찮다.)

Non-Type Template Parameters
=
템플릿 매개변수는 컴파일 타임에 결정되어야 한다.

Non-type 파라미터를 사용할 경우 헤더에서 함수를 정의한다.


