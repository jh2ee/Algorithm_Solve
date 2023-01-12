#include<iostream>
using namespace std;

int func(int &a){
    int h,t,o;
    h=a/100; o=a%10; t=(a-h*100)-o;
    a=h+t+o*100;
    return a;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n1,n2;
    cin>>n1>>n2;
    func(n1); func(n2);
    if(n1>n2) cout<<n1;
    else cout<<n2;
}