#include<iostream>                                 
using namespace std;
void pattern(int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i == 0 || j == 0 || i == n-1 || j == n-1)
        {
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
}
 }
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"Pattern:"<<endl;
    pattern(n);
    return 0;
}
output:
******
*    *
*    *
*    *
*    *
******
