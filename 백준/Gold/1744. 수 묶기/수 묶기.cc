#include <bits/stdc++.h>
using namespace std;

int n,num;
int pcnt,ncnt;
vector<int> pos,neg;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num>0){
            pos.push_back(num);
            pcnt++;
        }
        else{
            neg.push_back(num);
            ncnt++;
        }
    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    long long ans=0;

    if(pcnt%2==0){
        for(int i=0;i<pcnt-1;i+=2){
            if(pos[i]==1){
                ans+=1+pos[i+1]; continue;
            }
            ans+=pos[i]*pos[i+1];
        }
    }
    else{
        for(int i=1;i<pcnt-1;i+=2){
            if(pos[i]==1){
                ans+=1+pos[i+1]; continue;
            }
            ans+=pos[i]*pos[i+1];
        }
        ans+=pos[0];
    }

    if(ncnt%2==0){
        for(int i=0;i<ncnt-1;i+=2){
            ans+=neg[i]*neg[i+1];
        }
    }
    else{
        for(int i=0;i<ncnt-2;i+=2){
            ans+=neg[i]*neg[i+1];
        }
        ans+=neg[ncnt-1];
    }
    cout<<ans;

    return 0;
}