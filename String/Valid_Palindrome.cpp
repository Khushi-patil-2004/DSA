//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.
#include<iostream>
#include<string>
#include <cctype>
using namespace std;
bool isAlphaNum(string str)
{
   for (int i = 0; i < str.length(); i++)
   {
       char ch = str[i];
       if((ch >='a' && ch <= 'z') || (ch >='A' && ch <= 'Z') || (ch >='0'&& ch <='9') )
       {
           return true;
       }
   }
   return  false;
}
string toLowercase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]); 
    }
    return str;
}
bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length()-1;
    while(start<end)
    {
     while (start < end && !isAlphaNum(string(1, str[start])))
        {
            start++;
        }
           while (start < end && !isAlphaNum(string(1, str[end])))
        {
            end--;
        } 
        if(tolower(str[start]) != tolower(str[end]))
        {
            return false;
        }
        start++;
        end--;
}
    return true;
}
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
  if (isPalindrome(str))
  {
      cout << "The string is a palindrome" << endl;
  }
  else
    {
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}
