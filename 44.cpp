#include <iostream>
using namespace std;

int main() {
    int rows = 4, times = 6;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < times; j++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
