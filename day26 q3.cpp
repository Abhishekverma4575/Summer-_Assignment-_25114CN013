#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin;
    float balance = 5000, amount;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance = balance - amount;
            cout << "Transaction Successful.\n";
            cout << "Remaining Balance: " << balance;
        } else {
            cout << "Insufficient Balance.";
        }
    } else {
        cout << "Invalid PIN.";
    }

    return 0;
}