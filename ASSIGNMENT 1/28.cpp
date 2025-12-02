#include <iostream>
using namespace std;

int main() {
    int a, b, c, disc;
    cout << "enter value of a: ";
    cin >> a;
    cout << "enter value of b: ";
    cin >> b;
    cout << "enter value of c: ";
    cin >> c;
    disc = (b * b) - (4 * a * c);
    cout << "disc = " << disc << endl;

    return 0;
}
