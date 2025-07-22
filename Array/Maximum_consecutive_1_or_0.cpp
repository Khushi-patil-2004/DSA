#include <iostream>
using namespace std;
int maxConsecutiveOnesOrZeros(int arr[], int n) {
    if (n == 0) return 0;
    int maxCount = 1;
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    return maxCount;
}
int main() {
    int arr[] = {0, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max consecutive 1s or 0s: " << maxConsecutiveOnesOrZeros(arr, n) << endl;
    return 0;
}
