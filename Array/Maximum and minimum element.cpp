#include<iostream>
#include <climits>
using namespace std;
void printarray(int a[],int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<a[i]<<"|";
	}
	cout<<" ";
}
int smallest(int a[],int n)
{
	int small = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i] < small)
		{
			small = a[i];
		}
		// small = min(a[i],small);
	}
	return small;
}
int largest(int a[],int n)
{
	int large = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i] > large)
		{
			large = a[i];
		}
	}
	return large;
}

int main()
{
	int n;
	int A[n];
	cout<<"enter the size of an array";
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	printarray(A,n);
	int small=smallest(A,n);
	cout<<"Smallest element in array is :"<<small<<endl;
     int large = largest(A,n);
	cout<<"Largest element in array is :"<<large<<endl;
	
	return 0;
}
