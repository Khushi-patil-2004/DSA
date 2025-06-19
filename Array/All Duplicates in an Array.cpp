#include<iostream>
using namespace std;

void printarray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "|";
    }
    cout << endl;
}

void findDuplicates(int a[], int n) {
    bool found = false;

    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if this element was already printed
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate) continue;

        // Check if the element appears again
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    int A[n];
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    printarray(A, n);
    findDuplicates(A, n);

    return 0;
}
