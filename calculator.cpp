#include <iostream>

using namespace std;

int Calculate(int a, int b, char str)
{
    switch (str)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0;
    }
}

int main()
{
    int a = 0;
    int b = 0;
    char str = '+';
    int result = 0;


    cout << "make calculator" << endl;
    cout << "form :: [A + B] [A - B] [A * B] [A / B]" << endl;

    while (true)
    {
        cin >> a >> str >> b;
        result = Calculate(a,b,str);
        cout << result << endl;

        if (result == 0){
            cout << "exit: wrong argument" << endl;
            break;
        }
    }
    
    return 0;
}