#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    while(m--){
        int num; cin>>num;
        cout<<binary_search(a,a+n,num)<<"\n";
    }
    return 0;
}