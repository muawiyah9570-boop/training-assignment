// Write a program to find ASCII code of a character entered by the user.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII code of '" << ch << "' is: " << int(ch) << endl;

    return 0;
}