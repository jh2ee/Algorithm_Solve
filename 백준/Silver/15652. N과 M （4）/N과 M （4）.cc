#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[8];

void func(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(k!=0&&arr[k-1]>i) continue;
        arr[k]=i;
        func(k+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>m;
    func(0);

    return 0;
}