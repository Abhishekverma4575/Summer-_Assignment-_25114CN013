#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int count = 1;

    cout << "Enter sentence: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            count++;
    }

    cout << "Total words = " << count;

    return 0;
}