#include <bits/stdc++.h>
using namespace std;

int n,End,ans;
pair<int,int> p[1000002]; //x,y

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(i==0){ //첫번째
            ans+=abs(p[i].second-p[i].first);
            End=p[i].second;
        }
        else{
            if(End<p[i].first){ //선이 안겹치는 경우
                ans+=abs(p[i].second-p[i].first);
                End=p[i].second;
            }
            else{ //겹치는 경우
                if(End>p[i].second) continue;
                ans+=abs(p[i].second-End);
                End=p[i].second;
            }
        }
    }
    cout<<ans;

    return 0;
}