
//Adding one to number represented as array of digits
#include<iostream>
using namespace std;
void addOne(int a[], int n) {
int carry = 1;
for(int i=n-1;i>=0;i--)
{
    int sum = a[i]+carry;
    a[i] = sum%10;
    carry = sum/10;
}
if(carry){
    cout<<"1";
}
for(int i = 0;i<n;i++)
{
    cout<<a[i];
}
cout<<endl;
}
int main() {
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    int A[n];
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
   addOne(A, n);
    return 0;
}
