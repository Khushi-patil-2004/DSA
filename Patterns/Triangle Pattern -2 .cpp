#include <iostream>
using namespace std;
void trianglepattern(int n)
{ 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
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
