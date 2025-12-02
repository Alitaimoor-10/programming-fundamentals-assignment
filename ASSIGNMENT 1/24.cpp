#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4, s5, total, average;
    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    cout << "Total marks = " << total << endl;
    cout << "average marks = " << average << endl;

    return 0;
}
