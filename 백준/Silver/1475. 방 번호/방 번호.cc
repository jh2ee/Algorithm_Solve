#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int n[9]={};
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'==9) n[6]++;
        else{ n[s[i]-'0']++; }
    }
    n[6]=(n[6]+1)/2;
    sort(n,n+9);
    cout<<n[8]<<"\n";
}