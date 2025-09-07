#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

char firstUniqueChar(string str) {
    unordered_map<char, int> m;
    queue<int> Q;

    for (int i = 0; i < str.length(); i++) {
        // If character seen first time, push index
        if (m.find(str[i]) == m.end()) {
            Q.push(i);
        }
        m[str[i]]++;

        // Remove from queue if not unique anymore
        while (!Q.empty() && m[str[Q.front()]] > 1) {
            Q.pop();
        }
    }

    return Q.empty() ? '#' : str[Q.front()]; // '#' means no unique char
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char result = firstUniqueChar(str);
    if (result == '#')
        cout << "No unique character found." << endl;
    else
        cout << "First unique character: " << result << endl;

    return 0;
}
