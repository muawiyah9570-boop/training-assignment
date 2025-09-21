#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (n >= 1): ";
    cin >> n;
    if (n <= 0) { cout << "Invalid n\n"; return 0; }
    if (n == 1) { cout << "Nth term: 0\n"; return 0; }
    if (n == 2) { cout << "Nth term: 1\n"; return 0; }
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b; b = c;
    }
    cout << "Nth term: " << b << endl;
    return 0;
}
