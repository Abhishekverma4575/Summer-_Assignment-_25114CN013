#include <iostream>
using namespace std;

void display(string name[], int marks[], int n) {
    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << "  Marks: " << marks[i] << endl;
    }
}

int main() {
    const int n = 3;
    string name[n];
    int marks[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Student Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    display(name, marks, n);

    return 0;
}