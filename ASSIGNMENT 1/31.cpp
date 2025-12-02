#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {       //  it is to showloop for row
        for (int j = 1; j <= i; j++) {   //to show loop for printing X
            cout << "X";
        }
        cout << endl;  
    }

    return 0;
}
