#include <iostream>
using namespace std;

int main() {
    string name;
    int accNo;
    float balance;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "\nBank Account Details\n";
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accNo << endl;
    cout << "Balance: " << balance << endl;

    return 0;
}