 #include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5, sum = 14;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                cout << arr[i] << " " << arr[j] << endl;
        }
    }

    return 0;
}