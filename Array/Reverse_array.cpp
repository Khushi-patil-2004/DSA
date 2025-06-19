#include<iostream>
using namespace std;

// Function to print the array
void printarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " | ";
    }
    cout << endl;
}

// Function to reverse the array
void reversearray(int a[], int n)
{
    int start = 0, end = n - 1;
    while(start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int A[n];
    cout << "Enter the array elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Original array: ";
    printarray(A, n);

    reversearray(A, n);

    cout << "Reversed array: ";
    printarray(A, n);

    return 0;
}
