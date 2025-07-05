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

void countOccurrences(int a[], int n)
{
    bool visited[n] = {false}; 

    cout << "\nElement Occurrences:\n";
    for(int i = 0; i < n; i++)
    {
        if (visited[i]) continue; 

        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << a[i] << " occurs " << count << " time" << endl;
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
    printarray(A, n);
    countOccurrences(A, n);
    return 0;
}
