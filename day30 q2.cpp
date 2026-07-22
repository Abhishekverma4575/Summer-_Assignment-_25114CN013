#include <iostream>
using namespace std;

int main() {
    string book[3];

    cout << "Enter 3 Book Names:\n";
    for (int i = 0; i < 3; i++)
        cin >> book[i];

    cout << "\nBooks in Library:\n";
    for (int i = 0; i < 3; i++)
        cout << book[i] << endl;

    return 0;
}