// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
// In other words, return true if one of s1's permutations is the substring of s2.
#include<iostream>
#include<string>
using namespace std;
bool isFreqSame(int freq1[],int freq2[])
{
    for(int i=0;i<26;i++)
    {
        if(freq1[i] != freq2[i])
        {
         return false;   
        }
    }
    return true;
}

bool  containsPermutation(string s1 , string s2 ) 
{
    // store the frequency of character in s1 string
    int freq[26] = {0};
    for(int i=0;i<s1.length();i++)
    {
        
        freq[s1[i]-'a']++;
    }
    // window size
    int wind_size = s1.length(); 
    // search permutation of s1 in s2 string
    for(int i=0;i<s2.length();i++)
    {
        int wind_idx = 0; // window index 
        int idx = i;// s2 string index
        int wind_freq[26] = {0};
        while(wind_idx < wind_size && idx < s2.length())
        {
            wind_freq[s2[idx]-'a']++;
            wind_idx++; 
            idx++;
        }
        // check if frequency of character  is same 
        if(isFreqSame(freq,wind_freq))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1,s2;
   cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);
    
    if (containsPermutation(s1, s2)) {
        cout << "Yes, s2 contains a permutation of s1." << endl;
    } else {
        cout << "No, s2 does not contain a permutation of s1." << endl;
    }
    return 0;
}
