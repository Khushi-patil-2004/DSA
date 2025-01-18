//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".
#include<iostream>
#include<string>
using namespace std;

string longestCommonPrefix(string str[],int n)
{
    if(n == 0)
    {
        return " ";
    }
    string prefix = str[0];
    
    for(int i=1;i<n;i++)
    {
        int j=0;
       while (j < prefix.length() && j < str[i].length() && prefix[j] == str[i][j]) {
            j++;
        }
        prefix = prefix.substr(0,j);
         if (prefix == "") {
            return ""; 
         }
    }
    return prefix;
    
}
int main()
{     int n;
  cout << "Enter the number of strings: ";
   cin >> n;
   cin.ignore();
    string str[n];
    cout<<"enter the string"<<endl;
     for (int i = 0; i < n; i++) {
        getline(cin, str[i]);
    }
     string result = longestCommonPrefix(str, n);
    cout << "Longest Common Prefix: " << result << endl;
    
    return 0;
}
