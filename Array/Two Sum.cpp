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
void twoSum(int a[], int n, int target)
{
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == target)
            {
                cout << "Two elements found at indices " << i << " and " << j;
                cout << " (values: " << a[i] << " + " << a[j] << " = " << target << ")" << endl;
                found = true;
                return; 
            }
        }
    }
    if (!found)
    {
        cout << "No two elements found with sum = " << target << endl;
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

    int target;
    cout << "Enter the target sum for Two Sum: ";
    cin >> target;

    twoSum(A, n, target);

    return 0;
}
