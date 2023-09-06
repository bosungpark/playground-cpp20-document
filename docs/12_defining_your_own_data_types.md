학습목표
=
- What the basic principles in objected-oriented programming are
- How you define a new data type as a class and how you can create and use objects of a class type
- What the different building blocks of a class are—member variables, member functions, class constructors, and destructors—and how to define them
- What a default constructor is and how you can supply your own version
- What a copy constructor is and how to create a custom implementation
- The difference between private and public members
- What the pointer this is and how and when you use it
- What a friend function is and what privileges a friend class has
- What const functions in a class are and how they are used
- What a class destructor is and when you should define it
- What a nested class is and how to use it

Classes and Object-Oriented Programming
=
procedural programming:  fundamental data type을 통해 문제를 해결하는 방식. 실제 세상의 문제를 해결하기는 어렵다.

OOP -> 대안

Encapsulation
=
객체 안의 데이터와 함수들을 일컬어 캡슐화라고 한다.
객체의 데이터는 일에서 필요한 만큼의 데이터를 포함한다.

Data Hiding
=
객체변경의 책임은 각 객체가 가진 인터페이스에 따른다. 

신뢰성 있고, 변경에 자유로우며, 디버깅이 편하다는 장점.

Inheritance
=
...

Polymorphism
=
C++ 의 다형성은 항상 포인터 혹은 레퍼런스를 이용해 다른 효과를 다른 시간 대에 발생시키는 것을 가능하게 한다. 물론 이런 종류의 작업은 같은 공통 타입을 가지고 있는 메서드 간에만 가능하다. 공통 타입의 조상을 가지고 있다먼 타입을 추론할 때 공통타입을 포인터로 가리킨다. 이로 인해 다형성이 가능해진다. 조상 타입의 메서드가 어떤 객체를 가리키는지에 따라 메서드의 동작이 달라진다.

컴파일 시점이 아닌 런타임에 포인터가 가리키고 있는 메서드의 동작에 따라 다른 동작이 발생한다.

Terminology
=
- 클래스는 유저가 정의한 데이터 타입이다.
- 클래스 안에 정의된 변수, 함수 들은 멤버변수, 메서드 등으로 불린다.
- 클래스의 변수는 때때로 객체(인스턴스)를 저장한다.
- OOP는 클래스라는 자신만의 데이터 타입을 정의하는 프로그래밍 스타일이다.

Constructors
=
아무 인자도 지정하지 않으면 기본 기본 생성자가 객체를 생성

static
=
Although static member variables of a class are accessible in a member function of an object, they aren’t part of the object and don’t contribute to its size.

Friends
=
firend 클래스는 friend로 선언된 다른 클래스의 private 및 protected 멤버에 접근할 수 있다.

즉 함수 혹은 클래스를 특정 클래스의 친구로 설정하여 특정 클래스의 값에 접근할 수 있게 해준다.

A에 B라는 클래스를 친구로 추가한다면 B는 A의 모든 값에 접근할 수 있다.
하지만 A가 B의 값에 접근하는 것은 불가능하다.
마찬가지로 A -> B -> C와 같이 친구관계를 타고 접근하는 것도 불가능하다.

The Size of a Class Object
=

You obtain the size of a class object by using the sizeof operator in the same way you have previously with fundamental data types. You can apply the operator to a particular object or to the class type. 

The size of a class object is generally the sum of the sizes of the member variables of the class, although it may turn out to be greater than this. This isn’t something that should bother you, but it’s nice to know why.

On most computers, for performance reasons, two-byte variables must be placed at an address that
is a multiple of two, four-byte variables must be placed at an address that is a multiple of four, and so on. This is called boundary alignment.

A consequence of this is that sometimes the compiler must leave gaps between the memory for one value and the next. If, on such a machine, you have three variables that occupy two bytes, followed by a variable that requires four bytes, a gap of two bytes may be left in order to place the fourth variable on the correct boundary. In this case, the total space required by all four is greater than the sum of the individual sizes.

Destructors
=
일반적으로 손 댈 필요 X

Nested Classes
=
말 그대로 중첩 클래스


