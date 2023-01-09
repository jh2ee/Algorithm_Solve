#include<iostream>
using namespace std;

int main(){
    long long a,b,n;
    cin>>a>>b;
    if(b>a){
        cout<<b-a-1<<"\n";
        for(long long i=a+1;i<b;i++) cout<<i<<" ";
        cout<<"\n";
    }
    else if(a>b){
        cout<<a-b-1<<"\n";
        for(long long i=b+1;i<a;i++) cout<<i<<" ";
        cout<<"\n";
    }
    else{
        cout<<"0"<<"\n";
    }
}