#include <iostream>

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

    bool operator<( Box &aBox) 
    {
        return this->volume() < aBox.volume();
    }; // Overloaded 'less-than' operator

    bool operator<(double value) {
        return volume() < value;
    }


    // The rest of the Box class as before...
    // accessor functions.
    double getLength() { return m_length; }
    double getWidth() const { return m_width; } // const member functions.
    double getHeight() { return m_height; }
    // mutators
    Box &setLength(double length)
    {
        if (length > 0)
            m_length = length;
        return *this;
    }
    Box &setWidth(double width)
    {
        if (width > 0)
            m_width = width;
        return *this;
    }
    Box &setHeight(double height)
    {
        if (height > 0)
            m_height = height;
        return *this;
    }

    double volume()
    {
        return m_length * m_width * m_height;
    }

private:
    double m_length{1.0};
    double m_width{1.0};
    double m_height{1.0};
};

int main()
{
    Box box1{10.0, 10.0, 10.0};
    Box box2{80.0, 50.0, 40.0};
    if (box1 < box2) {
        std::cout << "box1 is less than box2" << std::endl;  // box1 is less than box2
    };
    if (box1 < 1000000) {
        std::cout << "box1 is less than box2" << std::endl;  // box1 is less than box2
        std::cout << "box1 is less than 1000000" << std::endl;  // box1 is less than 1000000
    };

}