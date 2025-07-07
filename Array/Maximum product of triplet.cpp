
//Maximum product of a triplet
#include<iostream>
#include<algorithm>
using namespace std;

void printarray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "|";
    }
    cout << endl;
}

int Maximumproduct(int a[], int n) {
    int product = 0;
    sort(a,a+1);
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int current_product = a[i] * a[j] * a[k];
                product = max(product, current_product);
            }
        }
    }
   return product;

}
// or 
// int Maximumproduct(int a[], int n) {
//     sort(a,a+n);
 
//    int  product = max(a[n-1] * a[n-2] * a[n-3], a[0] * a[1] * a[n-1]);
//    return product;

// }

int main() {
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    int A[n];
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    printarray(A, n);
    int large=Maximumproduct(A, n);
    cout<<large;

    return 0;
}
