// Write a program to calculate simple interest.
#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (per annum): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}