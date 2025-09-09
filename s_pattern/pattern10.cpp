#include<iostream>                                 
using namespace std;
void pattern(int n)
{
for(int i=0;i<n;i++)
{
    int count = 1;
    if(i%2 == 0) count = 1;
    else count = 0;
    for(int j=0;j<=i;j++)
    {
        cout<<count;
        count = 1-count;
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
1
01
101
0101
10101
010101
