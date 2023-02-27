#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;

    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }

    int row = 0;
    int col = N / 2;


    for (int num = 1; num <= N * N; num++) {
        matrix[row][col] = num;


        int next_row = (row - 1 + N) % N;
        int next_col = (col + 1) % N;

        if (matrix[next_row][next_col] != 0) {
            next_row = (row + 1) % N;
            next_col = col;
        }


        row = next_row;
        col = next_col;
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
