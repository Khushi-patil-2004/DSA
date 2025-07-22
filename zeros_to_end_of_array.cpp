#include <iostream>
using namespace std;
void moveZerosToEnd(int arr[], int n) {
    int temp[n]; 
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index] = arr[i];
            index++;
        }
    }
    while (index < n) {
        temp[index] = 0;
        index++;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, n1);
    printArray(arr, n1);

    return 0;
}
