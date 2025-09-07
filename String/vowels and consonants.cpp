#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string str;
  cout<<"enter a string:";
  getline(cin,str);
  int vowels = 0;
  int consonants = 0;
  for(int i=0;i<str.length();i++)
  {
      char ch = tolower(str[i]);
      if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
      {
          vowels++;
      }
      else{
          consonants++;
      }
  }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;


    return 0;
}
