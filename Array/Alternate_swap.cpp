#include <iostream>
using namespace std;

void printarray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "|";
    }
    cout << endl;
}

void alternateswap(int a[], int n) {
    for(int i = 0; i < n - 1; i += 2) {
        if(i + 1 < n) {
            swap(a[i], a[i + 1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of variables: " << endl;
    cin >> n;

    int A[n];
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Original array: ";
    printarray(A, n);
    alternateswap(A, n);
    cout << "Array after alternate swap: ";
    printarray(A, n);

    return 0;
}
