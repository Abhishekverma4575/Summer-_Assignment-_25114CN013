#include <iostream>
using namespace std;

int main() {
    string item;
    int quantity;
    float price;

    cout << "Enter Item Name: ";
    cin >> item;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    cout << "\nInventory Details\n";
    cout << "Item: " << item << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: " << price << endl;

    return 0;
}