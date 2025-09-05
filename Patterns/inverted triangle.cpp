#include <iostream>
using namespace std;

void Pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n - (2*i+1);j++)
        {
            cout<<"*";
        }
           //space
        for(int j=0;j<=0;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    Pattern(n);
    return 0;
}
