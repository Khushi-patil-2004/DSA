#include<iostream>
#include<stack>
using namespace std;

int postfixEvaluation(string st){
    stack<int>s;
    for(int i=0;i<st.length();i++){
        if(isdigit(st[i])){
            s.push(st[i]-'0');
        }
        else{
            int op2=s.top();
            s.pop();
            int op1=s.top();
            s.pop();
            
            switch(st[i]){
                case '+':
                s.push(op1+op2);
                break;
                case '-':
                s.push(op1-op2);
                break;
                case '*':
                s.push(op1*op2);
                break;
                case '/':
                s.push(op1/op2);
                break;
            }
        }
    }
    return s.top();
}
int main(){
    cout<<postfixEvaluation("46+2/5*7+");
    return 0;
}
