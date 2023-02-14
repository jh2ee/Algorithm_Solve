#include <bits/stdc++.h>
using namespace std;

int n,ans;
int a[52], b[52];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);

    for(int i=1;i<=n;i++){
        ans+=b[n-i]*a[i-1];
    }
    cout<<ans;

    return 0;
}