#include <iostream>
using namespace std;

int main() {
    int number = 7, guess;

    cout << "Guess a number (1-10): ";
    cin >> guess;

    if (guess == number)
        cout << "Correct! You guessed it.";
    else
        cout << "Wrong! The correct number is " << number;

    return 0;
}