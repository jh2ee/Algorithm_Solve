#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    int num;
    int a[1001]={};
    int b[1001]={};

    for(int i=0;i<n;i++){
        cin>>num;
        if(num>=0) a[num]++;
        else b[-num]++;
    }
    for(int i=1000;i!=0;i--){
        if(b[i]>0) cout<<-i<<"\n";
    }
    for(int i=0;i<1001;i++){
        if(a[i]>0) cout<<i<<"\n";
    }
}