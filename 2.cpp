// Write a program to calculate circumference of a circle. 
#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    double circumference = 2 * 3.14159 * radius;
    cout << "Circumference: " << circumference << endl;

    return 0;
}