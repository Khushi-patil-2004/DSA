#include<iostream>
#include<climits>
using namespace std;

bool check(int arr[], int n) {
for(int i=1;i<n;i++)
{
    if(arr[i] < arr[i-1])
    {
        return false;
    }
}
return true;
}
int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;

	if (n < 2) {
		cout << "Array should have at least 2 elements to find second largest." << endl;
		return 0;
	}

	int A[n];
	cout << "Enter the array elements:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	bool found = check(A,n);
	if (found)
		cout << "yes " <<  endl;
	else
		cout << "No " << endl;

	return 0;
}
