#include <bits/stdc++.h>
using namespace std;

int n,ans;
pair<int,int> a[100002];
int t;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(t<=a[i].second){
            ans++;
            t=a[i].first;
        }
    }
    cout<<ans;
    return 0;
}