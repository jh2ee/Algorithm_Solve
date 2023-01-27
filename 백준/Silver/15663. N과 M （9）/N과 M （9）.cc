#include <bits/stdc++.h>
using namespace std;

int n,m;
int num[9]; //숫자 입력받음
int arr[9]; //수열 저장
bool used[9];

void func(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    int temp=0;
    for(int i=0;i<n;i++){
        if(used[i]||temp==num[i]) continue;
        arr[k]=num[i]; used[i]=1;
        temp=num[i];
        func(k+1);
        used[i]=0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    func(0);

    return 0;
}