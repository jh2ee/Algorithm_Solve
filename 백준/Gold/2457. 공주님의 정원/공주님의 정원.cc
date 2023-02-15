#include <bits/stdc++.h>
using namespace std;

int n, m1, d1, m2, d2, ans;
int Start=301, End=1130;
vector<pair<int,int> > f;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m1>>d1>>m2>>d2;
        f.push_back({m1*100+d1,m2*100+d2});
    }
    
    int t=301;
    while(t<1201){
        int temp=t;
        for(int i=0;i<n;i++){
            if(f[i].first<=t&&f[i].second>temp){
                temp=f[i].second;
            }
        }
        if(t==temp){
            cout<<0; return 0;
        }
        ans++;
        t=temp;
    }
    cout<<ans;
    return 0;
}