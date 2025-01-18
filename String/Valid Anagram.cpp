// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s,string t) {
    //convet the string in lower case
   for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]); 
    }
    for (int i = 0; i < t.length(); i++)
    {
        t[i] = tolower(t[i]); 
    }
    // check the length of string
 if(s.length()!= t.length())
 {
     return false;
 }
 //check whether two string conatin same number of each character
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{
    string s,t;
   cout << "Enter the first string: ";
    getline(cin, s);
    cout << "Enter the second string: ";
    getline(cin, t);
    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
    
}
