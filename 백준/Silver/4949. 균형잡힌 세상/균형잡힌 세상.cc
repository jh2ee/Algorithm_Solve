#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    while(1){
        string s;
        getline(cin,s);
        if(s==".") break;
        stack<char> stk;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='[') stk.push(s[i]);
            else if(s[i]==')'){
                if(!stk.empty()&&stk.top()=='(') stk.pop();
                else{
                    stk.push(s[i]);
                }
            }
            else if(s[i]==']'){
                if(!stk.empty()&&stk.top()=='[') stk.pop();
                else{
                    stk.push(s[i]);
                }
            }
        }

        if(!stk.empty()) cout<<"no\n";
        else cout<<"yes\n";
    }
}