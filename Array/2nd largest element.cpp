#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[], int n) {
	int largest = arr[0], second_largest=INT_MIN;
	for(int i=0;i<n;i++)
	{
	    if(arr[i] > largest)
	    {
	        second_largest = largest;
	        largest=arr[i];
	    }
	    else
	    {
	        if(arr[i] > second_largest && arr[i] != largest)
	        {
	            second_largest = arr[i];
	        }
	    }
	}
	   return second_largest;
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


	int second = secondLargest(A, n);
	if (second != -1)
		cout << "Second largest element in array is: " << second << endl;
	else
		cout << "No second largest element (all elements may be same)." << endl;

	return 0;
}
