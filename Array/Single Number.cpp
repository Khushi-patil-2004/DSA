#include<iostream>
using namespace std;
int singlenumber(int arr[],int n)
{
    int sign = arr[0];
    for(int i=1;i<n;i++)
    {
        sign = sign^arr[i];
    }
    return sign;
}
int main()
{
    int n;
    cout<<"number of elements to be store in array:";
    cin>>n;
     int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = singlenumber(arr, n);
    cout<<"element that appears only 1 time in array:"<<result<<endl;
    return 0;
}  
