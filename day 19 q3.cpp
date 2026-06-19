 #include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 2;

    int matrix[rows][cols] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int transpose[cols][rows];

    // Print the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
