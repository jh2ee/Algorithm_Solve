#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10]; //수열 저장
bool used[10];
void func(int k,int num){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=num;i<=n;i++){
        if(used[i]) continue;
        if(k!=0&&arr[k-1]>=i) continue;
        arr[k]=i; used[i]=1;
        func(k+1,num+1);
        used[i]=0;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>m;
    func(0,1);
    return 0;
}