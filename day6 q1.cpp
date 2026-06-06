#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int binaryNumber = 0; 
    int place = 1;        

    while (n > 0) {
        int remainder = n % 2; 
 
        binaryNumber = binaryNumber + (remainder * place);

        place = place * 10 ;
        n = n / 2;         
    }

    cout << "Binary: " << binaryNumber << endl;

    return 0;
}
