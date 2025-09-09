#include<iostream>                                 
using namespace std;
void pattern(int n)
{
        int space = 2*n-2;
for(int i=1;i<=2*n-1;i++)
{
    int star = i;
    if(i > n) star = 2*n-i;
    //star
    for(int j=0;j<star;j++)
    {
        cout<<"*";
    }
    //space
    for(int j=0;j<space;j++)
    {
        cout<<" ";
    }
    //star
    for(int j =0;j<star;j++)
    {
        cout<<"*";
    }
    if(i < n ) space-=2;
    else space+=2;
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
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
