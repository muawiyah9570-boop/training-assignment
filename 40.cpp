#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int original = abs(num);
    int tmp = original;
    int digits = 0;
    while (tmp) { tmp /= 10; ++digits; }
    if (original == 0) digits = 1;
    tmp = original;
    int sum = 0;
    while (tmp) {
        int d = tmp % 10;
        sum += (int)pow(d, digits);
        tmp /= 10;
    }
    if (sum == original) cout << original << " is an Armstrong number.\n";
    else cout << original << " is NOT an Armstrong number.\n";
    return 0;
}
