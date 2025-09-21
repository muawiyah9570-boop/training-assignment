#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool neg = (n < 0);
    n = abs(n);
    int rev = 0;
    while (n) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (neg) rev = -rev;
    cout << "Reversed number: " << rev << endl;
    return 0;
}
