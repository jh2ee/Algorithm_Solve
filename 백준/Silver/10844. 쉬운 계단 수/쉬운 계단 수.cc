#include <bits/stdc++.h>
using namespace std;

int n;
long long ans=0;
long long d[102][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=1;i<=9;i++) d[1][i]=1;

    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j!=0) d[i][j]+=d[i-1][j-1];
            if(j!=9) d[i][j]+=d[i-1][j+1];
            d[i][j]%=1000000000;
        }
    }
    for(int i=0;i<=9;i++){
        ans+=d[n][i];
    }
    cout<<ans%1000000000;
    return 0;
}