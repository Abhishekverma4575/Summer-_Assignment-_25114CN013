#include <iostream>
using namespace std;

int main() {
    int a[5], i, sum = 0;

    cout << "Enter 5 elements:\n";
    for (i = 0; i < 5; i++)
        cin >> a[i];

    cout << "\n1. Display Array\n2. Find Sum\n";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Array Elements: ";
            for (i = 0; i < 5; i++)
                cout << a[i] << " ";
            break;

        case 2:
            for (i = 0; i < 5; i++)
                sum += a[i];
            cout << "Sum = " << sum;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}