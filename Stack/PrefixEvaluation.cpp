#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int prefixEvaluation(string st){
    stack<int>s;
    for(int i=st.length()-1;i>=0;i--){
        if(isalnum(st[i])){
            s.push(st[i]-'0');
        }else{
            int op1=s.top();
            s.pop();
            int op2=s.top();
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
                case '^':
                s.push(pow(op1,op2));
                break;
            }
        }
    }
    return s.top();
}

int main(){
    cout<<prefixEvaluation("*2+-454");
}
