#include <iostream>
using namespace std;
void integersquarepattern(int n)
{
    int count = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cout << count << " ";
             count++;
        //  if(count > 100) count = 1;
        }
         cout << endl;
    }
}
void charactersquarePattern(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for(int j= 1; j<=n;j++) {
           cout << ch << " ";
            ch++;
            if(ch > 'Z') ch = 'A';
        }
        cout << endl;
    }
}

int main() {
 int n;
 cout<<"enter the number:"<<endl;
 cin>>n;
 cout<<"Integer Square Pattern"<<endl;
  integersquarepattern(n);
  cout<<" Character Square Pattern"<<endl;
  charactersquarePattern(n);
    return 0;
}
