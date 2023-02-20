#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500002];

int bs1(int len,int target){
    int left=0, right=len;
    while(left<right){
        int middle=(left+right)/2;
        if(a[middle]>=target) right=middle;
        else left=middle+1;
    }
    return left;
}

int bs2(int len,int target){
    int left=0, right=len;
    while(left<right){
        int middle=(left+right)/2;
        if(a[middle]>target) right=middle;
        else left=middle+1;
    }
    return left;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    while(m--){
        int num; cin>>num;
        cout<<bs2(n,num)-bs1(n,num)<<" ";
    }


    return 0;
}