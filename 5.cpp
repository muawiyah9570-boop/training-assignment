// Write a program to calculate profit or loss on selling 25 bananas.

#include <iostream>
using namespace std;

int main() {
    double costPricePerDozen, sellingPricePerDozen;
    cout << "Enter cost price per dozen bananas: ";
    cin >> costPricePerDozen;
    cout << "Enter selling price per dozen bananas: ";
    cin >> sellingPricePerDozen;

    // Calculate cost and selling price for 25 bananas
    double costPriceFor25 = (costPricePerDozen / 12) * 25;
    double sellingPriceFor25 = (sellingPricePerDozen / 12) * 25;
    double profitOrLoss = sellingPriceFor25 - costPriceFor25;

    if (profitOrLoss > 0) {
        cout << "Profit earned on selling 25 bananas: " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss incurred on selling 25 bananas: " << -profitOrLoss << endl;
    } else {
        cout << "No profit, no loss on selling 25 bananas." << endl;
    }

    return 0;
}