#include <iostream>
using namespace std;

bool isInFibonacci(int x) {
    if (x < 0) return false;
    int a = 0, b = 1;
    if (x == 0 || x == 1) return true;
    while (b < x) {
        int c = a + b;
        a = b; b = c;
    }
    return b == x;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << (isInFibonacci(num) ? " is in Fibonacci series.\n" : " is NOT in Fibonacci series.\n");
    return 0;
}
