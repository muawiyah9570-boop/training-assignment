#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    if (N <= 0) { cout << "Nothing to print.\n"; return 0; }
    int a = 0, b = 1;
    cout << a;
    if (N > 1) cout << " " << b;
    for (int i = 3; i <= N; ++i) {
        int c = a + b;
        cout << " " << c;
        a = b; b = c;
    }
    cout << endl;
    return 0;
}
