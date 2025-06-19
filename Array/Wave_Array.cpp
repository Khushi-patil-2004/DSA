#include<iostream>
#include<algorithm> 
using namespace std;

void printarray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "|";
    }
    cout << endl;
}

void traversearray(int arr[], int n) {
    for(int i = 0; i < n-1; i += 2) {
        swap(arr[i], arr[i+1]);
    }
}

int main() {
    int n;
    cout << "Enter the number of element: " << endl;
    cin >> n;

    int A[n];
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Original array: ";
    printarray(A, n);
    // Sorting the array
    sort(A, A+n);
    cout << "Sorted array: ";
    printarray(A, n);

    traversearray(A, n);
    cout << "Wave array: ";
    printarray(A, n);

    return 0;
}
