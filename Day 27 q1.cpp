#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float marks;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\nStudent Record\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}