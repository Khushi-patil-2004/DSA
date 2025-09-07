#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
    // Check length first
    if (s1.length() != s2.length()) {
        return false;
    }
    // Concatenate s1 with itself
    string temp = s1 + s1;
    // Check if s2 is substring of temp
    return (temp.find(s2) != string::npos);
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    if (isRotation(s1, s2)) {
        cout << "The second string is a rotation of the first string." << endl;
    } else {
        cout << "The second string is NOT a rotation of the first string." << endl;
    }

    return 0;
}
