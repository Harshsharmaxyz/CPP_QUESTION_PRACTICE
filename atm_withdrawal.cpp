/*write a program that print the current balance of the account ,ask the user to enter the withdrawal amount?
= if withdrawl amount is less than current balance.
- deduct the withdrawl amount from the current balance if current balance after deduction is less than 500 INR
  and print the current balance and penalty.
- other , print the current balance.
= if withdrawl amount is greater than current balance , print insufficient funds. 
*/

#include <iostream>
using namespace std;

int main() {
    // Initialize the current balance
    float currentBalance = 5000.0;  // You can set the initial balance as needed
    float withdrawalAmount;
    const float penalty = 50.0;
    const float minBalance = 500.0;

    // Print the current balance
    cout << "Current balance = " << currentBalance << " INR" << endl;

    // Ask the user to enter the withdrawal amount
    cout << "Enter withdrawal amount - ";
    cin >> withdrawalAmount;

    // Check if withdrawal amount is less than or equal to the current balance
    if (withdrawalAmount <= currentBalance) {
        // Deduct the withdrawal amount from the current balance
        currentBalance -= withdrawalAmount;

        // Check if the current balance after deduction is less than 500 INR
        if (currentBalance < minBalance) {
            // Deduct a penalty of 50 INR
            currentBalance -= penalty;
            cout << "Current balance = " << currentBalance << " INR" << endl;
            cout << "Penalty = " << penalty << " INR" << endl;
        } else {
            // Print the current balance without penalty
            cout << "Current balance = " << currentBalance << " INR" << endl;
        }
    } else {
        // If withdrawal amount is greater than current balance, print insufficient funds
        cout << "Insufficient funds" << endl;
    }

    return 0;
}

    