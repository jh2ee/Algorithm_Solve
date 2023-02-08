#include <bits/stdc++.h>
using namespace std;

int n,ans=-10000;
int arr[100002];
int d[100002]; //index까지의 연속된 수의 합 저장

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        d[i]=max(d[i-1]+arr[i],arr[i]);
        if(ans<d[i]) ans=d[i];
    }
    cout<<ans;
    return 0;
}