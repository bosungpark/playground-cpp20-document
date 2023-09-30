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

int main()
{
    Carton carton{10.0, 10.0, 5.0};
    Box *box{&carton};
    carton.dynamicVolume();
    box->dynamicVolume(); // Box usable volume is 500

    ToughPack hardcase{10.0, 10.0, 5.0};
    hardcase.dynamicVolume();
    box = &hardcase;
    box->dynamicVolume(); // ToughPack usable volume is 425

    Box* converedBox {&hardcase};
    converedBox->dynamicVolume();
}