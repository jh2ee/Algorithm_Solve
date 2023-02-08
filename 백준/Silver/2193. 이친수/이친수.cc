#include <bits/stdc++.h>
using namespace std;

int n; //n자리
long long d[100][2];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    d[1][1]=1;
    d[2][1]=0; d[2][0]=1;
    for(int i=3;i<=n;i++){
        d[i][0]=d[i-1][0]+d[i-1][1];
        d[i][1]=d[i-1][0];
    }
    cout<<d[n][0]+d[n][1];
    return 0;
}