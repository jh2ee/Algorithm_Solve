#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        int p[1000002];
        int n;
        long long ans=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>p[i];

        int temp=p[n-1];
        for(int i=n-2;i>=0;i--){
            if(p[i]>temp) temp=p[i]; //더 큰 값이 있을 경우 대치
            ans+=temp-p[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}