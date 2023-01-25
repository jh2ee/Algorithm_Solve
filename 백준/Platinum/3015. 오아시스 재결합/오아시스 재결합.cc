#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    stack<pair<int,int> > s;
    long long cnt=0;
    int n; cin>>n;

    while(n--){
        int h; cin>>h;

        while(!s.empty()&&s.top().first<h){
            cnt+=s.top().second;
            s.pop();
        }

        if(!s.empty()){
            if(s.top().first>h){
                cnt++;
            }
            if(s.top().first==h){
                cnt+=s.top().second;
                s.top().second++;
                if (s.size() != 1) cnt++;
                continue;
            }
        }
        s.push({h,1});
    }
    cout<<cnt;

    return 0;
}