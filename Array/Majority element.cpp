#include<iostream>
using namespace std;
int majority_element(int arr[],int n)
{
   int majority = arr[0] ;
   int vote = 1;
   for(int i=1;i<n;i++)
   {
       if(vote == 0)
       {
           vote++;
           majority = arr[i];
       }else if(majority == arr[i])
       {
           vote++;
       }else
       {
           vote--;
       }
   }
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == majority)
            count++;
    }
    if(count > n/2)
        return majority;
    else
        return -1;
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
    int result = majority_element(arr, n);
    cout<<"element that appears more than n/2 time in array:"<<result<<endl;
    return 0;
}  
