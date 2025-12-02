#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14159;  
    float r = 5;              
    float h = 10;         
    float volume;

    volume = pi * r * r * h;

    cout << "Volume of cylinder = " << volume << endl;

    return 0;
}

