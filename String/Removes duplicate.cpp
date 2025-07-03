#include <iostream>
#include <string>
using namespace std;

string removeDups(string str) {
    bool seen[26] = {false};  // An array to keep track of seen characters
    string result = "";  // String to store the result without duplicates

    for (int i = 0; i < str.length();i++) {
        char c = str[i];  // Accessing character by index
        if (!seen[c - 'a']) {  // If the character has not been seen before
            result += c;  // Add it to the result
            seen[c - 'a'] = true;  // Mark it as seen
        }
    }
    return result;  // Return the result string
}

int main() {
    string str;
    cout<<"enter the string:";
    cin>>str;
    cout << removeDups(str) << endl;  
    return 0;
}
