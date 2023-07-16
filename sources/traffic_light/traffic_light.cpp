#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
    cout << "to start press enter";
    cin.ignore();

    int i=1;
    int j=0;

    while (true)
    {
        for (i = 1; i <= 4; i++){
            cout << "traffic light" << i << "\n";

            for (j=0; j<=10; j++){
                sleep(1);
                cout << "." << "\n";
            }
        }
    }
    

}