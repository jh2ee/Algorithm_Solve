#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    int c[26]={};
    int count=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++) c[s1[i]-'a']++;
    for(int i=0;i<s2.length();i++) c[s2[i]-'a']--;
    for(int i=0;i<26;i++){
        if(c[i]!=0) count+=abs(c[i]);
    }
    cout<<count;
}