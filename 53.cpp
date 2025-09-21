#include <iostream>
using namespace std;

int main() {
    int h = 5;
    for (int i = 1; i <= h; i++) {
        for (int s = 0; s < h - i; s++) cout << "  ";
        for (int j = 0; j < i; j++) cout << "* ";
        cout << '\n';
    }
    return 0;
}
