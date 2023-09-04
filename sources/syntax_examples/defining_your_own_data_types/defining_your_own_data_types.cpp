// using namespace std;

int main() {
    class Box
    {

    public:
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

    Box myBox;
}