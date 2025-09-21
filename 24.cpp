#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Enter the value of N: ";
    cin >> N;

    // First N odd numbers are: 1, 3, 5, 7, ...
    for (int i = 1; i <= N; i++) {
        sum += (2 * i-1); // i-th odd number
    }

    cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}
