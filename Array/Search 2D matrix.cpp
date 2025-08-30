#include <iostream>
using namespace std;

pair<int, int> searchMatrix(int matrix[][4], int rows, int cols, int target) {
    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int row = mid / cols;
        int col = mid % cols;

        if (matrix[row][col] == target) {
            return {row, col};  // return position
        }
        else if (matrix[row][col] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return {-1, -1}; // not found
}

int main() {
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter target: ";
    cin >> target;

    pair<int, int> result = searchMatrix(matrix, 3, 4, target);

    if (result.first != -1) {
        cout << "Found at row " << result.first << ", column " << result.second << "\n";
    } else {
        cout << "Not Found\n";
    }

    return 0;
}
