#include <bits/stdc++.h>
using namespace std;

int n,ans;
int p[1002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    for(int i=1;i<n;i++){
        p[i]+=p[i-1];
    }
    for(int i=0;i<n;i++) ans+=p[i];
    cout<<ans;
    return 0;
}