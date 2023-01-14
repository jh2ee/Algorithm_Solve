#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    stack<char> s;
    string in;
    int cnt=0, num=1;

    cin>>in;
    for(int i=0;i<in.length();i++){
        //여는 괄호
        if(in[i]=='('){
            s.push(in[i]);
            num*=2;
        }
        else if(in[i]=='['){
            s.push(in[i]);
            num*=3;
        }
        //닫는 괄호
        else if(in[i]==')'){
            if(s.empty()||s.top()!='('){
                cout<<0; return 0;
            }
            if(in[i-1]=='(') cnt+=num;
            s.pop(); num/=2;
        }
        else if(in[i]==']'){
            if(s.empty()||s.top()!='['){
                cout<<0; return 0;
            }
            if(in[i-1]=='[') cnt+=num;
            s.pop(); num/=3;
        }

    }
    if(s.size()!=0) cnt=0;
    cout<<cnt;
}