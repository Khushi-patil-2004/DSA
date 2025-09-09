#include<iostream>                                 
using namespace std;
void pattern(int n)
{
for(int i=1;i<=n;i++)
{
    for(char ch = 'A';ch <=('A'+ i);ch++)
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
AB
ABC
ABCD
ABCDE
ABCDEF
