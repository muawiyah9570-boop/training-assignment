#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    int r = sqrt(n);
    for (int i = 3; i <= r; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int a, b;
    cout << "Enter two numbers (a b): ";
    cin >> a >> b;
    if (a > b) swap(a, b);
    cout << "Primes between " << a << " and " << b << ":\n";
    for (int i = max(2, a); i <= b; ++i)
        if (isPrime(i)) cout << i << " ";
    cout << endl;
    return 0;
}
