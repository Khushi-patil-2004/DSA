#include <iostream>
using namespace std;

int binarysearch(int a[], int n, int target) {
    int left = 0;
    int right = n - 1;
     int mid = left + (right - left) / 2; 
    
    while (left <= right) { 
        if (a[mid] == target) {
            return mid;
        }
        if (a[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    cout << "Enter the number to find: ";
    cin >> target;
    
    int result = binarysearch(A, n, target); 
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    
    return 0;
}
