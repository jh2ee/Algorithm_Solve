#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a,b,c=1;
    while(1){
        cin>>a>>b>>c;
        if(c==0) break;
        a=a*a; b=b*b; c=c*c;
        if(a-b-c==0||b-a-c==0||c-a-b==0) cout<<"right\n";
        else cout<<"wrong\n";
    }
}