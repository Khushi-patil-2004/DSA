#include<iostream>
#include<climits>
using namespace std;

void reverse(int arr[],int start,int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void left_rotated(int arr[],int n, int k)
{
 reverse(arr,0,n-1);
 reverse(arr,0,n-k-1);
 reverse(arr,n-k,n-1);
 
}
int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int A[n];
	cout << "Enter the array elements:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int k;
	cout<<"number of rotation:";
	cin>>k;
 left_rotated(A,n,k);
	for (int i = 0; i < n; i++) {
		cout<<A[i];
	}

	return 0;
}
