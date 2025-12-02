#include <iostream>
using namespace std;

int main() {
    float num = 15.58971;
    int integral = (int)num;         
    float fractional = num - integral; 

    cout << "The number is: " << num << endl;
    cout << "Integral part: " << integral << endl;
    cout << "Fractional part: " << fractional << endl;

    return 0;
}
