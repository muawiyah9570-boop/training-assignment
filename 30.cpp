#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? llabs(a) : gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (a == 0 || b == 0) { cout << "LCM is 0\n"; return 0; }
    int g = gcd(a, b);
    int l = llabs(a / g * b); // avoid overflow a*b
    cout << "LCM: " << l << endl;
    return 0;
}
