#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,v,ans=0; 
    cin>>n;
    int a[101]={};
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>v;
    for(int i=0;i<n;i++){
        if(a[i]==v) ans++;
    }
    cout<<ans;
}