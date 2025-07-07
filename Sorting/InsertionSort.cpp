#include<iostream>
using namespace std;
void printarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " | ";
    }
    cout << endl;
}

void insertionsort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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

    insertionsort(A, n);

    cout << "Sorted array using Insertion Sort: ";
    printarray(A, n);

    return 0;
}
