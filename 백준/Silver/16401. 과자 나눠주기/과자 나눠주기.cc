#include <bits/stdc++.h>
using namespace std;

int n,m,sum;
int l[1000002];

bool sol(int x){
    if(x==0) return true;
    long long cnt=0;
    for(int i=0;i<n;i++){
        cnt+=l[i]/x;
    }
    return cnt>=m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>m>>n;
    for(int i=0;i<n;i++) cin>>l[i];
    sort(l,l+n);
    int left=0, right=*max_element(l,l+n);

    while(left<right){
        int middle=(left+right+1)/2;
        if(sol(middle)) left=middle;
        else right=middle-1;
    }

    cout<<left;

    return 0;
}