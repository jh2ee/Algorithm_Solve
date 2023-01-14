#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    stack<char> s;
    string input;
    int cnt=0;

    cin>>input;
    for(int i=0;i<input.length();i++){
        if(input[i]=='('){
            s.push(input[i]);
        }
        else{ //input이 ) 인 경우
            if(input[i-1]=='('){ //razor인 경우
                s.pop();
                cnt+=s.size();
            }
            else{
                s.pop();
                cnt++;
            }
        }
    }
    cout<<cnt;
}