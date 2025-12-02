#include <iostream>
#include <cmath> // to use sqrt it makes work alot easy 
using namespace std;

int main() {
    float a, b, c, s, area;

    cout << "Enter sides of the triangle: ";
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "area of triangle = " << area << endl;

    return 0;
}
