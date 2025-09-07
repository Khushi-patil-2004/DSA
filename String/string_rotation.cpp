#include <iostream>
#include <string>
using namespace std;

// Function to left rotate string by d positions
string leftRotate(string s, int d) {
    int n = s.length();
    d = d % n;  // handle if d > n
    return s.substr(d) + s.substr(0, d);
}

// Function to right rotate string by d positions
string rightRotate(string s, int d) {
    int n = s.length();
    d = d % n; 
    return s.substr(n - d) + s.substr(0, n - d);
}

int main() {
    string s;
    int d;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter number of shifts: ";
    cin >> d;

    cout << "Left Rotation by " << d << ": " << leftRotate(s, d) << endl;
    cout << "Right Rotation by " << d << ": " << rightRotate(s, d) << endl;

    return 0;
}
