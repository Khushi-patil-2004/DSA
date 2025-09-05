#include <iostream>
using namespace std;

void Pattern(int n)
{
    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n) star = 2 * n - i; 
        //stars
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        //  stars
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl; 
        // update spaces
        if (i < n)
            spaces -= 2;  //decreasing spaces in upper half
        else
            spaces += 2;  //increasing spaces in lower half
    }
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    Pattern(n);
    return 0;
}
