#include <iostream>
using namespace std;

int main() {
    int R = 5, C = 5;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}
