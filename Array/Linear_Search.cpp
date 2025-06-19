#include <iostream>
using namespace std;

int linearsearch(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    cout << "Enter the number to find: ";
    cin >> target;
    
    int result = linearsearch(A, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    
    return 0;
}
