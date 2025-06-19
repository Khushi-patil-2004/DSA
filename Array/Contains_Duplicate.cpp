#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i]<<"|";
	}
	cout<<" ";
}
bool duplicate(int a[],int n)
{
 for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                return true; 
            }
        }
    }
    return false;	
}
int main()
{
	int n;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	int A[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>A[i];
	}
	printarray(A,n);
	if (duplicate(A, n)) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }
return 0;
}
