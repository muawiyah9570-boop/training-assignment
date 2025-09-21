// Write a program to convert temperature between Fahrenheit and Celsius based on user choice.
#include <iostream>
using namespace std;

int main() {
    char choice;
    double temp, converted;

    cout << "Enter 'F' to convert Fahrenheit to Celsius or 'C' to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << converted << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << converted << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}