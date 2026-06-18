 #include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 3;

    int low = 0, high = n - 1, mid;
    int found = -1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = mid;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found != -1)
        cout << "Found at index: " << found;
    else
        cout << "Not found";

    return 0;
}