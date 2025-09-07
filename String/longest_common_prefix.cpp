//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(string str[], int n) {
    if (n == 0) return "";

    // Step 1: Sort the array of strings
    sort(str, str + n);

    // Step 2: Compare first and last string
    string first = str[0];
    string last = str[n - 1];

    int i = 0;
    while (i < first.length() && i < last.length() && first[i] == last[i]) {
        i++;
    }

    // Step 3: Common prefix is substring of first (or last) up to i
    return first.substr(0, i);
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    string str[n];
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, str[i]);
    }

    string result = longestCommonPrefix(str, n);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
