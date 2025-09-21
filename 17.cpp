// Write a program to read a range of years (start year and end year) and display all the leap years within that range.
#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;
    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << ":" << endl;
    for (int year = startYear; year <= endYear; ++year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << endl;
        }
    }

    return 0;
}