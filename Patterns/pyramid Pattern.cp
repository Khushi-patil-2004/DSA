#include <iostream>
using namespace std;
void trianglepattern(int n)
{ 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
           cout <<j;
        }
        for(int j=0;j<i;j++)
        {
            cout<<(j+1);
        }
     
        
         cout << endl;
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
