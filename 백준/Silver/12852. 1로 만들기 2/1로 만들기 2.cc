#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000002];
int pre[1000002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    d[1]=0;
    for(int i=2;i<=n;i++){
        d[i]=d[i-1]+1; 
        pre[i]=i-1;
        if(i%2==0&&d[i]>d[i/2]+1){
            d[i]=d[i/2]+1;
            pre[i]=i/2;
        }
        if(i%3==0&&d[i]>d[i/3]+1){
            d[i]=d[i/3]+1;
            pre[i]=i/3;
        }
    }
    cout<<d[n]<<"\n";
    while(1){
        cout<<n<<" ";
        if(n==1) break;
        n=pre[n];
    }

    return 0;
}