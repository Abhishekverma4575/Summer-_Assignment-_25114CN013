#include <iostream>
using namespace std;

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i = 0, j = 0, k = 0;

    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter sorted elements:\n";
    for (int x = 0; x < n1; x++)
        cin >> a[x];

    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter sorted elements:\n";
    for (int x = 0; x < n2; x++)
        cin >> b[x];

    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    cout << "Merged Array: ";
    for (int x = 0; x < k; x++)
        cout << c[x] << " ";

    return 0;
}