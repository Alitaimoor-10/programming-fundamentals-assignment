#include <iostream>
using namespace std;

int main() {
    int a = 5;      
    int b = 10;    

    cout << "Before interchange:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "After interchange:" ;
    cout << "a = " << a ;
    cout<< ", b = " << b << endl;

    return 0;
}
