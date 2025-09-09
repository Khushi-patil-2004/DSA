#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }

        // Space
        int spaces = 2*(n-i);
        for(int j=1; j<=spaces; j++)
        {
            cout << " ";
        }
        for(int j=i; j>=1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Pattern:" << endl;
    pattern(n);
    return 0;
}
output:
1          1
12        21
12       321
1234    4321
12345  54321
123456654321
