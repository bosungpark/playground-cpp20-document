Inheritance
=

학습목표
=
- How inheritance fits into the idea of object-oriented programming
- What base classes and derived classes are and how they’re related
- How to define a new class in terms of an existing class
- The use of the protected keyword as an access specification for class members
- How constructors behave in a derived class and what happens when they’re called
- What happens with destructors in a class hierarchy
- The use of using declarations within a class definition
- What multiple inheritance is
- How to convert between types in a class hierarchy

Classes and Object-Oriented Programming
=
**Hierarchies**

**Inheritance in Classes**

**Inheritance vs. Aggregation and Composition**

Aggregation: 큰 객체와 작은 객체가 연관관계(소유)를 가지지만 동일한 생명주기를 가지지는 않는 경우, 부서와 직원의 관계.

Composition: 큰 객체와 작은 객체가 강한 연관관계(소유)를 가지고 같은 생명주기를 가지는 경우, 집과 방의 관계.

**Protected Members of a Class**

The private members of a base class being only accessible to member functions of the base class can be.

Members of a base class that are declared as protected are freely accessible in member functions of a derived class, whereas the private members of the base class are not.

**The Access Level of Inherited Class Members**
public, protected, privated 이렇게 3가지 접근 레벨을 가진다. 디폴트는 private이다.

Constructors in a Derived Class
=
부모에서 자식 클래스 순으로 평가되고, 따라서 생성자의 호출 순서도 동일하다.
또 자식 클래스의 생성자의  initialization list 에서 부모 클래스의 멤버 변수를 초기화 할 수도 없다. 
(You can never initialize member variables of a base class in the initialization list for a derived class’ constructor. Not even if those members are protected or public. )

The Copy Constructor in a Derived Class
=
카피 생성자를 만들 때 부모의 카피 생성자 역시 명시하지 않는다면 올바른 카피가 일어나지 않는다. (자식만 카피)

