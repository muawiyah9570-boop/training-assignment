#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int tmp = n, digits = 0;
    while (tmp) { tmp /= 10; ++digits; }
    if (n == 0) digits = 1;
    tmp = n;
    int sum = 0;
    while (tmp) {
        int d = tmp % 10;
        sum += (int)pow(d, digits);
        tmp /= 10;
    }
    return sum == n;
}

int main() {
    cout << "Armstrong numbers under 1000:\n";
    for (int i = 0; i < 1000; ++i)
        if (isArmstrong(i)) cout << i << " ";
    cout << endl;
    return 0;
}
