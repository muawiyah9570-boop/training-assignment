#include <iostream>
#include <cmath>
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
    cout << "Primes under 100:\n";
    for (int i = 2; i < 100; ++i)
        if (isPrime(i)) cout << i << " ";
    cout << endl;
    return 0;
}
