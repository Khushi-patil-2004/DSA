#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) { // Keep looping until n becomes a single digit
        int sum = 0;
        while (n > 0) {
            sum += n % 10; // Add last digit
            n /= 10;       // Remove last digit
        }
        n = sum; 
    }

    cout << "Single digit sum is: " << n << endl;
    return 0;
}
