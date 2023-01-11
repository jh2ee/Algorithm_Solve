#include<iostream>
using namespace std;

int main(){
    int n;
    int ans[31]={};

    for(int i=0;i<28;i++){
        cin>>n;
        ans[n]=1;
    }
    for(int i=1;i<=30;i++){
        if(ans[i]==0) cout<<i<<"\n";
    }
}