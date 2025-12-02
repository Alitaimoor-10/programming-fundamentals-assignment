#include <iostream>
using namespace std;

int main() {
    float f, C;

    cout << "enter temperature in fahrenheit: ";
    cin >> f;

    C = (5.0 / 9.0) * (f - 32);

    cout << "temperature in Celsius = " << C;
    cout << " °C" << endl;

    return 0;
}
