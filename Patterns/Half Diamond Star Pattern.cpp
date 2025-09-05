#include <iostream>
using namespace std;
void trianglepattern(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        
        int star = i;
        if(i>n) star = 2*n-i;
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main() {
 int n;
 cout<<"enter the number:"<<endl;
 cin>>n;
 cout<<"Triangle Pattern"<<endl;
 trianglepattern(n);
    return 0;
}
