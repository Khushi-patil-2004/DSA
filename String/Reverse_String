#include<iostream>
#include<string>
using namespace std;
string Reverse(string str)
{
        int start = 0;
        int end = str.length()-1;
        while(start<end)
        {
            swap(str[start],str[end]);
            start++;
            end--;
        }
        return str;
}
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    cout<<"Input:"<<str<<endl;
    cout<<"string in reverse order"<<endl;
    string s = Reverse(str);
    cout<<"Output:"<<s<<endl;
    return 0;
}
