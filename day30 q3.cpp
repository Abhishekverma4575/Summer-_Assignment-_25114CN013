#include <iostream>
using namespace std;

int main() {
    string name[3];
    float salary[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter Employee Name: ";
        cin >> name[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Details\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << name[i]
             << "  Salary: " << salary[i] << endl;
    }

    return 0;
}