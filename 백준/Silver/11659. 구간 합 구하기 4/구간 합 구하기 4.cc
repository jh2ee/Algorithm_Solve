#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[100002];
int d[100002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        d[i]=d[i-1]+arr[i];
    }
    while(m--){
        int i,j;
        cin>>i>>j;
        cout<<d[j]-d[i-1]<<"\n";
    }

    return 0;
}