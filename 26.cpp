#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "Sum of cubes of first " << n << " natural numbers is: " << (sum * sum) << endl;
    return 0;
}
