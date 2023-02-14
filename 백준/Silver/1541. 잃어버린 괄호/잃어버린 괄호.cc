#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string cal; cin>>cal;
    int len=cal.length();
    int ans=0,cnt=0,num=0;

    for(int i=len-1;i>=0;i--){
        if(cal[i]=='+'){
            cnt=0;
            continue;
        }
        if(cal[i]=='-'){
            ans-=num;
            num=0;
            cnt=0;
            continue;
        }
        num+=(cal[i]-48)*pow(10,cnt);
        cnt++;
    }
    cout<<ans+num;
    return 0;
}