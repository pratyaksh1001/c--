#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even row, print left to right
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << ", ";
            }
        } else {
            // Odd row, print right to left
            for (int j = m - 1; j >= 0; j--) {
                cout << arr[i][j] << ", ";
            }
        }
    }

    cout << endl;

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}