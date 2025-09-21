// Write a program to find character for a given ASCII code.
#include <iostream>
using namespace std;

int main() {
    int asciiCode;
    cout << "Enter an ASCII code: ";
    cin >> asciiCode;

    char character = char(asciiCode);
    cout << "Corresponding character: " << character << endl;

    return 0;
}