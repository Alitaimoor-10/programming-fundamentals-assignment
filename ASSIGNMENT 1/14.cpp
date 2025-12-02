#include <iostream>
using namespace std;

int main() {
    float millimeters, inches;

    cout << "Enter length in millimeters: ";
    cin >> millimeters;
    inches = millimeters / 25.4;
    cout << "Length in inches = " << inches << endl;

    return 0;
}
