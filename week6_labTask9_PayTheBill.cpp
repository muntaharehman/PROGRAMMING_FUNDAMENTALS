#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies;
    double totalDue, totalChange;

    
    cout << "Enter quarters: ";
    cin >> quarters;
    cout << "Enter dimes: ";
    cin >> dimes;
    cout << "Enter nickels: ";
    cin >> nickels;
    cout << "Enter pennies: ";
    cin >> pennies;
    cout << "Enter the total amount due: $";
    cin >> totalDue;
    totalChange = quarters * 0.25 + dimes * 0.10 + nickels * 0.05 + pennies * 0.01;
    
    if (totalChange >= totalDue) {
        cout << "Can you pay the amount? Yes\n";
    } else {
        cout << "Can you pay the amount? No\n";
    }

    return 0;
}