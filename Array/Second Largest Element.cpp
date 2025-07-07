#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int a[], int n) {
	int first = INT_MIN, second = INT_MIN;

	for (int i = 0; i < n; i++) {
		if (a[i] > first) {
			second = first;
			first = a[i];
		}
		else if (a[i] > second && a[i] != first) {
			second = a[i];
		}
	}

	return second;
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
