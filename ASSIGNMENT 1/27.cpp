#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds, totalSeconds;

    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter seconds: ";
    cin >> seconds;

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    cout << "\nTotal time in seconds = " << totalSeconds << endl;

    return 0;
}
