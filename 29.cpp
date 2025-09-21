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
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << (isPrime(n) ? " is Prime.\n" : " is NOT Prime.\n");
    return 0;
}
