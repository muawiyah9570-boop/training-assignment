// Write a program to enter date in DD/MM/YYYY format and display it in "Day – DD, Month – MM, Year – YYYY" format.
#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    char slash1, slash2;

    cout << "Enter date (DD/MM/YYYY): ";
    cin >> day >> slash1 >> month >> slash2 >> year;

    cout << "Day – " << day << ", Month – " << month << ", Year – " << year << endl;

    return 0;
}