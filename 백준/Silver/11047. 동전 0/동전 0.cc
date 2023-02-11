#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[12];
int ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(1){
        if(k>=a[n]){
            ans++;
            k-=a[n];
        }
        else n--;
        if(n==0) break;
    }
    cout<<ans;
    return 0;
}