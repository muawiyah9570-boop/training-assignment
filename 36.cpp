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
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << (gcd(a,b) == 1 ? "Co-prime\n" : "Not co-prime\n");
    return 0;
}
