#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<" Enter values of a and b: ";
    cin>> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After interchange :";
    cout<<"a = "<< a ;
    cout<<",b = "<< b << endl;
    return 0; 


}