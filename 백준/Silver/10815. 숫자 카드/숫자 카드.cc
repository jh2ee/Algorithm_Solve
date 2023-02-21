#include <bits/stdc++.h>
using namespace std;

int n,m,num;
int a[500002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>num;
        cout<<binary_search(a,a+n,num)<<" ";
    }

    return 0;
}