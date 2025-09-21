#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            char ch = 'A' + j;
            cout << ch << ' ';
        }
        cout << '\n';
    }
    return 0;
}
