#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int a, int b) {
    a = abs(a); b = abs(b);
    while (b) { int t = a % b; a = b; b = t; }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "HCF (GCD): " << gcd(a, b) << endl;
    return 0;
}
