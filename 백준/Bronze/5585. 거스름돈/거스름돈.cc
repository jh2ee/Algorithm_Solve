#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int coin[6]={500,100,50,10,5,1};
    int n, index=0, ans=0;
    cin>>n;
    int change=1000-n;

    while(change>0){
        if(change>=coin[index]){
            change-=coin[index];
            ans++;
        }
        else{
            if(index==5) break;
            index++;
        }
    }

    cout<<ans<<"\n";

    return 0;
}