#include <iostream>
using namespace std;

int main() {
    int n = 7; // must be odd
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool star = false;
            if (i == 0 && j <= mid) star = true;
            if (j == 0 && i <= mid) star = true;
            if (i == mid) star = true;
            if (j == n - 1 && i >= mid) star = true;
            if (i == n - 1 && j >= mid) star = true;
            cout << (star ? "* " : "  ");
        }
        cout << '\n';
    }
    return 0;
}
