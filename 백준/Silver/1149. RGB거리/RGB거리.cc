#include <bits/stdc++.h>
using namespace std;

int n;
int h[1002][3]; //r0 g1 b2
int d[1002][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cin>>h[i][j];
        }
    }
    if(n==1){
        cout<<*min_element(h[1],h[1]+3);
        return 0;
    }
    d[1][0]=h[1][0]; d[1][1]=h[1][1]; d[1][2]=h[1][2];
    for(int i=1;i<=n;i++){
        d[i][0]=min(d[i-1][1],d[i-1][2])+h[i][0];
        d[i][1]=min(d[i-1][0],d[i-1][2])+h[i][1];
        d[i][2]=min(d[i-1][0],d[i-1][1])+h[i][2];
    }
    cout<<*min_element(d[n],d[n]+3);
    return 0;
}