#include <iostream>
using namespace std;
void integersquarepattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
         cout << endl;
    }
}
void charactersquarePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + n; ch++) {
            cout << ch << " ";
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
