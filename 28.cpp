#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) { cout << "Number of digits: 1\n"; return 0; }
    num = llabs(num);
    int count = 0;
    while (num) { num /= 10; ++count; }
    cout << "Number of digits: " << count << endl;
    return 0;
}
