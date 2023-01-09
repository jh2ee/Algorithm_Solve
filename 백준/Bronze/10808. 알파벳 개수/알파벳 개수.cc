#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int ans[26]={};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        ans[s[i]-'a']++;
    }
    for(int i=0;i<26;i++) cout<<ans[i]<<" ";
}