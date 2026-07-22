#include <iostream>
using namespace std;

int main() {
    string name;
    int seats;
    float price = 200, total;

    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter Number of Seats: ";
    cin >> seats;

    total = seats * price;

    cout << "\nTicket Booked Successfully\n";
    cout << "Name: " << name << endl;
    cout << "Seats: " << seats << endl;
    cout << "Total Amount: " << total << endl;

    return 0;
}