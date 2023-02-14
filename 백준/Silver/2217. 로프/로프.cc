#include <bits/stdc++.h>
using namespace std;

int n,ans=0;
int w[100002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    sort(w,w+n);

    for(int i=1;i<=n;i++){
        if(ans<w[n-i]*i) ans=w[n-i]*i;
    }
    cout<<ans;
    return 0;
}