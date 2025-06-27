#include <iostream>
using namespace std;
void trianglepattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
           cout <<(i+1)<<" ";
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
