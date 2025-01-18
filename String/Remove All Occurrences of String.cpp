#include<iostream>
#include<string>
using namespace std;

 string removeOccurrences(string s, string part) {
    // Find and erase occurrences of 'part' in 's'
    while(s.length() > 0 && s.find(part) < s.length())
    {
        s.erase( s.find(part),part.length());
    }
    return s;
 }
int main()
{
    string s,part;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    cout<<"enter the sub-string(part)"<<endl;
    getline(cin,part);
    string r = removeOccurrences(s,part);
    cout<<"output = "<<r<<endl;
    return 0;
    
}
