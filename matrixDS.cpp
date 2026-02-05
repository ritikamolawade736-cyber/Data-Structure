#include <iostream>
using namespace std;

int main() {
    int r, c, choice;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1: // Addition
            for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++)
                    C[i][j] = A[i][j] + B[i][j];

            cout << "Addition Result:\n";
            break;

        case 2: // Subtraction
            for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++)
                    C[i][j] = A[i][j] - B[i][j];

            cout << "Subtraction Result:\n";
            break;

        case 3: // Multiplication
            for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++) {
                    C[i][j] = 0;
                    for(int k = 0; k < c; k++)
                        C[i][j] = A[i][k] * B[k][j];
                }

            cout << "Multiplication Result:\n";
            break;

        default:
            cout << "Invalid choice!";
            return 0;
    }

    // Display result matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
