#include <iostream>
using namespace std;

int main() {
    int rows = 4, upto = 6;
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= upto; j++) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
