#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char ch;
    int count = 0;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Enter character: ";
    cin >> ch;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ch)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}