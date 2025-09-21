#include <iostream>
using namespace std;

int main() {
    int h = 6;
    for (int i = 1; i <= h; i++) {
        for (int s = 0; s < h - i; s++) cout << "  ";
        for (int k = 0; k < 2 * i - 1; k++) cout << "* ";
        cout << '\n';
    }
    return 0;
}
