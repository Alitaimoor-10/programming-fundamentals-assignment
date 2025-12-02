#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference;
    const float pi = 3.1416;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    area = pi * radius * radius;

    circumference = 2 * pi * radius;
    
    cout << "area of Circle = " << area << endl;
    cout << "circumference of Circle = " << circumference << endl;

    return 0;
}
