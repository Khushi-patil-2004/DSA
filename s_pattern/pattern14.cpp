#include<iostream>                                 
using namespace std;
void pattern(int n)
{
for(int i=0;i<n;i++)
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
A
AB
ABC
ABCD
ABCDE
