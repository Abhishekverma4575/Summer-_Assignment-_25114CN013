#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
            cout << s[i];
    }

    return 0;
}