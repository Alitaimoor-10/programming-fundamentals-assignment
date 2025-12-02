#include <iostream>
using namespace std;

int main() {
    float vi, t, a, s;

 
    cout << "Enter initial velocity (vi): ";
    cin >> vi;
    cout << "Enter acceleration (a): ";
    cin >> a;
    cout << "Enter time (t): ";
    cin >> t;
    s = (vi * t) + (0.5 * a * t * t);// formula which is applied
    cout << "The value of s is: " << s << endl;

    return 0;
}
