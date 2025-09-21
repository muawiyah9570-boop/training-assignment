// Write a program to read time in hour and minute and display it in HH:MM format.
#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    char colon;

    cout << "Enter time (HH:MM): ";
    cin >> hour >> colon >> minute;

    cout << "Hour- " << hour << ", Minute- " << minute << endl;

    return 0;
}