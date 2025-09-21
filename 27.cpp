#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0) { cout << "Factorial undefined for negative numbers.\n"; return 0; }
    int fact = 1;
    for (int i = 2; i <= n; ++i) fact *= i;
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
