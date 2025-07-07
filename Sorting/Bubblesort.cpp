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

void bubblesort(int a[], int n)
{
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(a[j] > a[j+1])
           {
               int temp = a[j+1];
               a[j+1] = a[j];
               a[j] = temp;
           }
       }
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

    bubblesort(A, n);

    cout << "Sorted array using Insertion Sort: ";
    printarray(A, n);

    return 0;
}
