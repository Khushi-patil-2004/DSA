#include<iostream>
using namespace std;

int missingnumber(int arr[], int n) {
    int allXOR = 0;

    // XOR of all numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        allXOR ^= i;
    }

    // XOR with all array elements
    for(int j = 0; j < n - 1; j++) {
        allXOR ^= arr[j];
    }

    return allXOR;
}

int main() {
    int n;
    cout << "Enter the maximum number n: ";
    cin >> n;

    int size = n - 1;  
    int A[size];

    cout << "Enter " << size << " numbers (from 1 to " << n << " with one missing):" << endl;
    for(int i = 0; i < size; i++) {
        cin >> A[i];
    }

    int result = missingnumber(A, n);
    cout << "Missing number is: " << result << endl;

    return 0;
}
