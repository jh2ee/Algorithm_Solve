#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while(cin>>n){
        long long ans=1;
        long long num=1;
        while(1){
            long long temp=num;
            if(temp%n==0) break;
            num=(num*10)+1;
            num%=n;
            ans++;
        }
        cout<<ans<<"\n";
    }

    return 0;
}