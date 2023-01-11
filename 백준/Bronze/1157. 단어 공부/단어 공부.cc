#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    char c;
    int n[26]={};
    int temp=0;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a') n[s[i]-'a']++;
        else{ n[s[i]-'A']++; }
    }
    for(int i=0;i<26;i++){
        if(n[i]>n[temp]) temp=i;
    }
    int a=0;;
    for(int i=0;i<26;i++){
        if(n[temp]==n[i]&&temp!=i) a++;
    }
    if(a>0) cout<<"?";
    else{
        c=temp+'A';
        cout<<c;
    }
}