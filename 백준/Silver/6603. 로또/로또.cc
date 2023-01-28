#include <bits/stdc++.h>
using namespace std;

int k;
int arr[52];
int ans[52];
bool check[52];

void func(int n){
    if(n==6){ //6개 원소 출력
        for(int i=0;i<6;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    int temp=0;
    for(int i=0;i<k;i++){ //k개의 입력 존재, k회 반복
        if(temp==arr[i]) continue;
        if(n!=0&&ans[n-1]>arr[i]) continue; 
        if(check[arr[i]]) continue;
        ans[n]=arr[i]; temp=arr[i];
        check[arr[i]]=1;
        func(n+1);
        check[arr[i]]=0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    do{
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        func(0);
        cout<<"\n";
    }while(k!=0);

    return 0;
}