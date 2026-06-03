   //  check number in range

   #include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;
    for (int num = start; num <= end; num++) {
        
        if (num <= 1) {
            continue; 
        }

        bool isPrime = true; 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; 
                break;          
            }
        }

        if (isPrime == true) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}