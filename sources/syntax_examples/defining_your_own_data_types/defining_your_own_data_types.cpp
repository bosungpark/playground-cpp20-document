#include <iostream>

using namespace std;

class Box
    {

    public:

        // Constructor
        Box() = default;
        Box(double length, double width = 1.0, double height = 1.0)
        {
            std::cout << "Box constructor called."  << std::endl;
            m_length = length;
            m_width = width;
            m_height = height;
            ++s_object_count;
        }

        // destructors
        // ~Box() {}
        ~Box(); 

        mutable unsigned m_count{1};  // const일 때도 변경가능하도록 예외 설정

        // Function to calculate the volume of a box
        double volume()
        {
            return m_length * m_width * m_height;
        }

        // accessor functions.
        double getLength() { return m_length; }
        double getWidth() const { return m_width;  }  // const member functions.
        double getHeight() { return m_height; }
        // mutators
        Box& setLength(double length) { if (length > 0) m_length = length; return *this;}
        Box& setWidth(double width)   { if (width > 0)  m_width  = width;  return *this;}
        Box& setHeight(double height) { if (height > 0) m_height = height; return *this;}

        // friend
        friend double surfaceArea(const Box& box);

        static size_t getObjectCount() { return s_object_count; }


    private:

        double m_length{1.0};
        double m_width{1.0};
        double m_height{1.0};

        static inline size_t s_object_count {};
    };

class Person
{
public:
    string name;
 
    class Address
    {
    public:
        string country;
        string city;
        int houseNumber;
    };
 
    Address add;
 
    void print()
    {
        cout << "Country : " << add.country << endl;
        cout << "City : " << add.city << endl;
        cout << "HouseNumber : " << add.houseNumber << endl;
    }
};

int main() {
    std::cout << Box::getObjectCount() << std::endl;  // 0

    Box myBox{80.0, 50.0, 40.0};  
    Box myBox2{80.0, 50.0, 40.0}; 

    std::cout << myBox.volume() << std::endl; // 160000

    Box myDefaultBox;
    std::cout << myDefaultBox.volume() << std::endl;  // 1

    Box copyBox3 {myBox};
    // Careful!! when an object is created by the copy constructor
    // it is interlinked with the original object
    std::cout << copyBox3.volume() << std::endl;  // 160000

    // getter setter
    std::cout << myBox.getLength() << std::endl;  // 80
    myBox.setLength(100).setHeight(10); // method chaining
    std::cout << myBox.getLength() << std::endl;  // 100
    std::cout << myBox.getHeight() << std::endl;  // 10

    const Box* boxPointer = &myBox;  // A pointer-to-const-Box variable
    // boxPointer->m_length = 2; -> Error!
    std::cout << boxPointer->getWidth() << std::endl;  // 50
    boxPointer->m_count = 3;
    std::cout << boxPointer->m_count << std::endl;  // 3 (mutable)

    // friends
    std::cout << surfaceArea(myBox) << std::endl;  // 13000

    std::cout << myBox.getObjectCount() << std::endl;  // 2 (myBox, myBox2)

    // nested class
    Person Bosung;
    // Address addr; // 컴파일 에러
    Person::Address ExampleAdd;
 
    Bosung.add.country = "Korea";
    Bosung.add.city = "Seoul";
    Bosung.add.houseNumber = 5;
 
    Bosung.print();
    // Country : Korea
    // City : Seoul
    // HouseNumber : 5

    // Box destructor called.
    // Box destructor called.
    // Box destructor called.
    // Box destructor called.
}

// friend function to calculate the surface area of a Box object
double surfaceArea(const Box& box) {
    // can use interanl values
    return 2.0 * (box.m_length * box.m_width + box.m_length * box.m_height + box.m_height * box.m_width);
};

Box::~Box()                              // Destructor
{
  std::cout << "Box destructor called." << std::endl;
  --s_object_count;
}