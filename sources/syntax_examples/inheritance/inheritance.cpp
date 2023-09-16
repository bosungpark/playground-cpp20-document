#include <string>
#include <iostream>

using namespace std;

class Box {
    public:
        Box() = default;
        Box(double length, double width, double height)
            : m_length{length}, m_width{width}, m_height{height}
        {}
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
        explicit Carton(std::string_view material = "Cardboard")  // Constructor
        : m_material{material} {}
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