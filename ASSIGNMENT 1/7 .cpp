#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float pf, ic, cg, total, average;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks in Pf: ";
    cin >> pf;

    cout << "Enter marks in Ict: ";
    cin >> ic;

    cout << "Enter marks in Cg: ";
    cin >> cg;

    total = pf + ic + cg;
    average = total / 3;

    cout << "Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
