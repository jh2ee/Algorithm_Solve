#include <bits/stdc++.h>
using namespace std;

int n,cnt=0;
bool rc_used[40]; //행,열 
bool d1_used[40]; //좌상 대각
bool d2_used[40]; //우상 대각


void func(int k){
    if(k==n){
        cnt++;
        return;
    }
    for(int i=0;i<n;i++){
        if(!rc_used[i]&&!d1_used[i+k]&&!d2_used[k-i+n-1]){
            rc_used[i]=1;
            d1_used[i+k]=1;
            d2_used[k-i+n-1]=1;
            func(k+1);
            rc_used[i]=0;
            d1_used[i+k]=0;
            d2_used[k-i+n-1]=0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    func(0);
    cout<<cnt;

    return 0;
}