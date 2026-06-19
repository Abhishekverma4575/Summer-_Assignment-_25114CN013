 #include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Principal Diagonal: ";
    for (int i = 0; i < SIZE; i++) {
        cout << matrix[i][i] << " "; // Condition: row == column
    }
    cout << endl;

    cout << "Secondary Diagonal: ";
    for (int i = 0; i < SIZE; i++) {
        cout << matrix[i][SIZE - i - 1] << " "; // Condition: row + column == SIZE - 1
    }
    cout << endl;

    return 0;
}
