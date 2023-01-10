#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        string s1, s2;
        int c[26]={};
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++) c[s1[i]-'a']++;
        for(int i=0;i<s2.length();i++) c[s2[i]-'a']--;
        sort(c,c+26);
        if(c[0]==0&&c[25]==0) cout<<"Possible\n";
        else{ cout<<"Impossible\n"; }
    }
}