#include <string>
#include <iostream>

using namespace std;

class Box {
    public:
        // Constructors
        Box(double l, double w, double h) : m_length{l}, m_width{w}, m_height{h}
        { std::cout << "Box(double, double, double) called.\n"; }
        explicit Box(double side) : Box{side, side, side}
        { std::cout << "Box(double) called.\n"; }
        Box() { std::cout << "Box() called.\n"; }   // Default constructor

        // Destructor
        ~Box() { std::cout << "Box destructor" << std::endl; }

        double volume() const { return m_length * m_width * m_height; }
        // Accessors
        double getLength() const { return m_length; }
        double getWidth()  const { return m_width; }
        double getHeight() const { return m_height; }
    private:
        double m_length {1.0};
        double m_width  {1.0};
    protected:
        double m_height {1.0};
};


class Carton : public Box {
    public:
        // Constructors
        Carton() { std::cout << "Carton() called.\n"; }

        explicit Carton(std::string_view material) : m_material{material}
        { std::cout << "Carton(string_view) called.\n"; }

        Carton(double side, std::string_view material) : Box{side}, m_material{material}
        { std::cout << "Carton(double,string_view) called.\n"; }

        Carton(double l, double w, double h, std::string_view material) : Box{l, w, h}, m_material{material}
        { std::cout << "Carton(double,double,double,string_view) called.\n"; }

        // Destructor
        ~Carton() { std::cout << "Carton destructor. Material = " << m_material << std::endl; }

        // can access to protected value
        double getDoubleHeight() const { return m_height*2; }
    private:
        std::string m_material;
};

int main() {
    Box box {40.0, 30.0, 20.0};
    Carton carton;
    Carton chocolateCarton {"Solid bleached board"};  

    std::cout << "box occupies " << sizeof box << " bytes" << std::endl;
    std::cout << "carton occupies " << sizeof carton << " bytes" << std::endl;
    std::cout << "candyCarton occupies " << sizeof chocolateCarton << " bytes" << std::endl;

    std::cout << "box volume is " << box.volume() << std::endl;
    std::cout << "carton volume is " << carton.volume() << std::endl;
    std::cout << "chocolateCarton volume is " << chocolateCarton.volume() << std::endl;
    std::cout << "chocolateCarton length is " << chocolateCarton.getLength() << std::endl;

    // can access to protected value
    std::cout << "chocolateCarton height * 2 is " << chocolateCarton.getDoubleHeight() << std::endl;
}

// -> 생성자는 부모부터 생성된다.
// Box() called.
// Carton() called.

// -> destructor는 자식부터 생성된다.
// Carton destructor. Material = Solid bleached board
// Box destructor