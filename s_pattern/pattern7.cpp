#include<iostream>                                 
using namespace std;
void pattern(int n)
{
 for(int i=0;i<n;i++)
 {
     //space
     for(int j =0; j<i; j++)
     {
         cout<<" ";
     }
     //star
     for(int j=0;j< 2*n - (2*i+1);j++)
     {
         cout<<"*";
     }
     //space
    for(int j =0; j<i; j++)
     {
         cout<<" ";
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
***********
 *********
  *******
   ***** 
    ***    
     *
