#include <iostream>
using namespace std;

int main() {
    int age; // in years
    cout << "Enter your age in years: ";
    cin >> age;

    int months = age * 12;
    int days = age * 365;

    cout << "Your age in months: " << months << endl;
    cout << "Your age in days: " << days << endl;

    return 0;
}
