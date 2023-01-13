#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    stack<int> s;
    vector<string> ans;
    int n,pos=1; cin>>n;
    while(n--){
        int num; cin>>num;
        for(;pos<=num;pos++){
            s.push(pos);
            ans.push_back("+");
        }
        if(s.top()!=num){
            cout<<"NO\n";
            return 0;
        }
        s.pop();
        ans.push_back("-");
    }
    for(auto i:ans){
        cout<<i<<"\n";

    }
}