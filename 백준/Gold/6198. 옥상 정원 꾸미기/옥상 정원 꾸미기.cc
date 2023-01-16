#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    stack<int> s;
    int n;
    long long ans=0; 
    cin>>n;

    while(n--){
        int h; cin>>h;
        while(!s.empty()&&s.top()<=h){
            s.pop(); ans+=s.size();
        }
        s.push(h);
    }
    while(!s.empty()){
            s.pop(); ans+=s.size();
        }
    cout<<ans;
}