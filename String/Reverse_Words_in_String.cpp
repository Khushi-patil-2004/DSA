// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
// In other words, return true if one of s1's permutations is the substring of s2.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseWords(string s)
{
    int n = s.length();
    string answer = "";
    reverse(s. begin(),s.end());
   for(int i=0;i<n;i++)
   {
       string word = "";
       while(i < n && s[i]!=' ')
       {
           word+= s[i];
           i++;
       }
      reverse(word. begin(),word.end());
      if(word.length() > 0)
      {
       answer+=" "+word;   
      }
   }
   return answer.substr(1);
}
int main()
{
    string s;
   cout << "Enter the  string: ";
    getline(cin, s);
    
   string result = reverseWords(s);
   cout<<"output = "<< result<<endl;;
    return 0;
}
