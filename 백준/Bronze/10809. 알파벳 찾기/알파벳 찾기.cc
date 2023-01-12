#include<iostream>
#include<cstring>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin>>s;
    int a[26]={};
    for(int i=0;i<26;i++) a[i]=-1;
    for(int i=0;i<s.length();i++){
        if(a[s[i]-'a']<0) a[s[i]-'a']=i;
    }
    for(int i=0;i<26;i++){
        cout<<a[i]<<" ";
    }
}