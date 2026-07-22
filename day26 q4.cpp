#include <iostream>
using namespace std;

int main() {
    int ans, score = 0;

    cout << "Q1. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n";
    cin >> ans;

    if (ans == 2)
        score++;

    cout << "Your Score = " << score << "/1";

    return 0;
}