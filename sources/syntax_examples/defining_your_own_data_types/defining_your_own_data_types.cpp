#include <iostream>

using namespace std;

int main() {
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
        }

        // Function to calculate the volume of a box
        double volume()
        {
            return m_length * m_width * m_height;
        }

    private:

        double m_length{1.0};
        double m_width{1.0};
        double m_height{1.0};
    };

    Box myBox{80.0, 50.0, 40.0};  

    std::cout << myBox.volume() << std::endl; // 160000

    Box myDefaultBox;
    std::cout << myDefaultBox.volume() << std::endl;  // 1

    Box copyBox3 {myBox};
    // Careful!! when an object is created by the copy constructor
    // it is interlinked with the original object
    std::cout << copyBox3.volume() << std::endl;  // 160000

    
}