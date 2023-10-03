#include <iostream>
#include <typeinfo>   // For the std::type_info class

using namespace std;

class Box
{
public:
    Box() = default;

    Box(double length, double width = 1.0, double height = 1.0)
    {
        m_length = length;
        m_width = width;
        m_height = height;
    };

    virtual double dynamicVolume()
    {
        std::cout << "Box usable volume is " << m_length * m_width * m_height << std::endl;
        return m_length * m_width * m_height;
    }

    virtual double staticVolume() final
    {
        std::cout << "Box usable volume is " << m_length * m_width * m_height << std::endl;
        return m_length * m_width * m_height;
    }

    double m_length{1.0};
    double m_width{1.0};
    double m_height{1.0};
};

class ToughPack : public Box
{
public:
    ToughPack() = default;

    ToughPack(double length, double width = 1.0, double height = 1.0)
    {
        m_length = length;
        m_width = width;
        m_height = height;
    };

    double dynamicVolume() override
    {
        std::cout << "ToughPack usable volume is " << 0.85 * m_length * m_width * m_height << std::endl;
        return 0.85 * m_length * m_width * m_height;
    }
};

class Carton : public Box
{
public:
    Carton(double length, double width = 1.0, double height = 1.0)
    {
        m_length = length;
        m_width = width;
        m_height = height;
    };

    // 'final' 함수 "Box::staticVolume" (선언됨 줄 23)을(를) 재정의할 수 없습니다.
    //  double staticVolume() {};
};

// Define trivial non-polymorphic base and derived classes:
class NonPolyBase {};
class NonPolyDerived : public NonPolyBase {};


Box& getSomeBox();              // Function returning a reference to a polymorphic type
NonPolyBase& getSomeNonPoly();  // Function returning a reference to a non-polymorphic type


int main()
{
    // Carton carton{10.0, 10.0, 5.0};
    // Box *box{&carton};
    // carton.dynamicVolume();
    // box->dynamicVolume(); // Box usable volume is 500

    // ToughPack hardcase{10.0, 10.0, 5.0};
    // hardcase.dynamicVolume();
    // box = &hardcase;
    // box->dynamicVolume(); // ToughPack usable volume is 425

    // Box* converedBox {&hardcase};
    // converedBox->dynamicVolume();

     // Part 1: typeid() on types and == operator
    std::cout << "Type double has name " << typeid(double).name() << std::endl;
    std::cout << "1 is " << (typeid(1) == typeid(int)? "an int" : "no int") << std::endl;
    // Part 2: typeid() on polymorphic references
    Carton carton{ 1, 2, 3};
    Box& boxReference = carton;
    std::cout << "Type of carton is "       << typeid(carton).name()       << std::endl;
    std::cout << "Type of boxReference is " << typeid(boxReference).name() << std::endl;
    std::cout << "These are " << (typeid(carton) == typeid(boxReference)? "" : "not ")
                << "equal" << std::endl;
    // Part 3: typeid() on polymorphic pointers
    Box* boxPointer = &carton;
    std::cout << "Type of &carton is "     << typeid(&carton).name()     << std::endl;
    std::cout << "Type of boxPointer is "  << typeid(boxPointer).name()  << std::endl;
    std::cout << "Type of *boxPointer is " << typeid(*boxPointer).name() << std::endl;
    // Part 4: typeid() with non-polymorphic classes
    NonPolyDerived derived;
    NonPolyBase& baseRef = derived;
    std::cout << "Type of baseRef is " << typeid(baseRef).name() << std::endl;
    // Part 5: typeid() on expressions
    const auto& type_info1 = typeid(getSomeBox());       // function call evaluated
    const auto& type_info2 = typeid(getSomeNonPoly());   // function call not evaluated
    std::cout << "Type of getSomeBox() is " << type_info1.name() << std::endl;
    std::cout << "Type of getSomeNonPoly() is "    << type_info2.name() << std::endl;
}

Box& getSomeBox()
{
  std::cout << "getSomeBox() called..." << std::endl;
  static Carton carton{ 2, 3, 5};
  return carton;
}
NonPolyBase& getSomeNonPoly()
{
  std::cout << "getSomeNonPoly() called..." << std::endl;
  static NonPolyDerived derived;
  return derived;
}