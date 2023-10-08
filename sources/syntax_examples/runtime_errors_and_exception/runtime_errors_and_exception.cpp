#include <iostream>
#include <string_view>

using namespace std;

class Trouble
{

public:
    virtual ~Trouble() = default;

    Trouble(std::string_view message)
    {
        m_message = message;
    };

    virtual std::string_view what() const { return m_message; }

    std::string m_message;
};

class DrivedTrouble : public Trouble
{
public:
    DrivedTrouble(std::string_view message) : Trouble{message} {}
};

int main()
{
    try
    {
        try
        {
            throw "exception raised in nested try block!";
        }
        catch (const char *message)
        {
            std::cout << message << std::endl;
        }

        throw DrivedTrouble{"DrivedTrouble raised in try block!"};
    }
    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
    // drived class를 앞에 배치해야 한다.
    // 또 reference를 이용하지 않으면 자동으로 객체를 복사하는 과정에서 타입 변환이 이루어진다(object slicing).
    catch (const DrivedTrouble &t)
    {
        std::cout << t.what() << std::endl;
    }
    catch (const Trouble &t)
    {
        std::cout << t.m_message << std::endl;
    }
    catch (...)
    {
        // whatever exception type is ...
        // can throw exception once more...
        throw;
    }
    std::cout << "continue code~" << std::endl;
}