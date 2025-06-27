#include <iostream>
using namespace std;
void trianglepattern(int n)
{ 
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j>0;j--)
        {
           cout <<j;
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
