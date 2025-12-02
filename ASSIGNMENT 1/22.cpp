#include <iostream>
using namespace std;

int main() {
    string name, gender;
    int age;
    float height;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height (in cm): ";
    cin >> height;
    cout << "Enter Gender: ";
    cin >> gender;
    cout << "\n--- Student Information ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " cm" << endl;// also showing ae in cm
    cout << "Gender: " << gender << endl;

    return 0;
}
