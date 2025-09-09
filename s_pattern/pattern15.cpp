#include<iostream>                                 
using namespace std;
void pattern(int n)
{
for(int i=0;i<n;i++)
{
    char ch = 'A'+i;
    for(int j = 0;j<=i;j++)
    {
    cout<<ch;
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
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
HHHHHHHH
