#include<iostream>
using namespace std;

bool isSafe(int board[], int row, int col, int n) {
    for (int i = 0; i < col; i++)
        if (board[i] == row || abs(board[i] - row) == abs(i - col))
            return false;
    return true;
}

bool solveNQUtil(int board[], int col, int n) {
    if (col >= n)
        return true;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[col] = i;
            if (solveNQUtil(board, col + 1, n) == true)
                return true;
            board[col] = -1;
        }
    }
    return false;
}

void print(int board[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i] == j)
                cout << "Q ";
            else
                cout << "- ";
        }
        cout << "\n";
    }
}

bool solveNQ(int n) {
    int board[n];
    for (int i = 0; i < n; i++)
        board[i] = -1;

    if (solveNQUtil(board, 0, n) == false) {
        cout << "Solution does not exist";
        return false;
    }

    print(board, n);
    return true;
}


int main() {
    int n = 4;
    solveNQ(n);
    return 0;
}
