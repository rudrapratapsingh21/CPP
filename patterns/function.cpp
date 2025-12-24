#include <iostream>
using namespace std;

// Function to add matrices
void addMatrix(int a[][100], int b[][100], int result[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int a[100][100], b[100][100], result[100][100];

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter elements of Matrix A:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    // Calling function
    addMatrix(a, b, result, rows, cols);

    // Display Result
    cout << "\nResultant Matrix (A + B):\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
