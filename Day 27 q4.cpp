#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3;
    float total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\nMarksheet\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}