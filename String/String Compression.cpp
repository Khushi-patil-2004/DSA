#include <iostream>
#include <string>
using namespace std;

string stringCompression(string str) {
    int n = str.length();
    string result = "";

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        int count = 0;
        // Count occurrences of current character
        while (i < n && str[i] == ch) {
            count++;
            i++;
        }
        i--;// Step back one position since loop overstepped
        result += ch;// Append character
        // Append count if greater than 1
        if (count > 1) {
            result += to_string(count);
        }
    }
    return result;
}
int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    string result = stringCompression(str);
    cout << "Compressed string: " << result << endl;
    return 0;
}
