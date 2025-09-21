// Write a program to read lengths of three sides of a triangle and display whether the triangle is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "Enter lengths of three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Sides must be positive numbers." << endl;
    } else if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}