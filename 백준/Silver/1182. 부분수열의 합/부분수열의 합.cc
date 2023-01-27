#include <bits/stdc++.h>
using namespace std;

int n,s,cnt=0;
int num[30];

void func(int k, int sum){
    if(k==n){
        if(sum==s) cnt++;
        return;
    }
    func(k+1,sum); //수를 더하지 않는 경우
    func(k+1,sum+num[k]); //수를 더하는 경우 k번째 입력된 수
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    func(0,0);
    if(s==0) cnt--;
    cout<<cnt;

    return 0;
}