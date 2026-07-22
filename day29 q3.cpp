#include <iostream>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    cout << "\n1. Display String\n2. Find Length\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "String = " << str;
            break;

        case 2:
            cout << "Length = " << str.length();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}