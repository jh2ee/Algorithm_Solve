#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long ans=0;
    stack<pair<int,int> > s; // h, 같은 h원소 수의 쌍
    cin>>n;
    while(n--){
        int h; cin>>h;

        //큰 수
        while(!s.empty()&&s.top().first<h){
            ans+=s.top().second; //같은 원소 끼리의 쌍 + h와의 쌍
            s.pop();
        }

        if(s.empty()) s.push(make_pair(h,1));
        else{
            //같은 수
            if(s.top().first==h){ 
                int cnt=s.top().second;
                s.pop();
                if(!s.empty()) ans++;

                ans+=cnt;
                s.push(make_pair(h,1+cnt)); //1+cnt=같은 원소끼리의 쌍 + 이후에 올 값과의 쌍
            }
            //작은 수
            else{
                ans++; //이전 top과의 쌍
                s.push(make_pair(h,1)); //이후에 올 값과의 쌍
            }
        }
    }
    cout<<ans;
}