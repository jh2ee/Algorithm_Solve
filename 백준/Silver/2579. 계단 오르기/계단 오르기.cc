#include <bits/stdc++.h>
using namespace std;

int n;
int stairs[302];
int d[302][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>stairs[i];
    }
    if(n==1){
        cout<<stairs[1];
        return 0;
    }

    d[1][1]=stairs[1]; d[1][2]=stairs[1];
    d[2][1]=stairs[2]; d[2][2]=stairs[1]+stairs[2];
    for(int i=3;i<=n;i++){
        d[i][1]=max(d[i-2][1],d[i-2][2])+stairs[i];
        d[i][2]=d[i-1][1]+stairs[i];
    }
    cout<<max(d[n][1],d[n][2]);
    return 0;
}