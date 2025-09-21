#include <iostream>
using namespace std;

int main() {
    int cols = 6;
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= cols - i + 1; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}
